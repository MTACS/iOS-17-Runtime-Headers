
@interface FPUIActionExtensionViewController : UIViewController <FPUIActionExtensionViewControllerProtocol> {
    unsigned long long  _browserUserInterfaceStyle;
}

@property (getter=_browserUserInterfaceStyle, nonatomic, readonly) unsigned long long browserUserInterfaceStyle;
@property (nonatomic, readonly) FPUIActionExtensionContext *extensionContext;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (unsigned long long)_browserUserInterfaceStyle;
- (void)_browserUserInterfaceStyleDidChange;
- (void)_configureWithDomainIdentifier:(id)arg1;
- (bool)_extensionImplementsSelector:(SEL)arg1;
- (void)_prepareAuthenticationUsingServerURL:(id)arg1;
- (void)_prepareAuthenticationUsingURL:(id)arg1;
- (void)_prepareForActionWithIdentifier:(id)arg1 items:(id)arg2;
- (void)_prepareForError:(id)arg1;
- (void)_prepareForServerCreation;
- (void)_setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)prepareAuthenticationUsingServerURL:(id)arg1;
- (void)prepareAuthenticationUsingURL:(id)arg1;
- (void)prepareForActionWithIdentifier:(id)arg1 itemIdentifiers:(id)arg2;
- (void)prepareForAuthentication;
- (void)prepareForError:(id)arg1;
- (void)prepareForServerCreation;

@end
