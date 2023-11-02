
@interface MGRemoteQueryServerHandlerPing : NSObject <MGRemoteQueryServerHandlerProtocol> {
    bool  _replied;
    NSURLRequest * _request;
    NSData * _responsePayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool replied;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic, retain) NSData *responsePayload;
@property (readonly) Class superclass;

+ (id)handlerForRequest:(id)arg1;
+ (id)urlPath;

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1;
- (id)description;
- (int)prepareResponse:(id)arg1;
- (void)provideResponseData:(id /* block */)arg1;
- (bool)replied;
- (id)request;
- (id)responsePayload;
- (void)setReplied:(bool)arg1;
- (void)setResponsePayload:(id)arg1;
- (bool)validateRequest;

@end
