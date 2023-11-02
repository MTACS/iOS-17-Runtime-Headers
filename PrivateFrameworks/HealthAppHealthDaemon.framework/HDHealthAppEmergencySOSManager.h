
@interface HDHealthAppEmergencySOSManager : NSObject <HDProfileReadyObserver, HKCoreTelephonyClientDelegate> {
    HKCoreTelephonyClient * _coreTelephonyClient;
    FLFollowUpController * _followUpController;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HKCoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FLFollowUpController *followUpController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionIdentifierForOnboardingStatus:(id)arg1;
- (void)clearPendingFollowUpItems;
- (id)coreTelephonyClient;
- (id)followUpController;
- (id)followUpItemDescription;
- (id)getEmergencyOnboardingStatus;
- (id)initWithProfile:(id)arg1;
- (id)makeFollowUpItemWithActionIdentifier:(id)arg1;
- (id)profile;
- (void)profileDidBecomeReady:(id)arg1;
- (id)queue;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)stewieSupportChanged:(id)arg1;
- (void)submitFollowUpItem:(id)arg1;
- (void)submitStewieFollowUpItemIfNeeded;

@end
