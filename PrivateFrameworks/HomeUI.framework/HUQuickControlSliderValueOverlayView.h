
@interface HUQuickControlSliderValueOverlayView : UIView {
    unsigned long long  _controlSize;
    bool  _hasSecondGrabber;
    UIColor * _layerColor;
    bool  _off;
    unsigned long long  _primaryGrabberLocation;
    CAShapeLayer * _primaryGrabberShadowLayer;
    CAShapeLayer * _secondaryGrabberShadowLayer;
    bool  _showGrabbers;
    UIView * _topBorder;
}

@property (nonatomic) unsigned long long controlSize;
@property (nonatomic) bool hasSecondGrabber;
@property (nonatomic, readonly) CAShapeLayer *layer;
@property (nonatomic, retain) UIColor *layerColor;
@property (getter=isOff, nonatomic) bool off;
@property (nonatomic) unsigned long long primaryGrabberLocation;
@property (nonatomic, retain) CAShapeLayer *primaryGrabberShadowLayer;
@property (nonatomic) CAShapeLayer *secondaryGrabberShadowLayer;
@property (nonatomic) bool showGrabbers;
@property (nonatomic, retain) UIView *topBorder;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_createGrabberShadowLayer;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateBlendMode;
- (void)_updateShape;
- (unsigned long long)controlSize;
- (bool)hasSecondGrabber;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOff;
- (id)layerColor;
- (void)layoutSubviews;
- (unsigned long long)primaryGrabberLocation;
- (id)primaryGrabberShadowLayer;
- (id)secondaryGrabberShadowLayer;
- (void)setControlSize:(unsigned long long)arg1;
- (void)setHasSecondGrabber:(bool)arg1;
- (void)setLayerColor:(id)arg1;
- (void)setOff:(bool)arg1;
- (void)setPrimaryGrabberLocation:(unsigned long long)arg1;
- (void)setPrimaryGrabberShadowLayer:(id)arg1;
- (void)setSecondaryGrabberShadowLayer:(id)arg1;
- (void)setShowGrabbers:(bool)arg1;
- (void)setTopBorder:(id)arg1;
- (bool)showGrabbers;
- (id)topBorder;

@end
