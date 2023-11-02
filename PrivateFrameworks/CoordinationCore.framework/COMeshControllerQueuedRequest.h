
@interface COMeshControllerQueuedRequest : NSObject <COMeshControllerQueuedElementProtocol> {
    id /* block */  _completionHandler;
    COMeshNode * _destination;
    COMeshRequest * _request;
    COMeshResponse * _response;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMeshRequest *request;
@property (nonatomic, retain) COMeshResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (id)initWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)invokeCallbackWithError:(id)arg1;
- (id)request;
- (id)response;
- (void)setDestination:(id)arg1;
- (void)setResponse:(id)arg1;

@end
