
@interface CTDisplayPlanList : NSObject <NSSecureCoding> {
    NSArray * _plans;
}

@property (nonatomic, readonly) NSArray *plans;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayPlans:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)plans;

@end
