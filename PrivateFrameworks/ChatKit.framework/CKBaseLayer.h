
@interface CKBaseLayer : CALayer {
    <CKLayerDelegate> * _ckLayerDelegate;
}

@property (nonatomic) <CKLayerDelegate> *ckLayerDelegate;

- (void).cxx_destruct;
- (id)ckLayerDelegate;
- (void)layerDidBecomeVisible:(bool)arg1;
- (void)setCkLayerDelegate:(id)arg1;

@end
