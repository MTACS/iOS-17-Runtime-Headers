
@interface RTLocationDownsampler : NSObject

+ (id)_downsampleLocations:(id)arg1 errorFunction:(id /* block */)arg2 errorThreshold:(double)arg3;
+ (id)_downsampleLocations:(id)arg1 errorFunction:(id /* block */)arg2 outputSize:(long long)arg3;
+ (id /* block */)createErrorFunctionWithAbsoluteCrosstrackDistance;
+ (id /* block */)createErrorFunctionWithPerpendicularDistance;
+ (id /* block */)createErrorFunctionWithPerpendicularDistanceAndSpeed;
+ (id)downsampleLocations:(id)arg1 errorFunction:(id /* block */)arg2 errorThreshold:(double)arg3 outputSize:(unsigned long long)arg4;
+ (id)downsampleLocations:(id)arg1 outputSize:(unsigned long long)arg2;
+ (id)filterConvergingLocations:(id)arg1;

@end
