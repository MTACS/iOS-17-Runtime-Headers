
@interface COMeshControllerQueuedBroadcastRequest : NSObject <COMeshControllerQueuedElementProtocol> {
    id /* block */  _completionHandler;
    COMeshNode * _destination;
    COMeshRequest * _request;
    COMeshResponse * _response;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) COMeshNode *destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COMeshRequest *request;
@property (nonatomic, retain) COMeshResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (id)initWithRequest:(id)arg1 destination:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)invokeCallbackWithError:(id)arg1;
- (id)request;
- (id)response;
- (void)setResponse:(id)arg1;

@end
