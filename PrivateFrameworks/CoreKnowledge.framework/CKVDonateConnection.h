
@interface CKVDonateConnection : NSObject <KVDonateService> {
    NSObject<CKVDonateRequestDelegate> * _delegate;
    id /* block */  _openStreamCompletion;
    NSObject<OS_dispatch_queue> * _queue;
    CKVDonateRequest * _request;
    CKVIndexUpdater * _updater;
    NSXPCConnection * _xpc;
}

- (void).cxx_destruct;
- (oneway void)abortDatasetStream;
- (void)addItems:(id)arg1 completion:(id /* block */)arg2;
- (void)cleanupDatasetStream:(long long)arg1;
- (oneway void)closeDatasetStream:(id /* block */)arg1;
- (id)init;
- (id)initWithRequestDelegate:(id)arg1 xpc:(id)arg2;
- (void)interrupt;
- (bool)isAlive;
- (bool)isXPC;
- (oneway void)openDatasetStream:(unsigned long long)arg1 validity:(id)arg2 itemType:(long long)arg3 originAppId:(id)arg4 deviceId:(id)arg5 userId:(id)arg6 options:(unsigned short)arg7 completion:(id /* block */)arg8;
- (void)removeItemId:(id)arg1 completion:(id /* block */)arg2;
- (void)resume;

@end
