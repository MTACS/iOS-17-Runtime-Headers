
@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet * _activeCollections;
    NSArray * _notificationObservances;
}

@property (nonatomic, readonly) NSArray *notificationObservances;
@property (nonatomic, readonly, copy) NSArray *observingCollections;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)arg1;
- (void)collectionDidStopObserving:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)notificationObservances;
- (id)observingCollections;

@end
