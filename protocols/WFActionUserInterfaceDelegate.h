
@protocol WFActionUserInterfaceDelegate <NSObject>

@required

- (void)actionUserInterface:(WFActionUserInterface *)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;
- (void)actionUserInterface:(WFActionUserInterface *)arg1 showViewControllerInPlatter:(UIViewController *)arg2;
- (void)dismissPlatterForActionUserInterface:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: WFActionUserInterface *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (UIWindow *)presentationAnchorForActionUserInterface:(WFActionUserInterface *)arg1;
- (UIViewController *)viewControllerForPresentingActionUserInterface:(WFActionUserInterface *)arg1;

@end
