
@interface KVDonateXPCClient : NSObject <KVDonateService> {
    KVXPCClient * _client;
}

- (void).cxx_destruct;
- (oneway void)abortDatasetStream;
- (void)addItems:(id)arg1 completion:(id /* block */)arg2;
- (oneway void)closeDatasetStream:(id /* block */)arg1;
- (id)initWithClientId:(id)arg1;
- (oneway void)openDatasetStream:(unsigned long long)arg1 validity:(id)arg2 itemType:(long long)arg3 originAppId:(id)arg4 deviceId:(id)arg5 userId:(id)arg6 options:(unsigned short)arg7 completion:(id /* block */)arg8;
- (void)removeItemId:(id)arg1 completion:(id /* block */)arg2;
- (void)terminate;

@end
