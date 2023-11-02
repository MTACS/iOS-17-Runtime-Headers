
@protocol LTUIViewServiceExtensionHostProtocol <NSObject>

@required

- (void)confirmUserConsent;
- (void)dismiss;
- (void)expandSheet;
- (void)finishWithTranslation:(NSAttributedString *)arg1;
- (void)remoteIsReady;

@end
