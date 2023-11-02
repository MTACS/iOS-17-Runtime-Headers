
@interface FigCaptionLayer : FigBaseCALayer <CALayerDelegate> {
    FigCaptionLayerPrivate * _priv;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)init;
- (void)layoutSublayers;
- (void)processCaptionCommand:(unsigned int)arg1 data:(id)arg2;
- (void)resetCaptions;
- (void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins { struct FigGeometryDimension { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct FigGeometryDimension { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct FigGeometryDimension { double x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct FigGeometryDimension { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; })arg1;
- (void)setFontName:(const char *)arg1;
- (void)setOptions:(id)arg1 forKeyPath:(id)arg2;
- (void)setSeparatedValue:(bool)arg1;
- (void)setVideoRelativeToViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateDisplay:(struct OpaqueFigCFCaptionRenderer { }*)arg1;

@end
