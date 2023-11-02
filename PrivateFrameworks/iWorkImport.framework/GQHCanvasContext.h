
@interface GQHCanvasContext : NSObject <GQHContext> {
    struct __CFString { } * mBezierStr;
    NSMutableString * mFunctionName;
    GQDAffineGeometry * mGeometry;
    bool  mHasFill;
    bool  mHasStroke;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3 neighboringCP:(struct CGPoint { double x1; double x2; })arg4 filledPath:(struct CGPath {}**)arg5 strokedPath:(struct CGPath {}**)arg6;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)createMaskedImageWithId:(struct __CFString { }*)arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(struct CGPath { }*)arg6 graphicStyle:(id)arg7 isFloating:(bool)arg8 state:(id)arg9;
- (void)createShapeWithId:(struct __CFString { }*)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(bool)arg5 state:(id)arg6;
- (void)dealloc;
- (struct GQHPathEndPointInfo { bool x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; int x6; })endPointInfoForPath:(struct CGPath { }*)arg1;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)prepareContext:(id)arg1;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)setCGPath:(struct CGPath { }*)arg1 state:(id)arg2;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setImageFill:(struct __CFURL { }*)arg1 srcSize:(struct CGSize { double x1; double x2; })arg2 mode:(int)arg3 state:(id)arg4;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (void)teardownContext:(id)arg1;
- (void)translate:(struct CGSize { double x1; double x2; })arg1 state:(id)arg2;

@end