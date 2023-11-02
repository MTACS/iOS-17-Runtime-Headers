
@interface SMSessionMonitorContext : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _coarseEstimatedEndDate;
    NSDate * _estimatedEndDate;
    NSUUID * _sessionID;
    unsigned long long  _triggerCategory;
    unsigned long long  _updateReason;
}

@property (nonatomic, readonly) NSDate *coarseEstimatedEndDate;
@property (nonatomic, readonly) NSDate *estimatedEndDate;
@property (nonatomic, readonly) NSUUID *sessionID;
@property (nonatomic, readonly) unsigned long long triggerCategory;
@property (nonatomic, readonly) unsigned long long updateReason;

+ (bool)isDestinationTriggerCategory:(unsigned long long)arg1;
+ (bool)isDurationTriggerCategory:(unsigned long long)arg1;
+ (bool)isRoundTripTriggerCategory:(unsigned long long)arg1;
+ (bool)isSOSTriggerCategory:(unsigned long long)arg1;
+ (bool)isValidAnomaly:(unsigned long long)arg1;
+ (id)sessionEndReasonToString:(unsigned long long)arg1;
+ (id)sessionSafetyMonitorUpdateReasonToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;
+ (id)triggerCategoryToString:(unsigned long long)arg1;
+ (id)userTriggerResponseToString:(long long)arg1;

- (void).cxx_destruct;
- (id)coarseEstimatedEndDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)estimatedEndDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithUpdateReason:(unsigned long long)arg1 triggerCategory:(unsigned long long)arg2 estimatedEndDate:(id)arg3 coarseEstimatedEndDate:(id)arg4 sessionID:(id)arg5;
- (id)initWithUpdateReason:(unsigned long long)arg1 triggerCategory:(unsigned long long)arg2 sessionID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)outputToDictionary;
- (id)sessionID;
- (unsigned long long)triggerCategory;
- (unsigned long long)updateReason;

@end
