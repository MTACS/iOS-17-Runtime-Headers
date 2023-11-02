
@interface ML3RemoveTracksOperation : ML3DatabaseOperation

- (bool)_execute:(id*)arg1;
- (bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;
- (bool)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;
- (bool)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (unsigned long long)type;

@end
