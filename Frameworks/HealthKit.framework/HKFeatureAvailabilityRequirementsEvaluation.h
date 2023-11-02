
@interface HKFeatureAvailabilityRequirementsEvaluation : NSObject <NSCopying, NSSecureCoding> {
    NSOrderedSet * _requirementIdentifiersOrderedByPriority;
    NSDictionary * _satisfactionByRequirementIdentifier;
}

@property (nonatomic, readonly) NSString *highestPriorityUnsatisfiedRequirement;
@property (nonatomic, readonly, copy) NSOrderedSet *requirementIdentifiersOrderedByPriority;
@property (nonatomic, readonly, copy) NSDictionary *satisfactionByRequirementIdentifier;
@property (nonatomic, readonly, copy) NSArray *unsatisfiedRequirementIdentifiers;

+ (id)emptyEvaluation;
+ (id)evaluationOfRequirements:(id)arg1 dataSource:(id)arg2 overrides:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)areAllRequirementsSatisfied;
- (id)copyUpdatingRequirementForIdentifier:(id)arg1 isSatisfied:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)highestPriorityUnsatisfiedRequirement;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequirementIdentifiersOrderedByPriority:(id)arg1 satisfactionByRequirementIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isRequirementSatisfiedWithIdentifier:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)requirementIdentifiersOrderedByPriority;
- (id)satisfactionByRequirementIdentifier;
- (id)unsatisfiedRequirementIdentifiers;
- (id)unsatisfiedRequirementIdentifiersDescription;

@end
