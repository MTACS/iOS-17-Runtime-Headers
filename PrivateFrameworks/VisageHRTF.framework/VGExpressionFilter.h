
@interface VGExpressionFilter : NSObject

+ (float)clip_to_01:(float)arg1 min_val:(float)arg2 max_val:(float)arg3;
+ (id)getBlendshapes:(id)arg1;

- (float)filter:(id)arg1;

@end
