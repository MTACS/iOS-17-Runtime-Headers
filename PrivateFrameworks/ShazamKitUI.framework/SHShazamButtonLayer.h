
@interface SHShazamButtonLayer : SHPaletteLayer <CAAnimationDelegate> {
    CALayer * _backgroundLayer;
    CAShapeLayer * _bottomSolidLayer;
    CAShapeLayer * _bottomTransparentLayer;
    <SHShazamButtonViewDelegate> * _buttonDelegate;
    bool  _initialAnimationPerformed;
    CALayer * _shapeLayer;
    CAShapeLayer * _topBorder;
    CAShapeLayer * _topSolidLayer;
    CAShapeLayer * _topTransparentLayer;
}

@property (nonatomic, retain) CALayer *backgroundLayer;
@property (nonatomic, retain) CAShapeLayer *bottomSolidLayer;
@property (nonatomic, retain) CAShapeLayer *bottomTransparentLayer;
@property (nonatomic) <SHShazamButtonViewDelegate> *buttonDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialAnimationPerformed;
@property (nonatomic, retain) CALayer *shapeLayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAShapeLayer *topBorder;
@property (nonatomic, retain) CAShapeLayer *topSolidLayer;
@property (nonatomic, retain) CAShapeLayer *topTransparentLayer;

- (void).cxx_destruct;
- (id)backgroundLayer;
- (id)bottomSolidLayer;
- (struct CGPath { }*)bottomStrokeLongPath;
- (struct CGPath { }*)bottomStrokePath;
- (id)bottomTransparentLayer;
- (id)buttonDelegate;
- (void)drawSolidShape;
- (void)drawSolidShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (void)drawTransparentShape;
- (bool)initialAnimationPerformed;
- (void)layoutSublayers;
- (void)performFadeInIntroAnimation:(double)arg1 delay:(double)arg2;
- (void)performSDrawingAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)performSDrawingIntroAnimation;
- (void)removeTransparentShape;
- (void)removeTransparentShapeWithDuration:(double)arg1 delay:(double)arg2 completion:(id /* block */)arg3;
- (void)setBackgroundLayer:(id)arg1;
- (void)setBottomSolidLayer:(id)arg1;
- (void)setBottomTransparentLayer:(id)arg1;
- (void)setButtonDelegate:(id)arg1;
- (void)setInitialAnimationPerformed:(bool)arg1;
- (void)setShapeLayer:(id)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setTopSolidLayer:(id)arg1;
- (void)setTopTransparentLayer:(id)arg1;
- (void)setup;
- (id)shapeLayer;
- (void)skipIntroAnimation;
- (id)strokeLayerWithPath:(struct CGPath { }*)arg1 color:(struct CGColor { }*)arg2;
- (id)topBorder;
- (id)topSolidLayer;
- (struct CGPath { }*)topStrokeLongPath;
- (struct CGPath { }*)topStrokePath;
- (id)topTransparentLayer;

@end
