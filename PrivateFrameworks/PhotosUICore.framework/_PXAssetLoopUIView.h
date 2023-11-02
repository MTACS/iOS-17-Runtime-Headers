
@interface _PXAssetLoopUIView : UIView {
    id /* block */  _visibilityChangeHandler;
}

@property (nonatomic, copy) id /* block */ visibilityChangeHandler;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(bool)arg1;
- (void)setVisibilityChangeHandler:(id /* block */)arg1;
- (id /* block */)visibilityChangeHandler;

@end
