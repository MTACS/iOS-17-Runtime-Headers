
@protocol BFFSecondPartyProgressIndicatorDisplayable <NSObject>

@required

- (bool)isAnimating;
- (void)startIndeterminateProgressIndicator;
- (void)stopIndeterminateProgressIndicator;

@end
