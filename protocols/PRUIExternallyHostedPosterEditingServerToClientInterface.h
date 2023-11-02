
@protocol PRUIExternallyHostedPosterEditingServerToClientInterface <NSObject>

@required

- (oneway void)didEndEditingWithResponse:(PRUIModalEntryPointResponse *)arg1;
- (oneway void)willEndEditingWithResponse:(PRUIModalEntryPointResponse *)arg1;

@end
