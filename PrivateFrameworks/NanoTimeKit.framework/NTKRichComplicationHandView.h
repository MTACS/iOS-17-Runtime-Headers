
@interface NTKRichComplicationHandView : UIView {
    double  _beginAngle;
    CALayer * _dotLayer;
    double  _endAngle;
    CALayer * _handLayer;
    double  _handWidth;
    float  _value;
}

@property (nonatomic, readonly) CALayer *dotLayer;
@property (nonatomic, readonly) CALayer *handLayer;

- (void).cxx_destruct;
- (void)_updateHandTransform;
- (id)dotLayer;
- (id)handLayer;
- (id)initWithDotSize:(double)arg1 handWidth:(double)arg2 beginAngle:(double)arg3 endAngle:(double)arg4;
- (void)layoutSubviews;
- (void)setValue:(float)arg1 animated:(bool)arg2;

@end
