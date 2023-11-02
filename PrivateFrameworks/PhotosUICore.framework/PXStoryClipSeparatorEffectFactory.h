
@interface PXStoryClipSeparatorEffectFactory : NSObject

+ (void)getParameters:(out struct { unsigned int x1; double x2; double x3; }*)arg1 forOppositePansWithDistance:(double)arg2 threeUpComposition:(id)arg3;
+ (void)getParameters:(out struct { unsigned int x1; double x2; double x3; }*)arg1 forOppositeRotationsWithAngle:(double)arg2 threeUpComposition:(id)arg3;
+ (void)getParameters:(out struct { unsigned int x1; double x2; double x3; }*)arg1 forParallelPansWithDistance:(double)arg2 threeUpComposition:(id)arg3;
+ (void)getParameters:(out struct { unsigned int x1; double x2; double x3; }*)arg1 forParallelRotationsWithAngle:(double)arg2 threeUpComposition:(id)arg3;
+ (struct { unsigned int x1; double x2; double x3; })parametersForPanTowardsEdge:(unsigned int)arg1 distance:(double)arg2;
+ (struct { unsigned int x1; double x2; double x3; })parametersForRotationWithAngle:(double)arg1;

@end
