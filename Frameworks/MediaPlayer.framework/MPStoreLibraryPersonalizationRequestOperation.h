
@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue * _operationQueue;
    MPStoreLibraryPersonalizationRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, copy) MPStoreLibraryPersonalizationRequest *request;
@property (nonatomic, copy) id /* block */ responseHandler;

+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)request;
- (id /* block */)responseHandler;
- (void)setRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;

@end
