
@interface HUCircularProgressView : UIView {
    double  _avatarDiameter;
    CAShapeLayer * _baseLayer;
    UIColor * _baseLayerStrokeLineColor;
    double  _baseLayerStrokeLineWidth;
    double  _endAngle;
    double  _fromValue;
    unsigned long long  _lineCapStyle;
    unsigned long long  _progressBarFillDirection;
    bool  _progressFillCounterClockwise;
    UIColor * _progressLayerStrokeLineColor;
    double  _progressLayerStrokeLineWidth;
    CAShapeLayer * _progressShapeLayer;
    double  _radius;
    bool  _removeProgressBarOnCompletion;
    double  _startAngle;
}

@property (nonatomic) double avatarDiameter;
@property (nonatomic, retain) CAShapeLayer *baseLayer;
@property (nonatomic, retain) UIColor *baseLayerStrokeLineColor;
@property (nonatomic) double baseLayerStrokeLineWidth;
@property (nonatomic) double endAngle;
@property (nonatomic) double fromValue;
@property (nonatomic) unsigned long long lineCapStyle;
@property (nonatomic) unsigned long long progressBarFillDirection;
@property (nonatomic) bool progressFillCounterClockwise;
@property (nonatomic, retain) UIColor *progressLayerStrokeLineColor;
@property (nonatomic) double progressLayerStrokeLineWidth;
@property (nonatomic, retain) CAShapeLayer *progressShapeLayer;
@property (nonatomic) double radius;
@property (nonatomic) bool removeProgressBarOnCompletion;
@property (nonatomic) double startAngle;

- (void).cxx_destruct;
- (id)_lineCapStyle;
- (id)_progressBarFillDirection;
- (double)avatarDiameter;
- (id)baseLayer;
- (id)baseLayerStrokeLineColor;
- (double)baseLayerStrokeLineWidth;
- (double)endAngle;
- (double)fromValue;
- (id)initWithRadius:(double)arg1;
- (id)initWithRadius:(double)arg1 startAngle:(double)arg2 endAngle:(double)arg3 progress:(double)arg4;
- (void)layoutSubviews;
- (unsigned long long)lineCapStyle;
- (unsigned long long)progressBarFillDirection;
- (bool)progressFillCounterClockwise;
- (id)progressLayerStrokeLineColor;
- (double)progressLayerStrokeLineWidth;
- (id)progressShapeLayer;
- (double)radius;
- (bool)removeProgressBarOnCompletion;
- (void)setAvatarDiameter:(double)arg1;
- (void)setBaseLayer:(id)arg1;
- (void)setBaseLayerStrokeLineColor:(id)arg1;
- (void)setBaseLayerStrokeLineWidth:(double)arg1;
- (void)setEndAngle:(double)arg1;
- (void)setFromValue:(double)arg1;
- (void)setLineCapStyle:(unsigned long long)arg1;
- (void)setProgressBarFillDirection:(unsigned long long)arg1;
- (void)setProgressFillCounterClockwise:(bool)arg1;
- (void)setProgressLayerStrokeLineColor:(id)arg1;
- (void)setProgressLayerStrokeLineWidth:(double)arg1;
- (void)setProgressShapeLayer:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setRemoveProgressBarOnCompletion:(bool)arg1;
- (void)setStartAngle:(double)arg1;
- (double)startAngle;
- (void)updateProgressBy:(double)arg1 animationDuration:(float)arg2;
- (void)updateProgressTo:(double)arg1 animationDuration:(float)arg2;

@end
