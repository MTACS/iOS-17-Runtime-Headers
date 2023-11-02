
@interface ENBusinessNoteStoreClient : ENNoteStoreClient {
    <ENBusinessNoteStoreClientDelegate> * _delegate;
    NSString * _noteStoreUrl;
}

@property (nonatomic) <ENBusinessNoteStoreClientDelegate> *delegate;
@property (nonatomic, copy) NSString *noteStoreUrl;

+ (id)noteStoreClientForBusiness;

- (void).cxx_destruct;
- (id)authenticationToken;
- (void)createBusinessNotebook:(id)arg1 completion:(id /* block */)arg2;
- (void)createBusinessNotebook:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (id)delegate;
- (id)noteStoreUrl;
- (void)setDelegate:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;

@end
