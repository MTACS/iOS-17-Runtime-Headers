
@protocol MPLocalLibraryIdentifiers <NSObject>

@required

- (long long)containedPersistentID;
- (NSString *)databaseID;
- (long long)persistentID;
- (long long)syncID;

@end
