
@interface MPCMediaRemoteMiddlewareControllerOperation : MPAsyncOperation <MPCMediaRemoteMiddlewareControllerProviding, MPMiddlewareAutomaticDependencyOperation> {
    MPCFuture * _controllerFuture;
    NSMapTable * _inputOperations;
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCPlayerPath * _playerPath;
}

@property (nonatomic, readonly) MPCMediaRemoteController *controller;
@property (nonatomic, readonly) MPCFuture *controllerFuture;
@property (nonatomic, retain) MPCFuture *controllerFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *inputOperations;
@property (nonatomic, readonly) NSArray *inputProtocols;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (nonatomic, retain) MPCPlayerPath *playerPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)controller;
- (id)controllerFuture;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerPath:(id)arg2;
- (id)inputOperations;
- (id)inputProtocols;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)outputProtocols;
- (id)playerPath;
- (void)setControllerFuture:(id)arg1;
- (void)setInputOperations:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (id)timeoutDescription;

@end
