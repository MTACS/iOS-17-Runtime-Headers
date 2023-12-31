
@interface WBSHistoryDatabaseAccessBroker : NSObject {
    NSURL * _historyDatabaseURL;
    NSObject<OS_dispatch_queue> * _writeRequestQueue;
}

- (void).cxx_destruct;
- (id)_openDatabaseWithAccessType:(long long)arg1 onQueue:(id)arg2 error:(id*)arg3;
- (void)_requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_requestReadOnlyAccessOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestReadWriteAccessOnQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)databaseLastModifiedDate;
- (id)init;
- (id)initWithHistoryDatabaseURL:(id)arg1;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)requestAccessType:(long long)arg1 onQueue:(id)arg2 completionHandlerWithInvalidationHandler:(id /* block */)arg3;

@end
