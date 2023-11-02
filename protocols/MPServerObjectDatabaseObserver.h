
@protocol MPServerObjectDatabaseObserver <NSObject>

@optional

- (void)database:(MPServerObjectDatabase *)arg1 didFailImportRequest:(MPServerObjectDatabaseImportRequest *)arg2 withErrror:(NSError *)arg3;
- (void)database:(MPServerObjectDatabase *)arg1 didFinishImportRequest:(MPServerObjectDatabaseImportRequest *)arg2;

@end
