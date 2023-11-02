
@interface PTRaytracingV14 : NSObject <RenderingIntegration> {
    bool  _bicubicUpscale;
    PTColorConversion * _colorConversion;
    NSDictionary * _config;
    PTRenderDebugLayer * _debugLayer;
    long long  _debugRendering;
    struct CGSize { 
        double width; 
        double height; 
    }  _disparitySize;
    struct PTFocusEdge { 
        float width; 
        float gradientThreshold; 
        float gradientWeight; 
        float minMaxThreshold; 
    }  _focusEdge;
    bool  _injectedRGBAPyramid;
    PTMetalContext * _metalContext;
    PTRaytracingUtilsV1 * _raytracingUtils;
    PTRaytracingV14RenderState * _renderState;
    PTPyramidRGB * _rgbaPyramid;
    PTUtil * _util;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 renderEffects:(id)arg2 colorSize:(struct CGSize { double x1; double x2; })arg3 disparitySize:(struct CGSize { double x1; double x2; })arg4 debugRendering:(long long)arg5 verbose:(bool)arg6 config:(id)arg7 quality:(int)arg8;
- (unsigned long long)minimumResourceHeapSize;
- (int)prewarm;
- (int)renderContinuousWithSource:(id)arg1 renderRequest:(id)arg2;
- (void)setResourceHeap:(id)arg1;

@end
