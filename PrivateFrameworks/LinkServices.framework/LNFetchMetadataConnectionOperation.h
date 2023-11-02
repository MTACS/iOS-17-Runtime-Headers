
@interface LNFetchMetadataConnectionOperation : LNInterfaceConnectionOperation {
    id /* block */  _completionHandler;
    LNBundleMetadata * _metadata;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) LNBundleMetadata *metadata;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)initWithConnectionInterface:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)metadata;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setMetadata:(id)arg1;
- (void)start;

@end
