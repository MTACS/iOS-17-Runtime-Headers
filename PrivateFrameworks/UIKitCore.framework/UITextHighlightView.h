
@interface UITextHighlightView : UIView {
    _UITextHighlightBackgroundView * _backgroundView;
    UIVisualEffectView * _contentClippingEffectView;
    CAShapeLayer * _contentClippingMaskLayer;
    UIView * _contentView;
    bool  _contentViewValid;
    UIPreviewParameters * _overriddenPreviewParameters;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    id /* block */  _previewProvider;
}

@property (nonatomic, retain) UIPreviewParameters *overriddenPreviewParameters;
@property (nonatomic, readonly, copy) id /* block */ previewProvider;

+ (id)preferredPreviewParametersForTextLineRects:(id)arg1;

- (void).cxx_destruct;
- (void)_updateWithPreviewParameters:(id)arg1;
- (void)animateWithCompletion:(id /* block */)arg1;
- (void)fadeAwayWithCompletion:(id /* block */)arg1;
- (id)initWithPreviewProvider:(id /* block */)arg1;
- (void)invalidateContentView;
- (void)layoutSubviews;
- (id)overriddenPreviewParameters;
- (id /* block */)previewProvider;
- (void)setOverriddenPreviewParameters:(id)arg1;

@end
