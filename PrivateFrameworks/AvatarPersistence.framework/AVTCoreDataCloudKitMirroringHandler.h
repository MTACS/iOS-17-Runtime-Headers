
@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler> {
    <AVTBlockScheduler> * _blockScheduler;
    <AVTCoreDataCloudKitMirroringHandlerDelegate> * _delegate;
    <NSObject> * _didResetNotificationToken;
    bool  _exportInFlight;
    <AVTUILogger> * _logger;
    NSNotificationCenter * _notificationCenter;
    <NSObject> * _willResetNotificationToken;
}

@property (nonatomic, readonly) <AVTBlockScheduler> *blockScheduler;
@property (nonatomic) <AVTCoreDataCloudKitMirroringHandlerDelegate> *delegate;
@property (nonatomic, retain) <NSObject> *didResetNotificationToken;
@property (nonatomic) bool exportInFlight;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, retain) NSNotificationCenter *notificationCenter;
@property (nonatomic, retain) <NSObject> *willResetNotificationToken;

- (void).cxx_destruct;
- (id)blockScheduler;
- (void)dealloc;
- (id)delegate;
- (id)didResetNotificationToken;
- (void)didResetSync:(id)arg1;
- (void)exportChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)exportInFlight;
- (void)importChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithLogger:(id)arg1 blockScheduler:(id)arg2;
- (id)logger;
- (id)notificationCenter;
- (void)resetZoneWithManagedObjectContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleExportChangesWithManagedObjectContext:(id)arg1 discretionary:(bool)arg2 workQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setDidResetNotificationToken:(id)arg1;
- (void)setExportInFlight:(bool)arg1;
- (void)setNotificationCenter:(id)arg1;
- (void)setWillResetNotificationToken:(id)arg1;
- (void)startObservingResetSyncWithNotificationCenter:(id)arg1;
- (id)willResetNotificationToken;
- (void)willResetSync:(id)arg1;

@end
