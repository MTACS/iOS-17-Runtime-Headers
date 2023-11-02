
@protocol PKSharingMessageExtensionRenderer <NSObject>

@required

- (void)messageDidUpdate;
- (void)openAppURL:(NSURL *)arg1;
- (NSString *)presentationSceneIdentifier;
- (void)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 button:(NSString *)arg3;
- (void)showAlertWithTitle:(void *)arg1 message:(void *)arg2 button:(void *)arg3 destructiveButton:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
