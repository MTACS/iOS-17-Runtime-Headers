
@protocol URTDestinationPresentationDelegate <NSObject>

@required

- (void)handleCancelActionForAlertPresentation:(id <URTDestinationPresenting>)arg1;
- (void)handleDefaultActionForAlertPresentation:(id <URTDestinationPresenting>)arg1;
- (void)handleOtherActionForAlertPresentation:(id <URTDestinationPresenting>)arg1;

@end
