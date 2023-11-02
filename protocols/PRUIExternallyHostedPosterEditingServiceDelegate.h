
@protocol PRUIExternallyHostedPosterEditingServiceDelegate <NSObject>

@required

- (void)didEndEditingWithResponse:(PRUIModalEntryPointResponse *)arg1;
- (void)willEndEditingWithResponse:(PRUIModalEntryPointResponse *)arg1;

@end
