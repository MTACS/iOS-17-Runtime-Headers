
@interface ODIPyramid : NSObject

+ (void)addTrapezoidForNode:(id)arg1 top:(float)arg2 height:(float)arg3 topBase:(float)arg4 bottomBase:(float)arg5 state:(id)arg6;
+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (void)mapWithState:(id)arg1 apexUp:(bool)arg2;
+ (unsigned long long)nodeCountWithState:(id)arg1;
+ (bool)verticalFlipWithState:(id)arg1;

@end
