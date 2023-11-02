
@interface PTEffectDebugLayer : NSObject {
    PTGraphRenderer * _brightSceneDetector;
    PTColorConversion * _colorConversion;
    PTDepthConverter * _depthConverter;
    <MTLTexture> * _disparityFixedFocus;
    PTEffectRelighting * _effectRelighting;
    <MTLBuffer> * _faceDisparityArray;
    PTGraphRenderer * _faceDisparityGraphs;
    PTGraphRenderer * _focusDisparityGraph;
    <MTLBuffer> * _focusDisparityModifier;
    <MTLBuffer> * _focusDisparityRaw;
    PTGraphRenderer * _focusDisparityRelightingGraph;
    int  _height;
    PTMetalContext * _metalContext;
    PTMSRResize * _msrColorPyramid;
    PTEffectReactionProvider * _reactionProvider;
    <PTRenderState> * _renderState;
    <MTLTexture> * _softAlphaMask;
    PTGraphRenderer * _srlGraph;
    PTUtil * _util;
    PTVFXRenderEffect * _vfxRenderEffect;
    int  _width;
}

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)arg1 effectRelighting:(id)arg2 renderState:(id)arg3 util:(id)arg4 colorConversion:(id)arg5 msrColorPyramid:(id)arg6 vfxRenderEffect:(id)arg7 depthConverter:(id)arg8 softAlphaMask:(id)arg9 disparityFixedFocus:(id)arg10 faceDisparityArray:(id)arg11 focusDisparityRaw:(id)arg12 focusDisparityModifiers:(id)arg13;
- (void)renderDebugInformation:(long long)arg1 effectRenderRequest:(id)arg2 reactionStates:(id)arg3 disparity:(id)arg4 disparityCentered:(id)arg5 normal:(id)arg6 disparityFiltered:(id)arg7 normalFiltered:(id)arg8 displacementFWD:(id)arg9 humanDetections:(id)arg10 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg11 fNumber:(float)arg12 focusDisparityRaw:(id)arg13 useDisparityBufferForReactions:(id)arg14 outYUV:(id)arg15;
- (void)renderDebugSubjectRelighting:(id)arg1 humanDetections:(id)arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 outYUV:(id)arg4 frameIndex:(int)arg5;
- (void)renderThumbnailsWithDisparity:(id)arg1 disparityCentered:(id)arg2 normal:(id)arg3 disparityFiltered:(id)arg4 normalFiltered:(id)arg5 displacementFWD:(id)arg6 outYUV:(id)arg7;
- (void)setReactionProvider:(id)arg1;

@end
