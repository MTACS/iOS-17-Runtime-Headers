
@interface _TtCV10EventKitUI26_AppExtensionEventHostView15HostCoordinator : NSObject <EKEventViewHostInterface, _EXHostViewControllerDelegate> {
    void configurationChangedPublisherSink;
    void conn;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identity;
    void parent;
}

- (void).cxx_destruct;
- (void)didCompleteWithAction:(long long)arg1;
- (void)hostViewControllerDidActivate:(id)arg1;
- (void)hostViewControllerWillDeactivate:(id)arg1 error:(id)arg2;
- (id)init;
- (void)requestDismissViewWithName:(id)arg1 presentationStyle:(long long)arg2;
- (void)requestPresentViewWithName:(id)arg1 viewID:(id)arg2 presentationStyle:(long long)arg3 sourceRect:(id)arg4 preferredContentSize:(id)arg5 oopContentBackgroundColor:(id)arg6;

@end
