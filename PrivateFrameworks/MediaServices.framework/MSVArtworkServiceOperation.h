
@interface MSVArtworkServiceOperation : NSOperation {
    NSString * _debugMessage;
    NSError * _operationError;
    MSVArtworkServiceRequest * _request;
}

@property (nonatomic, readonly, copy) NSString *debugMessage;
@property (nonatomic, readonly) NSError *operationError;
@property (nonatomic, readonly) MSVArtworkServiceRequest *request;

- (void).cxx_destruct;
- (id)debugMessage;
- (id)initWithArtworkRequest:(id)arg1;
- (id)operationError;
- (id)request;
- (void)setDebugMessage:(id)arg1;
- (void)setOperationError:(id)arg1;

@end
