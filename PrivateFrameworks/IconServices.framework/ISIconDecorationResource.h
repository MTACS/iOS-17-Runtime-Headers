
@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource> {
    ISIconDecoration * _decoration;
    <ISScalableCompositorResource> * _internalResource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) ISIconDecoration *decoration;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <ISScalableCompositorResource> *internalResource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithType:(id)arg1;
- (id)decoration;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)initWithDecoration:(id)arg1;
- (id)internalResource;

@end
