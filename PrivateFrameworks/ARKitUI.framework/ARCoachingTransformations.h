
@interface ARCoachingTransformations : NSObject

+ (float)degreesToRadians:(float)arg1;
+ (struct { })fromMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })lookAtcenterup;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })ortho2d:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4 near:(float)arg5 far:(float)arg6;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })perspective_fov:(float)arg1 aspect:(float)arg2 near:(float)arg3 far:(float)arg4;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })rotate:(void *)arg1 axis:(void *)arg2; // needs 2 arg types, found 1: float
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })scale;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })translate;

@end
