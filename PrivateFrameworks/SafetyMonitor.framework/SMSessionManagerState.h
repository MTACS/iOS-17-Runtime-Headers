
@interface SMSessionManagerState : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _activeDeviceIdentifier;
    NSUUID * _activePairedDeviceIdentifier;
    NSData * _allowReadToken;
    NSDate * _coarseEstimatedEndDate;
    SMSessionConfiguration * _configuration;
    NSDate * _date;
    NSDate * _estimatedEndDate;
    unsigned long long  _estimatedEndDateStatus;
    CLLocation * _location;
    SMSessionMonitorContext * _monitorContext;
    NSData * _safetyCacheKey;
    NSDate * _scheduledSendMessageDate;
    NSString * _scheduledSendMessageGUID;
    unsigned long long  _sessionEndReason;
    unsigned long long  _sessionState;
    NSDate * _sessionStateTransitionDate;
    NSString * _startMessageGUID;
    long long  _userTriggerResponse;
}

@property (nonatomic, readonly, copy) NSUUID *activeDeviceIdentifier;
@property (nonatomic, readonly, copy) NSUUID *activePairedDeviceIdentifier;
@property (nonatomic, readonly, copy) NSData *allowReadToken;
@property (nonatomic, readonly, copy) NSDate *coarseEstimatedEndDate;
@property (nonatomic, readonly, copy) SMSessionConfiguration *configuration;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSDate *estimatedEndDate;
@property (nonatomic, readonly) unsigned long long estimatedEndDateStatus;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) SMSessionMonitorContext *monitorContext;
@property (nonatomic, readonly, copy) NSData *safetyCacheKey;
@property (nonatomic, readonly, copy) NSDate *scheduledSendMessageDate;
@property (nonatomic, readonly, copy) NSString *scheduledSendMessageGUID;
@property (nonatomic, readonly) unsigned long long sessionEndReason;
@property (nonatomic, readonly) unsigned long long sessionState;
@property (nonatomic, readonly, copy) NSDate *sessionStateTransitionDate;
@property (nonatomic, readonly, copy) NSString *startMessageGUID;
@property (nonatomic, readonly) long long userTriggerResponse;

+ (id)convertEstimatedEndDateStatusToString:(unsigned long long)arg1;
+ (id)convertSessionStateToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDeviceIdentifier;
- (id)activePairedDeviceIdentifier;
- (id)allowReadToken;
- (id)cacheReleaseDate;
- (id)coarseEstimatedEndDate;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedEndDate;
- (unsigned long long)estimatedEndDateStatus;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSessionState:(unsigned long long)arg1 configuration:(id)arg2 userTriggerResponse:(long long)arg3 monitorContext:(id)arg4 allowReadToken:(id)arg5 safetyCacheKey:(id)arg6 startMessageGUID:(id)arg7 scheduledSendMessageGUID:(id)arg8 scheduledSendMessageDate:(id)arg9 activeDeviceIdentifier:(id)arg10 estimatedEndDate:(id)arg11 coarseEstimatedEndDate:(id)arg12 estimatedEndDateStatus:(unsigned long long)arg13 sessionEndReason:(unsigned long long)arg14 activePairedDeviceIdentifier:(id)arg15;
- (id)initWithSessionState:(unsigned long long)arg1 configuration:(id)arg2 userTriggerResponse:(long long)arg3 monitorContext:(id)arg4 date:(id)arg5 location:(id)arg6 allowReadToken:(id)arg7 safetyCacheKey:(id)arg8 startMessageGUID:(id)arg9 scheduledSendMessageGUID:(id)arg10 scheduledSendMessageDate:(id)arg11 activeDeviceIdentifier:(id)arg12 estimatedEndDate:(id)arg13 coarseEstimatedEndDate:(id)arg14 estimatedEndDateStatus:(unsigned long long)arg15 sessionEndReason:(unsigned long long)arg16 sessionStateTransitionDate:(id)arg17 activePairedDeviceIdentifier:(id)arg18;
- (bool)isActiveState;
- (bool)isCacheReleasedState;
- (bool)isEndSessionState;
- (bool)isEqual:(id)arg1;
- (bool)isPromptState;
- (bool)isTimerExtensionValid:(double)arg1;
- (bool)isValidState;
- (id)location;
- (id)monitorContext;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)outputToDictionary;
- (id)safetyCacheKey;
- (id)scheduledSendMessageDate;
- (id)scheduledSendMessageGUID;
- (unsigned long long)sessionEndReason;
- (unsigned long long)sessionState;
- (id)sessionStateTransitionDate;
- (id)startMessageGUID;
- (long long)userTriggerResponse;

@end
