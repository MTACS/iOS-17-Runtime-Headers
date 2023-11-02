
@interface CalCompatibility : NSObject

+ (bool)isProgramSDKAtLeast:(struct { unsigned int x1; unsigned int x2; })arg1;
+ (void)perform:(id /* block */)arg1 whileSimulatingLegacyBehaviors:(bool)arg2;
+ (void)performWhileSimulatingLegacyBehaviors:(id /* block */)arg1;
+ (void)setSimulateLegacyBehaviors:(bool)arg1;
+ (bool)simulateLegacyBehaviors;

@end
