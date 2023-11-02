
@interface _TtCO11MediaCoreUI8Backdrop17CompositeRenderer : NSObject <MTKViewDelegate> {
    void aspectRatio;
    void colorPixelFormat;
    void context;
    void crossfadeDuration;
    void crossfadeTimingFunction;
    void environment;
    void framebufferPixelFormat;
    void imageStorage;
    void isPaused;
    void modeTimingFunction;
    void observer;
    void pinchMix;
    void placeholderColor;
    void renderers;
    void spectrumAnalysis;
    void state;
    void textureTransitionMix;
    void uniforms;
    void warpTimingFunction;
    void warpTimingSpeed;
}

- (void).cxx_destruct;
- (void)drawInMTKView:(id)arg1;
- (id)init;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;

@end
