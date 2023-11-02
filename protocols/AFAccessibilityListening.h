
@protocol AFAccessibilityListening <NSObject>

@required

- (void)accessibilityObserver:(AFAccessibilityObserver *)arg1 stateDidChangeFrom:(AFAccessibilityState *)arg2 to:(AFAccessibilityState *)arg3;

@end
