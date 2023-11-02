
@protocol UITextInputSessionActionAnalyticsEndingObserver <NSObject>

@required

- (void)didEndMatchingAccumulatorName:(NSString *)arg1;
- (NSSet *)matchingAccumulatorNames;

@end
