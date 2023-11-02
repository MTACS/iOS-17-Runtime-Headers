
@protocol SFAppAutoFillOneTimeCodeProviderObserver <NSObject>

@required

- (void)oneTimeCodeProviderReceivedCode:(SFAppAutoFillOneTimeCodeProvider *)arg1;

@optional

- (void)oneTimeCodeProvider:(SFAppAutoFillOneTimeCodeProvider *)arg1 didUpdateOneTimeCode:(SFAutoFillOneTimeCode *)arg2;

@end
