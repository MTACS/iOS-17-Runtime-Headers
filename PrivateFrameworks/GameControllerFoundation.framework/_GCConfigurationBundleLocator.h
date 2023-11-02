
@interface _GCConfigurationBundleLocator : NSObject {
    NSArray * _assetBundles;
    <GCConfigurationBundleSource> * _assetSource;
    NSObject<OS_dispatch_source> * _assetsChangedEventSource;
    NSString * _configurationType;
    NSArray * _filesystemBundles;
    NSObject<OS_dispatch_source> * _filesystemChangedEventSource;
    <GCConfigurationBundleSource> * _filesystemSource;
    NSObject<OS_os_log> * _log;
    NSArray * _mergedBundles;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (readonly) NSString *configurationType;

- (void).cxx_destruct;
- (void)_assetDidChange:(id)arg1;
- (void)_filesystemDidChange:(id)arg1;
- (id)configurationType;
- (void)dealloc;
- (id)fetchBundles;
- (id)init;
- (id)initWithConfigurationType:(id)arg1 provider:(id)arg2;

@end
