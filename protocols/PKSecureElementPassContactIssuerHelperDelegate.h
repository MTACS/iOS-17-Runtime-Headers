
@protocol PKSecureElementPassContactIssuerHelperDelegate <NSObject>

@required

- (void)contactIssuerHelper:(void *)arg1 didRequestDismissViewControllerAnimated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: PKSecureElementPassContactIssuerHelper *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)contactIssuerHelper:(void *)arg1 didRequestPresentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: PKSecureElementPassContactIssuerHelper *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
