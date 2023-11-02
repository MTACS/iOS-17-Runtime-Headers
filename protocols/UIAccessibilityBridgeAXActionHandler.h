
@protocol UIAccessibilityBridgeAXActionHandler <NSObject>

@required

- (bool)performAXAction:(int)arg1 withValue:(id)arg2 onBridgeElement:(UIAccessibilityBridgeElement *)arg3;

@end
