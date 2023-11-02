
@interface _UIAnchoredClickHighlightPlatterView : _UIHighlightPlatterView {
    _UIMorphingView * _anchorView;
}

@property (nonatomic) _UIMorphingView *anchorView;

- (void).cxx_destruct;
- (void)anchorToContainer;
- (id)anchorView;
- (void)deAnchor;
- (id)initWithTargetedPreview:(id)arg1;
- (void)setAnchorView:(id)arg1;

@end
