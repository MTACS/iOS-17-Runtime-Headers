
@interface GCConfigurationBundleFileSystemSource : NSObject <GCConfigurationBundleFileSystemSource> {
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configurationBundleURLsForType:(id)arg1;
- (id)init;

@end
