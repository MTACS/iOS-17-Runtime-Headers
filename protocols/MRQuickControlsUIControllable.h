
@protocol MRQuickControlsUIControllable <MRUIControllable>

@required

- (NSString *)acquireQuickControlsAssertion;
- (void)releaseQuickControlsAssertion;

@end
