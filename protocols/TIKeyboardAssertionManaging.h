
@protocol TIKeyboardAssertionManaging <NSObject>

@required

- (void)addAssertionForObject:(id)arg1;
- (<TIKeyboardAssertionManagerDelegate> *)delegate;
- (bool)hasAssertions;
- (bool)hasBackgroundActivityAssertions;
- (void)releaseBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)retainBackgroundActivityAssertion;
- (void)setDelegate:(id <TIKeyboardAssertionManagerDelegate>)arg1;

@end
