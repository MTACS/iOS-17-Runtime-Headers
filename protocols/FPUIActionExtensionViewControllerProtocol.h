
@protocol FPUIActionExtensionViewControllerProtocol

@required

- (void)_configureWithDomainIdentifier:(NSString *)arg1;
- (void)_prepareAuthenticationUsingServerURL:(NSURL *)arg1;
- (void)_prepareAuthenticationUsingURL:(NSURL *)arg1;
- (void)_prepareForActionWithIdentifier:(NSString *)arg1 items:(NSArray *)arg2;
- (void)_prepareForError:(NSError *)arg1;
- (void)_prepareForServerCreation;
- (void)_setBrowserUserInterfaceStyle:(unsigned long long)arg1;

@end
