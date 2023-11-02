
@interface PKTransitAppletPlan : NSObject <NSCopying, NSSecureCoding> {
    NSString * _commutePlanIdentifier;
    NSDate * _expirationDate;
}

@property (nonatomic, copy) NSString *commutePlanIdentifier;
@property (nonatomic, copy) NSDate *expirationDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)commutePlanIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setCommutePlanIdentifier:(id)arg1;
- (void)setExpirationDate:(id)arg1;

@end
