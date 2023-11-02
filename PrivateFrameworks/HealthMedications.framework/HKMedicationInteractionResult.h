
@interface HKMedicationInteractionResult : NSObject <NSCopying, NSSecureCoding> {
    HKConceptIdentifier * _firstIdentifier;
    unsigned long long  _interactionType;
    NSSet * _interactions;
    HKConceptIdentifier * _secondIdentifier;
}

@property (nonatomic, readonly, copy) HKConceptIdentifier *firstIdentifier;
@property (nonatomic, readonly) unsigned long long interactionType;
@property (nonatomic, readonly, copy) NSSet *interactions;
@property (nonatomic, readonly, copy) HKConceptIdentifier *secondIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conceptIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstConceptIdentifier:(id)arg1 secondConceptIdentifier:(id)arg2 interactionType:(unsigned long long)arg3 interactions:(id)arg4;
- (unsigned long long)interactionType;
- (id)interactions;
- (bool)isEqual:(id)arg1;
- (id)secondIdentifier;

@end
