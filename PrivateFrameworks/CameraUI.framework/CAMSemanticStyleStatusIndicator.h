
@interface CAMSemanticStyleStatusIndicator : CAMControlStatusIndicator {
    CALayer * __coolPlatterLayer;
    CALayer * __maskBackgroundLayer;
    CALayer * __maskLargeTickLayer;
    CALayer * __maskSmallTickLayer;
    CAShapeLayer * __maskStrokeLayer;
    CAReplicatorLayer * __maskTickReplicatorLayer;
    CALayer * __neutralPlatterLayer;
    CALayer * __platterMaskLayer;
    UIView * __platterView;
    UIImageView * __stackSymbolView;
    CALayer * __warmPlatterLayer;
    CAMSemanticStyle * _semanticStyle;
}

@property (nonatomic, readonly) CALayer *_coolPlatterLayer;
@property (nonatomic, readonly) CALayer *_maskBackgroundLayer;
@property (nonatomic, readonly) CALayer *_maskLargeTickLayer;
@property (nonatomic, readonly) CALayer *_maskSmallTickLayer;
@property (nonatomic, readonly) CAShapeLayer *_maskStrokeLayer;
@property (nonatomic, readonly) CAReplicatorLayer *_maskTickReplicatorLayer;
@property (nonatomic, readonly) CALayer *_neutralPlatterLayer;
@property (nonatomic, readonly) CALayer *_platterMaskLayer;
@property (nonatomic, readonly) UIView *_platterView;
@property (nonatomic, readonly) UIImageView *_stackSymbolView;
@property (nonatomic, readonly) CALayer *_warmPlatterLayer;
@property (nonatomic, retain) CAMSemanticStyle *semanticStyle;

- (void).cxx_destruct;
- (id)_coolPlatterLayer;
- (id)_generatePlatterImageWithRenderer:(id)arg1 colors:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)_maskBackgroundLayer;
- (id)_maskLargeTickLayer;
- (id)_maskSmallTickLayer;
- (id)_maskStrokeLayer;
- (id)_maskTickReplicatorLayer;
- (id)_neutralPlatterLayer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_platterFrame;
- (id)_platterMaskLayer;
- (id)_platterView;
- (id)_stackSymbolView;
- (void)_updateGradientAlphasAnimated:(bool)arg1;
- (void)_updateGradientImages;
- (void)_updateImageOrientationAnimated:(bool)arg1;
- (void)_updatePlatterStrokeProgressAnimated:(bool)arg1;
- (void)_updateStrokePath;
- (void)_updateTicksAnimated:(bool)arg1;
- (long long)_visibleTickCount;
- (id)_warmPlatterLayer;
- (id)imageNameForCurrentState;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)semanticStyle;
- (void)setSemanticStyle:(id)arg1;
- (void)setSemanticStyle:(id)arg1 animated:(bool)arg2;
- (bool)shouldUseOutline;
- (bool)supportsOrientations;

@end
