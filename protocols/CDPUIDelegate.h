
@protocol CDPUIDelegate <NSObject>

@required

- (void)uiController:(CDPUIController *)arg1 didPresentRootViewController:(UIViewController *)arg2;

@optional

- (void)uiController:(void *)arg1 prepareAlertContext:(void *)arg2; // needs 2 arg types, found 6: CDPUIController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)uiController:(void *)arg1 preparePresentationContext:(void *)arg2; // needs 2 arg types, found 6: CDPUIController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
