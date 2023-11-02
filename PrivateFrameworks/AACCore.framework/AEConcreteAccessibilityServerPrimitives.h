
@interface AEConcreteAccessibilityServerPrimitives : NSObject <AEAccessibilityServerPrimitives>

@property (getter=isRestrictedForAAC, nonatomic, readonly) bool restrictedForAAC;

- (bool)isRestrictedForAAC;
- (id)observeGuidedAccessActiveStateChangeOnQueue:(id)arg1 withHandler:(id /* block */)arg2;

@end
