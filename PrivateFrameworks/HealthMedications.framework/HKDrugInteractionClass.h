
@interface HKDrugInteractionClass : NSObject <NSCopying, NSSecureCoding> {
    HKConceptIdentifier * _ancestorIdentifier;
    HKConceptIdentifier * _identifier;
    NSString * _name;
    unsigned long long  _relationshipCount;
    NSSet * _validRegionCodes;
}

@property (nonatomic, readonly, copy) HKConceptIdentifier *ancestorIdentifier;
@property (nonatomic, readonly, copy) HKConceptIdentifier *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long relationshipCount;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSSet *validRegionCodes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ancestorIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 relationshipCount:(unsigned long long)arg2 ancestorIdentifier:(id)arg3 ontologyIdentifier:(id)arg4 validRegionCodes:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (unsigned long long)relationshipCount;
- (id)uniqueIdentifier;
- (id)validRegionCodes;

@end
