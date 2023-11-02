
@interface HKDismissedDrugInteractionResult : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    HKConceptIdentifier * _firstDrugClassAncestorIdentifier;
    HKConceptIdentifier * _firstDrugClassIdentifier;
    HKConceptIdentifier * _interactionIdentifier;
    HKConceptIdentifier * _secondDrugClassAncestorIdentifier;
    HKConceptIdentifier * _secondDrugClassIdentifier;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) HKConceptIdentifier *firstDrugClassAncestorIdentifier;
@property (nonatomic, readonly) HKConceptIdentifier *firstDrugClassIdentifier;
@property (nonatomic, readonly) HKConceptIdentifier *interactionIdentifier;
@property (nonatomic, readonly) HKConceptIdentifier *secondDrugClassAncestorIdentifier;
@property (nonatomic, readonly) HKConceptIdentifier *secondDrugClassIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDrugInteractionResult:(id)arg1;
- (id)_initWithInteractionIdentifier:(id)arg1 firstDrugClassIdentifier:(id)arg2 firstDrugClassAncestorIdentifier:(id)arg3 secondDrugClassIdentifier:(id)arg4 secondDrugClassAncestorIdentifier:(id)arg5 creationDate:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstDrugClassAncestorIdentifier;
- (id)firstDrugClassIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interactionIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDrugInteractionResult:(id)arg1;
- (id)secondDrugClassAncestorIdentifier;
- (id)secondDrugClassIdentifier;

@end
