
@interface NULivePhotoRenderClient : NURenderClient

- (id)initWithName:(id)arg1 responseQueue:(id)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)submitGenericRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)submitRequest:(id)arg1;

@end
