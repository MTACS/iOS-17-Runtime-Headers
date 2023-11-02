
@interface DYMTLPixelHistoryTextureSupport : NSObject

+ (id)pixelValueFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 atX:(unsigned long long)arg5 y:(unsigned long long)arg6 inCommandBuffer:(id)arg7 overHarvestForDepthStencil:(bool)arg8;
+ (void)pixelValueFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 atX:(unsigned long long)arg5 y:(unsigned long long)arg6 inCommandBuffer:(id)arg7 overHarvestForDepthStencil:(bool)arg8 completion:(id /* block */)arg9;
+ (void)pixelValueToTexture:(id)arg1 buffer:(id)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 depthPlane:(unsigned long long)arg5 atX:(unsigned long long)arg6 y:(unsigned long long)arg7 inCommandBuffer:(id)arg8;

@end
