
@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer {
    TSDInteractiveCanvasController * mController;
    NSMutableSet * mDirtyTilingLayers;
}

@property (nonatomic) TSDInteractiveCanvasController *controller;

- (id)controller;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)p_commonInit;
- (void)setController:(id)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;

@end
