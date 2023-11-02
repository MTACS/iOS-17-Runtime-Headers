
@protocol MPMutableLocalLibraryIdentifiers <MPLocalLibraryIdentifiers>

@required

- (long long)containedPersistentID;
- (long long)persistentID;
- (void)setContainedPersistentID:(long long)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setSyncID:(long long)arg1;
- (long long)syncID;

@end
