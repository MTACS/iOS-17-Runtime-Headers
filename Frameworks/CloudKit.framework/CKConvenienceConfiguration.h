
@interface CKConvenienceConfiguration : NSObject {
    CKOperationConfiguration * _configuration;
    <CKConvenienceCallbackWrapperProtocol> * _convenienceCallbacks;
    CKOperationGroup * _group;
}

@property (nonatomic, readonly) CKOperationConfiguration *configuration;
@property (nonatomic, readonly) <CKConvenienceCallbackWrapperProtocol> *convenienceCallbacks;
@property (nonatomic, readonly) CKOperationGroup *group;

- (void).cxx_destruct;
- (id)configuration;
- (id)convenienceCallbacks;
- (id)group;
- (id)initWithConfiguration:(id)arg1 group:(id)arg2;
- (id)initWithConfiguration:(id)arg1 group:(id)arg2 convenienceCallbackWrapper:(id)arg3;

@end
