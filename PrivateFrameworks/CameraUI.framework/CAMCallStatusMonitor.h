
@interface CAMCallStatusMonitor : NSObject {
    NSObject<OS_dispatch_queue> * __avscAccessQueue;
    NSMutableSet * __disabledReasons;
    bool  _callActive;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_avscAccessQueue;
@property (nonatomic, readonly) NSMutableSet *_disabledReasons;
@property (getter=isCallActive, nonatomic) bool callActive;

+ (id)_processNameForPid:(id)arg1;

- (void).cxx_destruct;
- (void)_accessQueue_queryCallActiveStatusForReason:(id)arg1;
- (void)_accessQueue_subscribeToAVSystemControllerNotificationsWithCompletion:(id /* block */)arg1;
- (void)_asyncQueryCallActiveStatusForReason:(id)arg1;
- (id)_avscAccessQueue;
- (id)_descriptionForReasons:(id)arg1;
- (id)_descriptionStringForReason:(long long)arg1;
- (id)_disabledReasons;
- (void)_handleApplicationDidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleCallIsActiveDidChangeNotification:(id)arg1;
- (void)_handleRecordingStateDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_handleSomeClientIsActiveDidChangeNotification:(id)arg1;
- (int)_processIdentifer;
- (void)_registerForAVSystemControllerNotificationsAndQueryState;
- (void)_setCallActive:(bool)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)addDisabledReason:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initDisabledForLaunch;
- (id)initWithInitialDisabledReasons:(id)arg1;
- (bool)isCallActive;
- (void)removeDisabledReason:(long long)arg1;
- (void)setCallActive:(bool)arg1;

@end
