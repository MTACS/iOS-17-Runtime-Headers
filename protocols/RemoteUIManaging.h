
@protocol RemoteUIManaging <LARemoteUIHost>

@required

- (void)connectionToViewServiceInvalidated:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)dismissRemoteUI:(void *)arg1 uiMechanism:(void *)arg2 uiDisappeared:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 8: <LARemoteUI> *, MechanismUI<LAUIMechanism><LARemoteUIHost> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)prepareForRemoteViewControllerWithMechanism:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: MechanismUI<LAUIMechanism><LARemoteUIHost> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)showUIWithParams:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: RemoteUIParams *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
