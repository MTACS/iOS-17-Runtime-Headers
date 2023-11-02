
@interface ATXWebClipDataStore : NSObject {
    <ATXAppClipLaunchListenerProtocol> * _appClipUsageUpdateListener;
    _ATXDataStore * _dataStore;
}

@property (nonatomic, readonly) <ATXAppClipLaunchListenerProtocol> *appClipUsageUpdateListener;
@property (nonatomic, readonly) _ATXDataStore *dataStore;

- (void).cxx_destruct;
- (id)appClipUsageUpdateListener;
- (id)dataStore;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithDataStore:(id)arg1 contextUpdateListener:(id)arg2;
- (void)updateWithUsageEvent:(id)arg1;
- (id)webClipBundleIdsForAppClip:(id)arg1;

@end
