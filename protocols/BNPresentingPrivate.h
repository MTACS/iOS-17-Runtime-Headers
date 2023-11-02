
@protocol BNPresentingPrivate <BNPresenting>

@required

- (<BNPresentingDelegate> *)delegate;
- (void)setDelegate:(id <BNPresentingDelegate>)arg1;

@optional

- (void)preferredMinimumTopInsetDidInvalidate;

@end
