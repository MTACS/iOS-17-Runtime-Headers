
@interface HUQuickControlProxHandOffSummaryViewUpdater : NSObject <HFProxControlActivityClientDelegate> {
    PCTelephonyActivity * _homePodPhoneCallActivity;
    PCTimerActivity * _homePodTimerActivity;
    <PCActivity> * _lastActivity;
    NSObject<OS_dispatch_source> * _phoneCallStatusUpdateTimer;
    NSObject<OS_dispatch_source> * _timerStatusUpdateTimer;
    HUQuickControlSummaryNavigationBarTitleView * _titleView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PCTelephonyActivity *homePodPhoneCallActivity;
@property (nonatomic, retain) PCTimerActivity *homePodTimerActivity;
@property (nonatomic, retain) <PCActivity> *lastActivity;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *phoneCallStatusUpdateTimer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timerStatusUpdateTimer;
@property (nonatomic, retain) HUQuickControlSummaryNavigationBarTitleView *titleView;

- (void).cxx_destruct;
- (void)_invalidateHomePodPhoneCallStatusUpdateTimer;
- (void)_invalidateHomePodTimerStatusUpdateTimer;
- (bool)_isHomePodPhoneCallStatusUpdateTimerActive;
- (bool)_isHomePodTimerStatusUpdateTimerActive;
- (void)_setupObservableActivityForActivity:(id)arg1;
- (void)_startHomePodPhoneCallStatusUpdateTimer;
- (void)_startHomePodTimerStatusUpdateTimer;
- (void)_updateSummaryViewForActivities:(id)arg1 forProxControlID:(id)arg2 disambiguationContext:(id)arg3;
- (void)dealloc;
- (void)didUpdateActivities:(id)arg1 forProxControlID:(id)arg2 disambiguationContext:(id)arg3;
- (id)homePodPhoneCallActivity;
- (id)homePodTimerActivity;
- (id)initWithNavigationBarTitleView:(id)arg1;
- (id)lastActivity;
- (id)phoneCallStatusUpdateTimer;
- (void)setHomePodPhoneCallActivity:(id)arg1;
- (void)setHomePodTimerActivity:(id)arg1;
- (void)setLastActivity:(id)arg1;
- (void)setPhoneCallStatusUpdateTimer:(id)arg1;
- (void)setTimerStatusUpdateTimer:(id)arg1;
- (void)setTitleView:(id)arg1;
- (id)timerStatusUpdateTimer;
- (id)titleView;

@end
