
@interface HKDrugInteractionResult : NSObject <NSCopying, NSSecureCoding> {
    HKOntologyLocalizedEducationContent * _educationContent;
    HKDrugInteractionClass * _firstInteractionClass;
    HKConceptIdentifier * _identifier;
    HKDrugInteractionClass * _secondInteractionClass;
    HKDrugInteractionSeverity * _severity;
    NSSet * _validRegionCodes;
}

@property (nonatomic, readonly, copy) HKOntologyLocalizedEducationContent *educationContent;
@property (nonatomic, readonly) HKDrugInteractionClass *firstInteractionClass;
@property (nonatomic, readonly, copy) HKConceptIdentifier *identifier;
@property (nonatomic, readonly) HKDrugInteractionClass *secondInteractionClass;
@property (nonatomic, readonly, copy) HKDrugInteractionSeverity *severity;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSSet *validRegionCodes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)educationContent;
- (void)encodeWithCoder:(id)arg1;
- (id)firstInteractionClass;
- (bool)hasSameAncestorIdentifiersAsInteractionResult:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstInteractionClass:(id)arg1 secondInteractionClass:(id)arg2 severity:(id)arg3 educationContent:(id)arg4 ontologyIdentifier:(id)arg5 validRegionCodes:(id)arg6;
- (id)interactionClasses;
- (bool)isEqual:(id)arg1;
- (id)secondInteractionClass;
- (id)severity;
- (id)uniqueIdentifier;
- (id)validRegionCodes;

@end
