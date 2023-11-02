
@interface _TtCV10EventKitUI39_AppExtensionEventGenericDetailHostView15HostCoordinator : NSObject <EKEventGenericDetailViewHostInterface, _EXHostViewControllerDelegate> {
    void conn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    void parent;
}

- (void).cxx_destruct;
- (void)didChangeNavigationBarButtonsWithLeftBarButtonIDs:(id)arg1 rightBarButtonIDs:(id)arg2;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)init;
- (void)requestDismissViewWithName:(id)arg1 presentationStyle:(long long)arg2;
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3;

@end
