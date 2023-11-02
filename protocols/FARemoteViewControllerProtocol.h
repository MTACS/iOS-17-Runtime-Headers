
@protocol FARemoteViewControllerProtocol

@required

- (void)dismissAlertProxyWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)operationFinishedWithResponse:(FACircleStateResponse *)arg1;
- (void)presentAlertProxyWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentWithRUIModalPresentationStyle:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)replaceModalRUIControllerWithStyle:(void *)arg1 byController:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
