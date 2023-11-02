
@protocol BCNativeOAuth2Protocol <BCBaseOAuth2Protocol>

@required

- (NSString *)tokenExchangeBodyWithCode:(NSString *)arg1;
- (NSURL *)tokenExchangeURL;

@end
