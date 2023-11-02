
@interface CKDistributedTimestampStateVector : CKDistributedTimestampClockVector

- (void)addClockValuesInIndexSet:(id)arg1 withAtomState:(unsigned char)arg2 forSiteIdentifier:(id)arg3;
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 atomState:(unsigned char)arg3 forSiteIdentifier:(id)arg4;
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 forSiteIdentifier:(id)arg3;
- (unsigned char)atomStateForTimestamp:(id)arg1;
- (id)clockVector;
- (bool)containsTimestampsWithAtomState:(unsigned char)arg1;
- (id)descriptionWithStringSiteIdentifiers:(bool)arg1 usingSuperscripts:(bool)arg2;
- (void)enumerateAllClockValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(id /* block */)arg2;
- (bool)hasAtomStateNotInStateVector:(id)arg1;
- (id)initWithClockValuesInIndexSet:(id)arg1 withAtomState:(unsigned char)arg2 forSiteIdentifier:(id)arg3;
- (void)intersectStateVector:(id)arg1;
- (void)minusStateVector:(id)arg1;
- (void)unionStateVector:(id)arg1;
- (void)unionVector:(id)arg1;
- (unsigned char)vectorExpansionState;
- (id)vectorFilteredByAtomState:(unsigned char)arg1;

@end
