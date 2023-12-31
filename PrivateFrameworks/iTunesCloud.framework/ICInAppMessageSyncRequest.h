
@interface ICInAppMessageSyncRequest : ICRequestOperation {
    unsigned long long  _fromRevision;
    ICStoreRequestContext * _storeRequestContext;
    ICIAMSynchronizeMessagesResponse * _syncResponse;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
