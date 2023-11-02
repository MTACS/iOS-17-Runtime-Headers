
@interface FigSubtitleCALayer : FigSubtitleBackdropCALayer <CALayerDelegate> {
    struct OpaqueFigSubtitleCALayerInternal { struct OpaqueFigPlayer {} *x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; unsigned char x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct FigGeometryMargins { struct FigGeometryDimension { double x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_7_1_1; struct FigGeometryDimension { double x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_7_1_2; struct FigGeometryDimension { double x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_7_1_3; struct FigGeometryDimension { double x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; } x_7_1_4; } x7; unsigned char x8; bool x9; unsigned char x10; unsigned char x11; id x12; unsigned int x13; struct __CFString {} *x14; struct OpaqueFigCaptionRendererSession {} *x15; struct OpaqueFigSubtitleRenderer {} *x16; } * layerInternal;
}

@property (nonatomic, copy) NSString *captionRenderingStrategy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOverscanSubtitleSupportEnabled, nonatomic) bool overscanSubtitleSupportEnabled;
@property (readonly) Class superclass;

+ (id)defaultActionForKey:(id)arg1;

- (void)_addBoundsAnimation:(id)arg1 forKey:(id)arg2;
- (void)_addPositionAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)addAnimations:(id)arg1 forKey:(id)arg2;
- (id)captionRenderingStrategy;
- (void)clear;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)handleNeedsLayoutNotification;
- (id)init;
- (id)initWithLayer:(id)arg1;
- (bool)isOverscanSubtitleSupportEnabled;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)removeAnimationsForKey:(id)arg1;
- (void)setCaptionRendererOutputOptions:(id)arg1 forKeyPath:(id)arg2;
- (void)setCaptionRendererOutputSeparated:(bool)arg1;
- (void)setCaptionRenderingStrategy:(id)arg1;
- (void)setCaptionsAvoidanceMargins:(struct FigGeometryMargins { struct FigGeometryDimension { double x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct FigGeometryDimension { double x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; struct FigGeometryDimension { double x_3_1_1; unsigned int x_3_1_2; unsigned int x_3_1_3; } x3; struct FigGeometryDimension { double x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; })arg1;
- (void)setOverscanSubtitleSupportEnabled:(bool)arg1;
- (void)setPlayer:(struct OpaqueFigPlayer { }*)arg1;
- (void)setSubtitleGravityNonObscuring:(unsigned char)arg1;
- (void)setVideoRelativeToViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVideosize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateNonForcedSubtitleDisplayEnabled:(unsigned char)arg1;

@end
