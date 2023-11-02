
@interface GKDetachedContentView : UIView {
    GKStaticRenderContentView * _renderView;
}

@property (nonatomic) GKStaticRenderContentView *renderView;

- (id)renderView;
- (void)setRenderView:(id)arg1;

@end
