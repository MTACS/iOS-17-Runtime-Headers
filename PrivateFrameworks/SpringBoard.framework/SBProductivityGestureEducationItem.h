
@interface SBProductivityGestureEducationItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _activationHistoryMap;
    NSDate * _displayDate;
    long long  _lastActivatedEducationType;
    long long  _type;
}

@property (nonatomic, readonly) long long lastActivatedEducationType;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_policyCount;
- (double)_policyInterval;
- (void)contentDidAppear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isValidWithActivationForType:(long long)arg1;
- (long long)lastActivatedEducationType;
- (void)resetActivations;
- (long long)type;

@end
