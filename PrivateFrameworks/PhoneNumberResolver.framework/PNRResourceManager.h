
@interface PNRResourceManager : NSObject {
    unsigned int  _catalogLoadRetryMultiplier;
    NSMutableSet * _downloadsInflight;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _downloadsInflightLock;
    NSCache * _fileDataCache;
    NSDate * _lastCatalogLoadTime;
    NSObject<OS_os_log> * _log;
    NSCache * _maURLCache;
    unsigned long long  _stateCaptureHandle;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_URLForInstalledResourceOfType:(id)arg1 logId:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)_assetQueryForPNRResource:(id)arg1;
- (void)_bestStringForInCountryPhoneNumber:(id)arg1 phoneNumberCC:(id)arg2 countryOfDevice:(id)arg3 countryTrieData:(id)arg4 countryStrings:(id)arg5 logId:(id)arg6 resultBlock:(id /* block */)arg7;
- (void)_catalogDownloadFinishedWithResult:(long long)arg1;
- (id)_getDataFrom:(id)arg1 zeroCacheCost:(bool)arg2 logId:(id)arg3;
- (id)_lastCatalogLoadTime;
- (bool)_lookupString:(id)arg1 inTrieMemory:(void*)arg2 value:(unsigned int*)arg3;
- (void)_openLatestAssetWithBasename:(id)arg1 maType:(id)arg2 logId:(id)arg3 resultBlock:(id /* block */)arg4;
- (void)_setLastCatalogLoadTime:(id)arg1;
- (void)_updateCatalog;
- (void)_updateCatalogAfterDelay:(double)arg1;
- (void)catalogLoadThen:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)lookupCCForPhoneNumber:(id)arg1 logId:(id)arg2 withResult:(id /* block */)arg3;
- (void)lookupISOCountryCodeFromNANPNumber:(id)arg1 logId:(id)arg2 withResult:(id /* block */)arg3;
- (void)lookupStringForPhoneNumber:(id)arg1 inCC:(id)arg2 countryCodeOfDevice:(id)arg3 logId:(id)arg4 withResult:(id /* block */)arg5;
- (void)openCountryCodeFileUsingLogId:(id)arg1 withResult:(id /* block */)arg2;
- (void)openNANPFileUsingLogId:(id)arg1 withResult:(id /* block */)arg2;
- (void)openPNRFilesForPrefix:(id)arg1 logId:(id)arg2 withResult:(id /* block */)arg3;

@end
