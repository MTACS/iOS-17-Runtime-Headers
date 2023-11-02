
@interface RPStreamServer : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    <RPMessageable> * _messenger;
    id  _selfRef;
    NSString * _serviceType;
    id /* block */  _streamAcceptHandler;
    unsigned int  _streamFlags;
    id /* block */  _streamPrepareHandler;
    id /* block */  _streamPrepareHandlerEx;
    int  _streamQoS;
    NSMutableDictionary * _streamSessions;
}

@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) <RPMessageable> *messenger;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) id /* block */ streamAcceptHandler;
@property (nonatomic) unsigned int streamFlags;
@property (nonatomic, copy) id /* block */ streamPrepareHandler;
@property (nonatomic, copy) id /* block */ streamPrepareHandlerEx;
@property (nonatomic) int streamQoS;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_handleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_handleStopRequest:(id)arg1 options:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)messenger;
- (id)serviceType;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMessenger:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setStreamAcceptHandler:(id /* block */)arg1;
- (void)setStreamFlags:(unsigned int)arg1;
- (void)setStreamPrepareHandler:(id /* block */)arg1;
- (void)setStreamPrepareHandlerEx:(id /* block */)arg1;
- (void)setStreamQoS:(int)arg1;
- (id /* block */)streamAcceptHandler;
- (unsigned int)streamFlags;
- (id /* block */)streamPrepareHandler;
- (id /* block */)streamPrepareHandlerEx;
- (int)streamQoS;

@end
