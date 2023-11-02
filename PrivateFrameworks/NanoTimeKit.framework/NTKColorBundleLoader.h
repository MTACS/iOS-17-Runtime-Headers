
@interface NTKColorBundleLoader : NSObject {
    NTKBundleLoader * _bundleLoader;
    NSObject<OS_dispatch_source> * _colorBundleSource;
    NSURL * _colorBundlesDirectory;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _sortedBundles;
}

@property (nonatomic, retain) NTKBundleLoader *bundleLoader;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *colorBundleSource;
@property (nonatomic, retain) NSURL *colorBundlesDirectory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSArray *sortedBundles;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_startMonitoringColorBundlesDirectoryIfNeeded;
- (id)bundleLoader;
- (id)colorBundleSource;
- (id)colorBundlesDirectory;
- (id)init;
- (id)loadColorBundles;
- (id)queue;
- (void)setBundleLoader:(id)arg1;
- (void)setColorBundleSource:(id)arg1;
- (void)setColorBundlesDirectory:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSortedBundles:(id)arg1;
- (id)sortedBundles;
- (id)sortedBundles:(id)arg1;

@end
