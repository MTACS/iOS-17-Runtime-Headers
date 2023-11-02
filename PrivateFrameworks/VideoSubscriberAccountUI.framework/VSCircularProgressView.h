
@interface VSCircularProgressView : UIView {
    CAShapeLayer * _centerLayer;
    double  _centerSquareWidth;
    bool  _indeterminate;
    CAShapeLayer * _indeterminateLayer;
    double  _indeterminateWidth;
    double  _progress;
    CAShapeLayer * _progressBackgroundLayer;
    UIColor * _progressBgColor;
    UIColor * _progressFillColor;
    CAShapeLayer * _progressLayer;
    double  _progressWidth;
}

@property (nonatomic, retain) CAShapeLayer *centerLayer;
@property (nonatomic) double centerSquareWidth;
@property (getter=isIndeterminate, nonatomic) bool indeterminate;
@property (nonatomic, retain) CAShapeLayer *indeterminateLayer;
@property (nonatomic) double indeterminateWidth;
@property (nonatomic) double progress;
@property (nonatomic, retain) CAShapeLayer *progressBackgroundLayer;
@property (nonatomic, retain) UIColor *progressBgColor;
@property (nonatomic, retain) UIColor *progressFillColor;
@property (nonatomic, retain) CAShapeLayer *progressLayer;
@property (nonatomic) double progressWidth;

- (void).cxx_destruct;
- (void)_addIndeterminateLayer;
- (void)_addProgressLayer;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_configureProgress:(bool)arg1;
- (id)_indeterminatePath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_progressFrame;
- (id)_progressPath;
- (void)_removeIndeterminateLayer;
- (void)_removeProgressLayer;
- (void)_startIndeterminateAnimation;
- (id)centerLayer;
- (double)centerSquareWidth;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)indeterminateLayer;
- (double)indeterminateWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isIndeterminate;
- (void)layoutSubviews;
- (double)progress;
- (id)progressBackgroundLayer;
- (id)progressBgColor;
- (id)progressFillColor;
- (id)progressLayer;
- (double)progressWidth;
- (void)setCenterLayer:(id)arg1;
- (void)setCenterSquareWidth:(double)arg1;
- (void)setIndeterminate:(bool)arg1;
- (void)setIndeterminateLayer:(id)arg1;
- (void)setIndeterminateWidth:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setProgressBackgroundLayer:(id)arg1;
- (void)setProgressBgColor:(id)arg1;
- (void)setProgressFillColor:(id)arg1;
- (void)setProgressLayer:(id)arg1;
- (void)setProgressWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
