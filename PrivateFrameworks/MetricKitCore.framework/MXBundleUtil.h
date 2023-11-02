
@interface MXBundleUtil : NSObject <MXBundleUtilProtocol> {
    NSObject<OS_os_log> * _logHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *logHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bundleIDFromURL:(id)arg1;
- (id)bundleIDFromAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)bundleIDFromPid:(int)arg1;
- (id)init;
- (bool)isAppExtensionFromBundleID:(id)arg1;
- (bool)isAppInstalledForBundleID:(id)arg1;
- (id)logHandle;
- (id)mainAppBundleIDforExtension:(id)arg1;
- (void)setLogHandle:(id)arg1;
- (id)teamIDFromAuditToken:(struct { unsigned int x1[8]; })arg1;

@end
