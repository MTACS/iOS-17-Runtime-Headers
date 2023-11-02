
@interface SiriTTSService.TTSAssetTrialAsset : TTSAsset {
    void assetAttr;
    void downloadToken;
    void factorName;
    void isDownloading;
    void path;
    void progressQueue;
}

@property (nonatomic, readonly) TTSAssetSource *assetSource;
@property (nonatomic, readonly) NSBundle *bundle;
@property (nonatomic, readonly) NSNumber *diskSize;
@property (nonatomic, readonly) NSNumber *downloadSize;
@property (nonatomic, readonly) bool downloading;
@property (nonatomic, readonly) bool locallyAvailable;
@property (nonatomic, readonly) bool purgeable;
@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *versionDescription;
@property (nonatomic, readonly) long long versionNumber;

- (void).cxx_destruct;
- (id)assetSource;
- (id)bundle;
- (void)cancelDownloadingThen:(id /* block */)arg1;
- (id)diskSize;
- (id)downloadSize;
- (void)downloadWithReservation:(id)arg1 useBattery:(bool)arg2 progress:(id /* block */)arg3 then:(id /* block */)arg4;
- (bool)downloading;
- (id)init;
- (bool)locallyAvailable;
- (void)purge;
- (void)purgeImmediately:(bool)arg1;
- (bool)purgeable;
- (id)supportedLanguages;
- (id)versionDescription;
- (long long)versionNumber;

@end
