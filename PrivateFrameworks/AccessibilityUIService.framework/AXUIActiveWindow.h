
@interface AXUIActiveWindow : AXUIWindow

- (bool)_accessibilityWindowVisible;
- (bool)_usesWindowServerHitTesting;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;

@end
