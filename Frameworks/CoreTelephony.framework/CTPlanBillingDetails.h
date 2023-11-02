
@interface CTPlanBillingDetails : NSObject <NSSecureCoding> {
    NSNumber * _planCost;
    NSString * _planCurrency;
    NSNumber * _planDataAmount;
    unsigned long long  _planDataMeasureUnit;
    NSString * _planName;
    unsigned long long  _planType;
}

@property (nonatomic, readonly) NSNumber *planCost;
@property (nonatomic, readonly) NSString *planCurrency;
@property (nonatomic, readonly) NSNumber *planDataAmount;
@property (nonatomic, readonly) unsigned long long planDataMeasureUnit;
@property (nonatomic, readonly) NSString *planName;
@property (nonatomic, readonly) unsigned long long planType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 PlanCost:(id)arg2 PlanCurrency:(id)arg3 PlanDataAmount:(id)arg4 PlanDataMeasureUnit:(unsigned long long)arg5 PlanType:(unsigned long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)planCost;
- (id)planCurrency;
- (id)planDataAmount;
- (unsigned long long)planDataMeasureUnit;
- (id)planName;
- (unsigned long long)planType;

@end
