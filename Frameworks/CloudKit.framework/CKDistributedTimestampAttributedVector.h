
@interface CKDistributedTimestampAttributedVector : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _mutableAttributeToSparseVector;
}

@property (readonly, copy) NSDictionary *attributeToSparseVector;
@property (nonatomic, readonly) NSMutableDictionary *mutableAttributeToSparseVector;

+ (unsigned char)atomStateFromPClockTypeAndAtomState:(int)arg1;
+ (id)attributedVectorFromPDistributedTimestamps:(id)arg1 error:(id*)arg2;
+ (unsigned char)clockTypeFromPClockTypeAndAtomState:(int)arg1;
+ (int)pClockTypeAndAtomStateFromClockType:(unsigned char)arg1 atomState:(unsigned char)arg2;
+ (id)pDistributedTimestampsFromAttributedVector:(id)arg1;
+ (id)pVersionVectorFromAttributedVector:(id)arg1 siteIdentifier:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_maintainInvariants;
- (void)addAllClockValuesFromVector:(id)arg1;
- (void)addClockValuesInIndexSet:(id)arg1 withAttribute:(unsigned short)arg2 forSiteIdentifier:(id)arg3;
- (id)allSiteIdentifiers;
- (unsigned short)attributeForTimestamp:(id)arg1;
- (id)attributeToSparseVector;
- (id)clockValuesForSiteIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithStringSiteIdentifiers;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)intersectAttributedVector:(id)arg1;
- (void)intersectVector:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)minusVector:(id)arg1;
- (void)minusVector:(id)arg1 forAttribute:(unsigned short)arg2;
- (id)mutableAttributeToSparseVector;
- (void)removeClockValuesInIndexSet:(id)arg1 forSiteIdentifier:(id)arg2;
- (void)swapContentsWithVector:(id)arg1;
- (unsigned long long)timestampCount;
- (unsigned long long)timestampCountForAtomState:(unsigned char)arg1;
- (unsigned long long)timestampCountForSiteIdentifier:(id)arg1;
- (id)vectorFillingInImplicitClockValuesWithAtomState:(unsigned char)arg1 usingSiteIdentifiers:(id)arg2;
- (id)vectorFilteredByAtomState:(unsigned char)arg1;
- (id)vectorFilteredByAttribute:(unsigned short)arg1;
- (id)vectorFilteredByClockType:(unsigned char)arg1;
- (id)vectorFilteredByModifier:(id)arg1;
- (id)vectorFilteredBySiteIdentifiers:(id)arg1;
- (id)vectorWithAttributeReplacementBlock:(id /* block */)arg1;
- (id)vectorWithoutAttributes;
- (id)winningLWWTimestampForModifier:(id)arg1 winningAttribute:(unsigned short*)arg2;

@end
