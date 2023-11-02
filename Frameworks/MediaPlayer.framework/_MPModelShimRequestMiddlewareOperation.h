
@interface _MPModelShimRequestMiddlewareOperation : MPAsyncOperation <MPMiddlewareOperation> {
    id /* block */  _invalidationHandler;
    NSArray * _invalidationObservers;
    _MPModelShimRequestMiddleware * _middleware;
    MPModelRequest * _modelRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSArray *invalidationObservers;
@property (nonatomic, retain) _MPModelShimRequestMiddleware *middleware;
@property (nonatomic, retain) MPModelRequest *modelRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithMiddleware:(id)arg1 modelRequest:(id)arg2;
- (id /* block */)invalidationHandler;
- (id)invalidationObservers;
- (id)middleware;
- (id)modelRequest;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setMiddleware:(id)arg1;
- (void)setModelRequest:(id)arg1;

@end
