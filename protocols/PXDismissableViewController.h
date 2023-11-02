
@protocol PXDismissableViewController <NSObject>

@optional

- (bool)isReadyForDismissal;
- (void)prepareForDismissal;

@end
