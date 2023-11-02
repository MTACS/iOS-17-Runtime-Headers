
@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding> {
    NSCompoundPredicate * _compoundPredicate;
    ATXMagicalMomentsPrediction * _prediction;
}

@property (nonatomic, readonly) NSCompoundPredicate *compoundPredicate;
@property (nonatomic, readonly) ATXMagicalMomentsPrediction *prediction;

+ (id)compoundPredicateFromPredicateArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)compoundPredicate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrediction:(id)arg1 applicableCompoundPredicate:(id)arg2;
- (id)initWithPrediction:(id)arg1 applicablePredicates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)prediction;

@end
