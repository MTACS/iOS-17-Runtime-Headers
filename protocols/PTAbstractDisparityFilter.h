
@protocol PTAbstractDisparityFilter <NSObject>

@required

- (int)prepareFilter:(id <MTLCommandBuffer>)arg1 inRGBA:(id <MTLTexture>)arg2 outDisplacement:(id <MTLTexture>)arg3;
- (void)reset;
- (int)temporalDisparityFilter:(id <MTLCommandBuffer>)arg1 inDisplacement:(id <MTLTexture>)arg2 inDisparityPrev:(id <MTLTexture>)arg3 inDisparity:(id <MTLTexture>)arg4 outDisparity:(id <MTLTexture>)arg5 disparityBias:(float)arg6;
- (int)temporalDisparityFilter:(id <MTLCommandBuffer>)arg1 inDisplacement:(id <MTLTexture>)arg2 inStatePrev:(id <MTLTexture>)arg3 inDisparity:(id <MTLTexture>)arg4 outDisparity:(id <MTLTexture>)arg5 outState:(id <MTLTexture>)arg6;

@end
