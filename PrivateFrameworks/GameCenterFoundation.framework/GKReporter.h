
@interface GKReporter : NSObject {
    double  _appLaunchTimestamp;
    double  _authenticateResponseTimestamp;
    double  _connectingDevicesTimestamp;
    double  _currentRealtimeMatchPersistenceTimestamp;
    double  _inviteeUILaunchTimestamp;
    double  _messageInviteProcessingTimestamp;
    double  _programaticInviteTimestamp;
    double  _totalInviteReceivedTimestamp;
}

@property (nonatomic) double appLaunchTimestamp;
@property (nonatomic) double authenticateResponseTimestamp;
@property (nonatomic) double connectingDevicesTimestamp;
@property (nonatomic) double currentRealtimeMatchPersistenceTimestamp;
@property (nonatomic) double inviteeUILaunchTimestamp;
@property (nonatomic) double messageInviteProcessingTimestamp;
@property (nonatomic) double programaticInviteTimestamp;
@property (nonatomic) double totalInviteReceivedTimestamp;

+ (id)reporter;

- (double)appLaunchTimestamp;
- (double)authenticateResponseTimestamp;
- (double)connectingDevicesTimestamp;
- (double)currentRealtimeMatchPersistenceTimestamp;
- (double)inviteeUILaunchTimestamp;
- (bool)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2;
- (double)messageInviteProcessingTimestamp;
- (double)programaticInviteTimestamp;
- (void)recordAppLaunchAndTotalTimestamp;
- (void)recordAuthenticateResponseTimestamp;
- (void)recordConnectingDevicesTimestamp;
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;
- (void)recordInviteeUILaunchTimestamp;
- (void)recordMessageInviteProcessingTimestamp;
- (void)recordProgramaticInviteTimestamp;
- (void)reportAppLaunchDuration;
- (void)reportAuthenticateResponseDuration;
- (void)reportConnectingDevicesDuration;
- (void)reportCurrentRealtimeMatchPersistenceDuration;
- (void)reportDurationForEvent:(id)arg1 eventType:(id)arg2 withStartTimestamp:(double)arg3;
- (void)reportEvent:(id)arg1 eventType:(id)arg2 duration:(double)arg3 refApp:(id)arg4;
- (void)reportEvent:(id)arg1 payload:(id)arg2;
- (void)reportEvent:(id)arg1 reportable:(id)arg2;
- (void)reportEvent:(id)arg1 target:(id)arg2 keyPath:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2;
- (void)reportEvent:(id)arg1 type:(id)arg2 adamID:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(long long)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 inboxFriendRequestCount:(long long)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3 refApp:(id)arg4;
- (void)reportInviteeUILaunchDuration;
- (void)reportMessageInviteProcessingDuration;
- (void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2 refApp:(id)arg3;
- (void)reportPlayerAuthenticationFailure:(id)arg1;
- (void)reportProgramaticInviteDuration;
- (void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2;
- (void)reportTotalInviteReceivedDuration;
- (void)setAppLaunchTimestamp:(double)arg1;
- (void)setAuthenticateResponseTimestamp:(double)arg1;
- (void)setConnectingDevicesTimestamp:(double)arg1;
- (void)setCurrentRealtimeMatchPersistenceTimestamp:(double)arg1;
- (void)setInviteeUILaunchTimestamp:(double)arg1;
- (void)setMessageInviteProcessingTimestamp:(double)arg1;
- (void)setProgramaticInviteTimestamp:(double)arg1;
- (void)setTotalInviteReceivedTimestamp:(double)arg1;
- (double)totalInviteReceivedTimestamp;

@end
