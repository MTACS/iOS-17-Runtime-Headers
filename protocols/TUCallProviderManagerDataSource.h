
@protocol TUCallProviderManagerDataSource <NSObject>

@required

- (void)blockUntilInitialStateReceived;
- (bool)currentProcessCanAccessInitialState;
- (<TUCallProviderManagerDataSourceDelegate> *)delegate;
- (void)donateUserIntentForProviderWithIdentifier:(NSString *)arg1;
- (void)invalidate;
- (void)launchAppForDialRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TUDialRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSDictionary *)localProvidersByIdentifier;
- (bool)openURL:(NSURL *)arg1 isSensitive:(bool)arg2 error:(id*)arg3;
- (NSDictionary *)pairedHostDeviceProvidersByIdentifier;
- (NSDictionary *)providersByIdentifier;
- (void)setDelegate:(id <TUCallProviderManagerDataSourceDelegate>)arg1;

@end
