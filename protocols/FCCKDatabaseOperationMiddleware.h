
@protocol FCCKDatabaseOperationMiddleware <NSObject>

@required

- (long long)database:(FCCKPrivateDatabase *)arg1 willEnqueueOperation:(CKDatabaseOperation *)arg2 error:(id*)arg3;

@end
