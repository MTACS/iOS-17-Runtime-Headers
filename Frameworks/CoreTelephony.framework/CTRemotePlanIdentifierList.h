
@interface CTRemotePlanIdentifierList : NSObject <NSSecureCoding> {
    NSArray * _planIdentifiers;
}

@property (nonatomic, retain) NSArray *planIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlanIdentifiers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)planIdentifiers;
- (void)setPlanIdentifiers:(id)arg1;

@end
