
@interface CKDistributedTimestampClockVector : NSObject <NSCopying, NSSecureCoding> {
    CKDistributedTimestampAttributedVector * _backingVector;
}

@property (nonatomic, readonly) CKDistributedTimestampAttributedVector *backingVector;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_checkInvariantsAgainstClockValues:(id)arg1 withSiteIdentifier:(id)arg2 ofType:(unsigned char)arg3;
- (void)_checkInvariantsAgainstVector:(id)arg1;
- (void)_maintainInvariants;
- (void)addClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 forSiteIdentifier:(id)arg3;
- (id)allModifiers;
- (id)allSiteIdentifiers;
- (id)backingVector;
- (unsigned char)clockTypeForModifier:(id)arg1;
- (unsigned char)clockTypeForTimestamp:(id)arg1;
- (id)clockTypesForAllModifiers;
- (id)clockValuesForSiteIdentifier:(id)arg1;
- (id)clockVector;
- (long long)compareToVector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1 usingSuperscripts:(bool)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasTimestampsNotInVector:(id)arg1;
- (unsigned long long)hash;
- (bool)includesTimestamp:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)intersectVector:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGreaterThanOrEqualToVector:(id)arg1;
- (void)minusVector:(id)arg1;
- (void)removeClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForSiteIdentifier:(id)arg1;
- (void)unionVector:(id)arg1;
- (unsigned char)vectorExpansionState;
- (id)vectorFillingInImplicitClockValuesUsingSiteIdentifiers:(id)arg1;
- (id)vectorFilteredByClockType:(unsigned char)arg1;
- (id)vectorFilteredByModifier:(id)arg1;
- (id)vectorFilteredBySiteIdentifiers:(id)arg1;

@end
