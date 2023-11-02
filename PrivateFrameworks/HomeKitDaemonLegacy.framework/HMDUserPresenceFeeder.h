
@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMDUserPresenceFeedSessionDelegate, HMFLogging> {
    long long  _ckAccountStatus;
    HMDUserPresenceFeedSession * _currentFeedSession;
    bool  _isAccountStatusFetchInProgress;
    HMDUserPresenceFeed * _lastSentFeed;
    unsigned long long  _presenceRegionStatus;
    NSString * _timerID;
}

@property (nonatomic) long long ckAccountStatus;
@property (nonatomic, retain) HMDUserPresenceFeedSession *currentFeedSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isAccountStatusFetchInProgress;
@property (nonatomic, retain) HMDUserPresenceFeed *lastSentFeed;
@property (nonatomic) unsigned long long presenceRegionStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timerID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;
- (void)_registerForMessages;
- (id)_sendPresenceAuthStatusForUser:(id)arg1 presenceAuthStatus:(id)arg2 presenceRegionStatus:(id)arg3 presenceComputeStatus:(id)arg4 reason:(id)arg5;
- (void)_sendPresenceReport:(unsigned long long)arg1;
- (void)_sendPresenceUpdateToResident:(id)arg1;
- (void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4;
- (void)_sendPresenceUpdateToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4 fmfStatus:(id)arg5;
- (void)_startRefreshTimer;
- (void)_updatePresenceComputeStatus:(id)arg1;
- (bool)_updatePresenceToResidentForUser:(id)arg1 presenceAuthStatus:(id)arg2 authChanging:(bool)arg3 reason:(id)arg4 fmfStatus:(id)arg5;
- (void)_upgradePresenceAuth;
- (void)accountAvailabilityChanged:(id)arg1;
- (long long)ckAccountStatus;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (id)currentFeedSession;
- (void)didEndFeedSession:(id)arg1;
- (void)fetchCKAccountStatusAndSendPresenceReport;
- (void)fmfStatusUpdateNotification:(id)arg1;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)handleResidentDeviceConfirmed:(id)arg1;
- (void)handleTimerFiredNotification:(id)arg1;
- (void)homeDataProcessed;
- (id)init;
- (bool)isAccountStatusFetchInProgress;
- (id)lastSentFeed;
- (void)notifyDidArriveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)presenceAuthChanged;
- (void)presenceAuthStatusChangedForUser:(id)arg1 presenceAuthStatus:(id)arg2;
- (unsigned long long)presenceRegionStatus;
- (void)residentChanged;
- (void)setCkAccountStatus:(long long)arg1;
- (void)setCurrentFeedSession:(id)arg1;
- (void)setIsAccountStatusFetchInProgress:(bool)arg1;
- (void)setLastSentFeed:(id)arg1;
- (void)setPresenceRegionStatus:(unsigned long long)arg1;
- (id)timerID;

@end
