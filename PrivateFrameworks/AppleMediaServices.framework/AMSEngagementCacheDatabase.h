
@interface AMSEngagementCacheDatabase : NSObject <AMSSQLiteConnectionDelegate> {
    AMSSQLiteConnection * _connection;
}

@property (nonatomic, retain) AMSSQLiteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performTransaction:(id /* block */)arg1;
- (bool)closeWithError:(id*)arg1;
- (bool)collectGarbageWithError:(id*)arg1;
- (id)connection;
- (bool)connectionNeedsResetForCorruption:(id)arg1;
- (bool)insertResponseData:(id)arg1 filterData:(id)arg2 expiration:(id)arg3 error:(id*)arg4;
- (bool)openAtPath:(id)arg1 error:(id*)arg2;
- (bool)selectWithExpirationDate:(id)arg1 handler:(id /* block */)arg2 error:(id*)arg3;
- (void)setConnection:(id)arg1;

@end
