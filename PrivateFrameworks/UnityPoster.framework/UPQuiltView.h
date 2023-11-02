
@interface UPQuiltView : UIView {
    UIColor * _bottomLeftQuiltColor;
    CAShapeLayer * _bottomLeftQuiltPieceLayer;
    struct CGPath { } * _bottomLeftQuiltPieceTargetPathRef;
    UIColor * _bottomRightQuiltColor;
    CAShapeLayer * _bottomRightQuiltPieceLayer;
    UPQuiltConfiguration * _configuration;
    double  _heightRatioToHero;
    NSString * _identifier;
    UIColor * _intersectionPieceColor;
    CAShapeLayer * _intersectionPieceLayer;
    struct CGPath { } * _intersectionPieceTargetPathRef;
    bool  _isAnimating;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _landscapeWidgetRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalFrame;
    CALayer * _quiltImageLayer;
    <UPQuiltViewDelegate> * _quiltViewDelegate;
    struct CGPath { } * _thirdPieceTargetPathRef;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeView;
    UIColor * _topQuiltColor;
    CAShapeLayer * _topQuiltPieceLayer;
    struct CGPath { } * _topQuiltPieceTargetPathRef;
    CALayer * _transitionLayer;
    double  _widthRatioToHero;
}

@property (nonatomic, retain) UIColor *bottomLeftQuiltColor;
@property (nonatomic, readonly) struct CGPath { }*bottomLeftQuiltPathRef;
@property (nonatomic, retain) CAShapeLayer *bottomLeftQuiltPieceLayer;
@property (nonatomic, retain) UIColor *bottomRightQuiltColor;
@property (nonatomic, retain) CAShapeLayer *bottomRightQuiltPieceLayer;
@property (nonatomic, retain) UPQuiltConfiguration *configuration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIColor *intersectionPieceColor;
@property (nonatomic, readonly) bool isAnimating;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } landscapeWidgetRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalFrame;
@property (nonatomic, retain) CALayer *quiltImageLayer;
@property (nonatomic) <UPQuiltViewDelegate> *quiltViewDelegate;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeView;
@property (nonatomic, retain) UIColor *topQuiltColor;
@property (nonatomic, readonly) struct CGPath { }*topQuiltPathRef;
@property (nonatomic, retain) CAShapeLayer *topQuiltPieceLayer;

- (void).cxx_destruct;
- (id)bottomLeftQuiltColor;
- (struct CGPath { }*)bottomLeftQuiltPathRef;
- (id)bottomLeftQuiltPieceLayer;
- (id)bottomRightQuiltColor;
- (id)bottomRightQuiltPieceLayer;
- (id)configuration;
- (void)dealloc;
- (id)identifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 identifier:(id)arg2;
- (id)intersectionPieceColor;
- (bool)isAnimating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })landscapeWidgetRect;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalFrame;
- (id)quiltImageLayer;
- (id)quiltViewDelegate;
- (void)setBottomLeftQuiltColor:(id)arg1;
- (void)setBottomLeftQuiltPieceLayer:(id)arg1;
- (void)setBottomRightQuiltColor:(id)arg1;
- (void)setBottomRightQuiltPieceLayer:(id)arg1;
- (void)setColors;
- (void)setConfiguration:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntersectionPieceColor:(id)arg1;
- (void)setLandscapeWidgetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setQuiltImageLayer:(id)arg1;
- (void)setQuiltViewDelegate:(id)arg1;
- (void)setTimeView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTopQuiltColor:(id)arg1;
- (void)setTopQuiltPieceLayer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeView;
- (id)topQuiltColor;
- (struct CGPath { }*)topQuiltPathRef;
- (id)topQuiltPieceLayer;
- (void)updateQuiltsWithIdentifier:(id)arg1 deviceInterfaceOrientation:(long long)arg2 unlockProgress:(double)arg3;
- (void)updateQuiltsWithUnlockProgress:(double)arg1 wakeProgress:(double)arg2;

@end
