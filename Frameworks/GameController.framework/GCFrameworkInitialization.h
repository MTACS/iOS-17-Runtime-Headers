
@interface GCFrameworkInitialization : NSObject

+ (void)controllerManagerDidOpen;
+ (void)enableControllerSupportWithReason:(long long)arg1;
+ (void)enableKeyboardAndMouseSupportServerSide;
+ (void)enableKeyboardSupportWithReason:(long long)arg1;
+ (void)enableMouseSupportWithReason:(long long)arg1;
+ (id)initOperationQueue;
+ (id)initQueue;
+ (void)initializeFramework;
+ (void)listenForObservers;

@end
