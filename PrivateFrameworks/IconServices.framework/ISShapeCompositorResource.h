
@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource> {
    IFColor * _fillColor;
    IFColor * _lineColor;
    double  _lineWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) IFColor *fillColor;
@property (readonly) unsigned long long hash;
@property (retain) IFColor *lineColor;
@property double lineWidth;
@property (readonly) Class superclass;

+ (id)circleShape;
+ (double)continuousCornerRadiusForSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)continuousRoundedRectShape;
+ (id)tvOSRoundedRectShape;

- (void).cxx_destruct;
- (id)_init;
- (id)fillColor;
- (id)imageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)lineColor;
- (double)lineWidth;
- (void)setFillColor:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineWidth:(double)arg1;

@end
