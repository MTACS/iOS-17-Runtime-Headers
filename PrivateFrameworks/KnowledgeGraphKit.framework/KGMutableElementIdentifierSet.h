
@interface KGMutableElementIdentifierSet : KGElementIdentifierSet

- (void)addIdentifier:(unsigned long long)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)formSymmetricDifferenceWithIdentifierSet:(id)arg1;
- (void)intersectWithIdentifierSet:(id)arg1;
- (void*)mutableBitmap;
- (void)removeAllIdentifiers;
- (void)removeIdentifier:(unsigned long long)arg1;
- (void)subtractIdentifierSet:(id)arg1;
- (void)unionWithIdentifierSet:(id)arg1;

@end
