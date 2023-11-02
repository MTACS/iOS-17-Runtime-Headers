
@interface LKStartupSupport : NSObject

+ (bool)inUserSessionLoginUI;
+ (void)postStartupActions;
+ (void)postStartupTransitionActions;

@end
