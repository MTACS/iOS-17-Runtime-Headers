
@protocol RUIPresentationHandling <NSObject>

@required

- (void)dismissModalRUIController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: RUINavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentModalRUIController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: RUINavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)replaceModalRUIController:(void *)arg1 byController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: RUINavigationController *, RUINavigationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)ruiDidDismissAlertController:(UIAlertController *)arg1;
- (void)ruiPresentAlertController:(UIAlertController *)arg1;

@end
