
@interface EDSendLaterUpdateController : NSObject <EDMessageChangeHookResponder, EFLoggable> {
    <EDSendLaterUpdateControllerAlarmDateProvider> * _alarmDateProvider;
    NSObject<OS_dispatch_queue> * _alarmQueue;
    <EDMessageChangeHookResponder> * _hookResponder;
    EDMessagePersistence * _messagePersistence;
    EDOutgoingMessageRepository * _outgoingRepository;
    EDQueryCreator * _sendLaterQueryCreator;
    EFXPCAlarm * _xpcAlarm;
}

@property (nonatomic, readonly) <EDSendLaterUpdateControllerAlarmDateProvider> *alarmDateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <EDMessageChangeHookResponder> *hookResponder;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, retain) NSDate *nextAlarmDate;
@property (nonatomic, readonly) EDOutgoingMessageRepository *outgoingRepository;
@property (nonatomic, retain) EDQueryCreator *sendLaterQueryCreator;
@property (readonly) Class superclass;
@property (nonatomic, retain) EFXPCAlarm *xpcAlarm;

+ (id)log;

- (void).cxx_destruct;
- (void)_alarmFired;
- (void)_updateAlarmUpdatedMessages:(id)arg1 sendLaterDate:(id)arg2;
- (id)alarmDateProvider;
- (id)hookResponder;
- (id)initWithHookRegistry:(id)arg1 messagePersistence:(id)arg2 outgoingRepository:(id)arg3 alarmScheduler:(id)arg4;
- (id)messagePersistence;
- (id)nextAlarmDate;
- (id)outgoingRepository;
- (void)persistenceDidUpdateSendLaterDate:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)resetSendLaterAlarmIfNeeded;
- (id)sendLaterQueryCreator;
- (void)setNextAlarmDate:(id)arg1;
- (void)setSendLaterQueryCreator:(id)arg1;
- (void)setXpcAlarm:(id)arg1;
- (id)xpcAlarm;

@end
