
@protocol CKVDatabaseSearcherProvider <NSObject>

@required

- (CKVDatabaseSearcher *)makeDatabaseSearcher;

@end
