
@protocol _SFAuthenticationClient <NSObject>

@required

- (<_SFAuthenticationCustomUIProgressObserver> *)authenticationCustomUIProgressObserverForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)authenticationMessageForContext:(_SFAuthenticationContext *)arg1;
- (bool)displayMessageAsTitleForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)passcodePromptForContext:(_SFAuthenticationContext *)arg1;

@end
