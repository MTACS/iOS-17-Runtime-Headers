
@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation

- (bool)_execute:(id*)arg1;
- (bool)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;
- (bool)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1;
- (bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;
- (bool)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1;
- (unsigned long long)type;

@end
