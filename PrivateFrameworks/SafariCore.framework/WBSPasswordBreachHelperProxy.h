
@interface WBSPasswordBreachHelperProxy : NSObject <WBSPasswordBreachHelperProtocol> {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _connectionLock;
}

- (void).cxx_destruct;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)addResultRecordDictionaries:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearAllRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)clearRecentlyBreachedResultRecordsWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)getResultRecordDictionariesForResultQueryDictionaries:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidate;
- (void)recentlyBreachedResultRecordDictionariesWithCompletionHandler:(id /* block */)arg1;
- (void)runLookupSessionIgnoringMinimumDelay:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
