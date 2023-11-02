
@interface SMTriggerDestinationState : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _currentStatus;
    NSDate * _date;
    bool  _dirty;
    NSDate * _lastLockDate;
    NSDate * _lastUnlockDate;
    double  _mapsExpectedTravelTime;
    unsigned short  _numberOfETARetries;
    unsigned long long  _predominantModeOfTransport;
    double  _remainingDistance;
    NSDate * _roundTripReminderDate;
    NSUUID * _sessionIdentifier;
    bool  _shouldRetryETAQuery;
    NSDate * _timeToUpdateStatus;
    SMUpperBoundEta * _upperBoundEta;
}

@property (nonatomic) unsigned long long currentStatus;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) bool dirty;
@property (nonatomic, retain) NSDate *lastLockDate;
@property (nonatomic, retain) NSDate *lastUnlockDate;
@property (nonatomic) double mapsExpectedTravelTime;
@property (nonatomic) unsigned short numberOfETARetries;
@property (nonatomic) unsigned long long predominantModeOfTransport;
@property (nonatomic) double remainingDistance;
@property (nonatomic, retain) NSDate *roundTripReminderDate;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic) bool shouldRetryETAQuery;
@property (nonatomic, retain) NSDate *timeToUpdateStatus;
@property (nonatomic, retain) SMUpperBoundEta *upperBoundEta;

+ (id)convertMKDirectionTransportTypeToString:(unsigned long long)arg1;
+ (id)modeOfTransportToString:(unsigned long long)arg1;
+ (id)statusToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentStatus;
- (id)date;
- (id)description;
- (bool)dirty;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 currentStatus:(unsigned long long)arg2 lastLockDate:(id)arg3 lastUnlockDate:(id)arg4 predominantModeOfTransport:(unsigned long long)arg5 numberOfETARetries:(unsigned short)arg6 shouldRetryETAQuery:(bool)arg7 roundTripReminderDate:(id)arg8 timeToUpdateStatus:(id)arg9 upperBoundEta:(id)arg10 mapsExpectedTravelTime:(double)arg11 remainingDistance:(double)arg12 date:(id)arg13;
- (bool)isEqual:(id)arg1;
- (id)lastLockDate;
- (id)lastUnlockDate;
- (double)mapsExpectedTravelTime;
- (void)markDirty;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)numberOfETARetries;
- (unsigned long long)predominantModeOfTransport;
- (double)remainingDistance;
- (id)roundTripReminderDate;
- (id)sessionIdentifier;
- (void)setCurrentStatus:(unsigned long long)arg1;
- (void)setDirty:(bool)arg1;
- (void)setLastLockDate:(id)arg1;
- (void)setLastUnlockDate:(id)arg1;
- (void)setMapsExpectedTravelTime:(double)arg1;
- (void)setNumberOfETARetries:(unsigned short)arg1;
- (void)setPredominantModeOfTransport:(unsigned long long)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setRoundTripReminderDate:(id)arg1;
- (void)setShouldRetryETAQuery:(bool)arg1;
- (void)setTimeToUpdateStatus:(id)arg1;
- (void)setUpperBoundEta:(id)arg1;
- (bool)shouldRetryETAQuery;
- (id)timeToUpdateStatus;
- (id)upperBoundEta;

@end
