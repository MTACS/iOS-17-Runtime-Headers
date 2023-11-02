
@interface CTSweetgumPlanGroup : NSObject <NSSecureCoding> {
    long long  _planCategory;
    NSArray * _plans;
}

@property (nonatomic) long long planCategory;
@property (nonatomic, retain) NSArray *plans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)planCategory;
- (id)plans;
- (void)setPlanCategory:(long long)arg1;
- (void)setPlans:(id)arg1;

@end
