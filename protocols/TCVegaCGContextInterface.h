
@protocol TCVegaCGContextInterface <JSExport>

@required

- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(bool)arg6;
- (void)beginPath;
- (void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4;
- (void)clip;
- (void)closePath;
- (JSValue *)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (void)fill;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (JSValue *)fillStyle;
- (void)fillTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3;
- (NSString *)font;
- (double)globalAlpha;
- (bool)isPointInPathWithX:(double)arg1 y:(double)arg2;
- (NSString *)lineCap;
- (double)lineDashOffset;
- (NSString *)lineJoin;
- (void)lineToX:(double)arg1 y:(double)arg2;
- (double)lineWidth;
- (JSValue *)measureText:(NSString *)arg1;
- (double)miterLimit;
- (void)moveToX:(double)arg1 y:(double)arg2;
- (double)pixelRatio;
- (void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4;
- (void)restore;
- (void)rotateWithAngle:(double)arg1;
- (void)save;
- (void)setFillStyle:(JSValue *)arg1;
- (void)setFont:(NSString *)arg1;
- (void)setGlobalAlpha:(double)arg1;
- (void)setLineCap:(NSString *)arg1;
- (void)setLineDashOffset:(double)arg1;
- (void)setLineDashWithSegments:(NSArray *)arg1;
- (void)setLineJoin:(NSString *)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setMiterLimit:(double)arg1;
- (void)setPixelRatio:(double)arg1;
- (void)setStrokeStyle:(NSString *)arg1;
- (void)setTextAlign:(NSString *)arg1;
- (void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6;
- (void)stroke;
- (NSString *)strokeStyle;
- (void)strokeTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3;
- (NSString *)textAlign;
- (void)translateWithX:(double)arg1 y:(double)arg2;

@optional

- (void)arcWithX:(double)arg1 y:(double)arg2 radius:(double)arg3 startAngle:(double)arg4 endAngle:(double)arg5 anticlockwise:(bool)arg6 __JS_EXPORT_AS__arc:(id)arg7;
- (void)bezierCurveToCP1x:(double)arg1 cp1y:(double)arg2 cp2x:(double)arg3 cp2y:(double)arg4 x:(double)arg5 y:(double)arg6 __JS_EXPORT_AS__bezierCurveTo:(id)arg7;
- (void)clearRectWithX:(double)arg1 y:(double)arg2 w:(double)arg3 h:(double)arg4 __JS_EXPORT_AS__clearRect:(id)arg5;
- (JSValue *)createLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 __JS_EXPORT_AS__createLinearGradient:(id)arg5;
- (void)fillRectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__fillRect:(id)arg5;
- (void)fillTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__fillText:(id)arg4;
- (bool)isPointInPathWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__isPointInPath:(id)arg3;
- (void)lineToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__lineTo:(id)arg3;
- (void)moveToX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__moveTo:(id)arg3;
- (void)rectWithX:(double)arg1 y:(double)arg2 width:(double)arg3 height:(double)arg4 __JS_EXPORT_AS__rect:(id)arg5;
- (void)rotateWithAngle:(double)arg1 __JS_EXPORT_AS__rotate:(id)arg2;
- (void)setLineDashWithSegments:(NSArray *)arg1 __JS_EXPORT_AS__setLineDash:(id)arg2;
- (void)setTransformWithA:(double)arg1 b:(double)arg2 c:(double)arg3 d:(double)arg4 e:(double)arg5 f:(double)arg6 __JS_EXPORT_AS__setTransform:(id)arg7;
- (void)strokeTextWithString:(NSString *)arg1 x:(double)arg2 y:(double)arg3 __JS_EXPORT_AS__strokeText:(id)arg4;
- (void)translateWithX:(double)arg1 y:(double)arg2 __JS_EXPORT_AS__translate:(id)arg3;

@end
