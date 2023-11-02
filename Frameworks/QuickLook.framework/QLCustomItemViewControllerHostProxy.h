
@interface QLCustomItemViewControllerHostProxy : NSObject <QLCustomItemViewControllerHost> {
    <QLCustomItemViewControllerHost> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <QLCustomItemViewControllerHost> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissQuickLook;
- (void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFullScreen:(bool)arg1;

@end
