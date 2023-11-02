
@interface ABPK2DDetectionPostProcessSelector : NSObject

+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)arg1 use3DSkeletonForExtrapolation:(bool)arg2 shouldPush3DSupportSkeleton:(bool)arg3;
+ (id)get2DDetectionPostProcessWithNetworkConfig:(id)arg1 use3DSkeletonForExtrapolation:(bool)arg2 shouldPush3DSupportSkeleton:(bool)arg3 withExtrapolationTime:(double)arg4;

@end
