
@interface MPCMediaRemoteMiddlewarePlaybackStateOperation : MPAsyncOperation <MPMiddlewareOperation> {
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCMediaRemoteMiddleware * _middleware;
    MPCFuture * _playbackStateFuture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCMediaRemoteMiddleware *middleware;
@property (nonatomic, retain) MPCFuture *playbackStateFuture;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)playbackStateFuture;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlaybackStateFuture:(id)arg1;
- (id)timeoutDescription;

@end
