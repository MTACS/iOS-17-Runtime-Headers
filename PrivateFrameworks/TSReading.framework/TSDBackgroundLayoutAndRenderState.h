
@interface TSDBackgroundLayoutAndRenderState : NSObject {
    <TSDBackgroundLayoutAndRenderStateDelegate> * mDelegate;
    bool  mNeedsLayoutAndRender;
    bool  mNeedsLayoutForTilingLayers;
}

- (void)clearDelegate;
- (id)initWithDelegate:(id)arg1;
- (void)p_didBackgroundLayoutAndRender;
- (void)setNeedsLayoutAndRender;
- (void)setNeedsLayoutForTilingLayers;

@end
