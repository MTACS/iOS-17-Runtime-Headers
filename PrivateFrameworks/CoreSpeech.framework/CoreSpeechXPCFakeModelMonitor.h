
@interface CoreSpeechXPCFakeModelMonitor : NSObject {
    int  _fakeAssetRollNotificationRegistrationToken;
    NSString * _lastFakeModelUsedHash;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldRollFakeModel;
}

@property (nonatomic) int fakeAssetRollNotificationRegistrationToken;
@property (retain) NSString *lastFakeModelUsedHash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property bool shouldRollFakeModel;

- (void).cxx_destruct;
- (void)_registerForFakeAssetRollNotification;
- (int)fakeAssetRollNotificationRegistrationToken;
- (id)init;
- (id)lastFakeModelUsedHash;
- (id)queue;
- (void)setFakeAssetRollNotificationRegistrationToken:(int)arg1;
- (void)setLastFakeModelUsedHash:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setShouldRollFakeModel:(bool)arg1;
- (bool)shouldRollFakeModel;
- (void)start;
- (void)stop;

@end
