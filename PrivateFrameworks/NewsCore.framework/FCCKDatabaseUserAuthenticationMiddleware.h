
@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {
    bool  _privateDataSyncingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2 error:(id*)arg3;
- (id)init;

@end
