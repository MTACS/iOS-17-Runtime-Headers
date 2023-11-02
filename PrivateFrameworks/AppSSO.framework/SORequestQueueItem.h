
@interface SORequestQueueItem : NSObject <SOQueueItem> {
    id /* block */  _completionBlock;
    bool  _isRunning;
    SOAuthorizationRequestParameters * _requestParameters;
    <SOServiceProtocol> * _service;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isRunning;
@property (nonatomic, readonly) SOAuthorizationRequestParameters *requestParameters;
@property (nonatomic, readonly) <SOServiceProtocol> *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)description;
- (id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)isRunning;
- (id)requestParameters;
- (id)service;
- (void)setIsRunning:(bool)arg1;

@end
