
@interface SMSessionManagerMutableState : SMSessionManagerState <NSCopying, NSMutableCopying>

@property (nonatomic, copy) NSUUID *activeDeviceIdentifier;
@property (nonatomic, copy) NSUUID *activePairedDeviceIdentifier;
@property (nonatomic, copy) NSData *allowReadToken;
@property (nonatomic, copy) NSDate *coarseEstimatedEndDate;
@property (nonatomic, copy) SMSessionConfiguration *configuration;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSDate *estimatedEndDate;
@property (nonatomic) unsigned long long estimatedEndDateStatus;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) SMSessionMonitorContext *monitorContext;
@property (nonatomic, copy) NSData *safetyCacheKey;
@property (nonatomic, copy) NSDate *scheduledSendMessageDate;
@property (nonatomic, copy) NSString *scheduledSendMessageGUID;
@property (nonatomic) unsigned long long sessionEndReason;
@property (nonatomic) unsigned long long sessionState;
@property (nonatomic, copy) NSDate *sessionStateTransitionDate;
@property (nonatomic, copy) NSString *startMessageGUID;
@property (nonatomic) long long userTriggerResponse;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setActiveDeviceIdentifier:(id)arg1;
- (void)setActivePairedDeviceIdentifier:(id)arg1;
- (void)setAllowReadToken:(id)arg1;
- (void)setCoarseEstimatedEndDate:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setEstimatedEndDate:(id)arg1;
- (void)setEstimatedEndDateStatus:(unsigned long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setMonitorContext:(id)arg1;
- (void)setSafetyCacheKey:(id)arg1;
- (void)setScheduledSendMessageDate:(id)arg1;
- (void)setScheduledSendMessageGUID:(id)arg1;
- (void)setSessionEndReason:(unsigned long long)arg1;
- (void)setSessionState:(unsigned long long)arg1;
- (void)setSessionStateTransitionDate:(id)arg1;
- (void)setStartMessageGUID:(id)arg1;
- (void)setUserTriggerResponse:(long long)arg1;

@end
