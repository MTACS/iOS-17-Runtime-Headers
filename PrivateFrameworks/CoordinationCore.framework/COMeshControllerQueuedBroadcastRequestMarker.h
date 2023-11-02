
@interface COMeshControllerQueuedBroadcastRequestMarker : NSObject <COMeshControllerQueuedElementProtocol> {
    id /* block */  _completionHandler;
    bool  _includeSelfInBroadcast;
    id /* block */  _recipientCallback;
    COMeshRequest * _request;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includeSelfInBroadcast;
@property (nonatomic, readonly, copy) id /* block */ recipientCallback;
@property (nonatomic, readonly, copy) COMeshRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)command;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destination;
- (bool)includeSelfInBroadcast;
- (id)initWithRequest:(id)arg1 includeSelf:(bool)arg2 recipientBlock:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)invokeCallbackWithError:(id)arg1;
- (id /* block */)recipientCallback;
- (id)request;

@end
