
@interface HMDHomePrimaryResidentMessagingHandlerDefaultDataSource : NSObject <HMDHomePrimaryResidentMessagingHandlerDataSource> {
    NSNotificationCenter * _notificationCenter;
    <HMFTimerManager> * _timerManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HMFTimerManager> *timerManager;

- (void).cxx_destruct;
- (id)init;
- (id)notificationCenter;
- (id)timerManager;

@end
