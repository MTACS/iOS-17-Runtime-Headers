
@interface PREditingVariationSlider : UIControl {
    NSString * _contextIdentifier;
    UIPanGestureRecognizer * _panGesture;
    double  _startPanOffset;
    PREditingPosterContentStyleCoordinator * _styleCoordinator;
    CAShapeLayer * _thumbBorderLayer;
    CAShapeLayer * _thumbClippingLayer;
    UIView * _thumbContainerView;
    CALayer * _thumbContentLayer;
    UIView * _thumbContentView;
    CALayer * _thumbSoftShadowLayer;
    UIView * _trackView;
    double  _value;
    double  _variation;
}

@property (nonatomic, retain) NSString *contextIdentifier;
@property (nonatomic, retain) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double startPanOffset;
@property (nonatomic, retain) PREditingPosterContentStyleCoordinator *styleCoordinator;
@property (nonatomic, retain) CAShapeLayer *thumbBorderLayer;
@property (nonatomic, retain) CAShapeLayer *thumbClippingLayer;
@property (nonatomic, retain) UIView *thumbContainerView;
@property (nonatomic, retain) CALayer *thumbContentLayer;
@property (nonatomic, retain) UIView *thumbContentView;
@property (nonatomic, retain) CALayer *thumbSoftShadowLayer;
@property (nonatomic, retain) UIView *trackView;
@property (nonatomic) double value;
@property (nonatomic) double variation;

+ (double)defaultHeight;
+ (double)defaultTrackHeight;

- (void).cxx_destruct;
- (void)_setSliderValue:(double)arg1;
- (void)commonInit;
- (id)contextIdentifier;
- (id)initWithStyleCoordinator:(id)arg1 contextIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)layoutThumbView;
- (id)panGesture;
- (void)setContextIdentifier:(id)arg1;
- (void)setPanGesture:(id)arg1;
- (void)setStartPanOffset:(double)arg1;
- (void)setStyleCoordinator:(id)arg1;
- (void)setThumbBorderLayer:(id)arg1;
- (void)setThumbClippingLayer:(id)arg1;
- (void)setThumbContainerView:(id)arg1;
- (void)setThumbContentLayer:(id)arg1;
- (void)setThumbContentView:(id)arg1;
- (void)setThumbSoftShadowLayer:(id)arg1;
- (void)setTrackView:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setVariation:(double)arg1;
- (void)setupThumbView;
- (double)startPanOffset;
- (id)styleCoordinator;
- (id)thumbBorderLayer;
- (id)thumbClippingLayer;
- (id)thumbContainerView;
- (id)thumbContentLayer;
- (id)thumbContentView;
- (id)thumbSoftShadowLayer;
- (void)thumbViewDidPan:(id)arg1;
- (struct CGColor { }*)trackBorderColor;
- (id)trackView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateThumbContentView;
- (void)updateTrack;
- (double)value;
- (double)variation;

@end
