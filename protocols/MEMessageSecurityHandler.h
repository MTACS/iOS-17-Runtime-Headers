
@protocol MEMessageSecurityHandler <MEMessageEncoder, MEMessageDecoder>

@required

- (MEExtensionViewController *)extensionViewControllerForMessageContext:(NSData *)arg1;
- (MEExtensionViewController *)extensionViewControllerForMessageSigners:(NSArray *)arg1;
- (void)primaryActionClickedForMessageContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MEExtensionViewController *, void*

@end
