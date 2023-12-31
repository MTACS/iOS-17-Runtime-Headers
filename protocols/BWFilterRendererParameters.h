
@protocol BWFilterRendererParameters <NSObject, NSCopying>

@required

- (float)interpolationFractionComplete;
- (int)prepareForRenderingWithInputVideoFormat:(BWVideoFormat *)arg1;
- (short)type;
- (void)updateByInterpolatingFromParameters:(id <BWFilterRendererParameters>)arg1 toParameters:(id <BWFilterRendererParameters>)arg2 withFractionComplete:(float)arg3;

@end
