
@interface AFArbitrationParticipationController : NSObject <AFArbitrationEventUpdatesDelegate> {
    NSMutableDictionary * _participationsForUserFeedback;
    NSMutableArray * _participationsPublished;
    NSObject<OS_dispatch_queue> * _queue;
    AFSettingsConnection * _settingsConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *participationsForUserFeedback;
@property (nonatomic, retain) NSMutableArray *participationsPublished;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) AFSettingsConnection *settingsConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_publishFeedbackArbitrationRecord;
- (void)_publishFeedbackArbitrationRecordForNearMiss;
- (void)_resetSettingsConnection;
- (void)_updateUserFeedbackParticipationAllAdvertisements:(id)arg1 session:(id)arg2 ownRecord:(id)arg3 won:(bool)arg4 triggerType:(id)arg5 lastActivationTime:(double)arg6 requestStartDate:(id)arg7 voiceTriggerDate:(id)arg8 scoreBoosters:(id)arg9 deviceClass:(unsigned char)arg10;
- (void)arbitrationDidUpdateWithContext:(id)arg1 session:(id)arg2 completion:(id /* block */)arg3;
- (void)arbitrationEndedAdvertising:(id)arg1;
- (void)arbitrationEndedTask:(id)arg1;
- (void)arbitrationSessionWillStart:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)participationsForUserFeedback;
- (id)participationsPublished;
- (id)queue;
- (void)requestWillPresentUsefulUserResult:(id)arg1;
- (void)setParticipationsForUserFeedback:(id)arg1;
- (void)setParticipationsPublished:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSettingsConnection:(id)arg1;
- (id)settingsConnection;

@end
