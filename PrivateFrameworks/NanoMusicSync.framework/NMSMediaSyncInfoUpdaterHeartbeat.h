
@interface NMSMediaSyncInfoUpdaterHeartbeat : NSObject {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_source> * _currentSyncInfoRequestDateTimer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)start;
- (void)stop;

@end
