
@interface PKPaymentCommutePlanDetail : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expiryDate;
    NSString * _identifier;
    NSDate * _lastUpdateDate;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    unsigned long long  _planType;
    NSDate * _startDate;
    unsigned long long  _status;
    long long  _value;
}

@property (nonatomic, copy) NSDate *expiryDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *lastUpdateDate;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long planType;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) unsigned long long status;
@property (nonatomic) long long value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAppletCommutePlan:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 expiryDate:(id)arg3 title:(id)arg4 description:(id)arg5;
- (id)initWithIdentifier:(id)arg1 value:(long long)arg2 title:(id)arg3 description:(id)arg4;
- (id)initWithTransitCommutePlan:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastUpdateDate;
- (id)localizedDescription;
- (id)localizedTitle;
- (unsigned long long)planType;
- (void)setExpiryDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setPlanType:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setValue:(long long)arg1;
- (id)startDate;
- (unsigned long long)status;
- (long long)value;

@end
