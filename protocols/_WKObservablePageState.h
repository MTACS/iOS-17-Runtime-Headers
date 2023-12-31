
@protocol _WKObservablePageState

@required

- (NSURL *)URL;
- (bool)_webProcessIsResponsive;
- (double)estimatedProgress;
- (bool)hasOnlySecureContent;
- (bool)isLoading;
- (struct __SecTrust { }*)serverTrust;
- (NSString *)title;
- (NSURL *)unreachableURL;

@end
