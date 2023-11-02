
@protocol PKStrokeRenderCache <NSObject>

@required

- (unsigned long long)cacheCost;
- (bool)isCompatibleWithInk:(PKInk *)arg1 renderZoomFactor:(long long)arg2;
- (bool)lockPurgeableResourcesAddToSet:(NSMutableSet *)arg1;
- (bool)needsCompute;

@end
