
@interface TUNonAnimatingLayer : CALayer {
    TUNonAnimatingLayerDelegate * _layerDelegate;
}

@property (nonatomic, readonly) TUNonAnimatingLayerDelegate *layerDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)layerDelegate;

@end
