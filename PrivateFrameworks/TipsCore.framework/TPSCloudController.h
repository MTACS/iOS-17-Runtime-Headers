
@interface TPSCloudController : NSObject {
    NSMutableSet * _displayedContentIDs;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registered;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearDisplayedContentIDs;
- (id)_listDisplayContentIDs;
- (void)checkForUpdates;
- (void)dealloc;
- (void)hintDisplayedForContentID:(id)arg1;
- (id)init;
- (bool)isHintDisplayedForContentID:(id)arg1;
- (void)registerForNotifications:(id)arg1;
- (void)updateKVStoreItems:(id)arg1;

@end
