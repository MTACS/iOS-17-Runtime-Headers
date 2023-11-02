
@interface MPCStoreFrontLocalEquivalencyMiddlewareOperation : MPAsyncOperation <MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding, MPMiddlewareAutomaticDependencyOperation> {
    NSMapTable * _inputOperations;
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    MPCStoreFrontLocalEquivalencyMiddleware * _middleware;
    MPCPlayerRequest * _playerRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *inputOperations;
@property (nonatomic, readonly) NSArray *inputProtocols;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) MPCStoreFrontLocalEquivalencyMiddleware *middleware;
@property (nonatomic, readonly) NSArray *outputProtocols;
@property (nonatomic, readonly) MPModelGenericObject *overridePlayingItem;
@property (nonatomic, retain) MPCPlayerRequest *playerRequest;
@property (nonatomic, readonly) NSIndexPath *playingItemIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 playerRequest:(id)arg2;
- (id)inputOperations;
- (id)inputProtocols;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)outputProtocols;
- (id)overridePlayingItem;
- (id)playerRequest;
- (id)playingItemIndexPath;
- (void)setInputOperations:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setPlayerRequest:(id)arg1;

@end
