
@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate> {
    GKExtensionHostViewController * _extensionHostViewController;
    NSString * _extensionIdentifier;
    long long  _extensionLoadState;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKExtensionHostViewController *extensionHostViewController;
@property (nonatomic, copy) NSString *extensionIdentifier;
@property (nonatomic) long long extensionLoadState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)extensionDidTerminateWithError:(id)arg1;
- (id)extensionHostViewController;
- (id)extensionIdentifier;
- (long long)extensionLoadState;
- (id)initWithExtensionBundleIdentifer:(id)arg1 host:(id)arg2;
- (void)instantiateViewControllerWithHost:(id)arg1 handler:(id /* block */)arg2;
- (bool)needToLoadExtension;
- (void)setExtensionHostViewController:(id)arg1;
- (void)setExtensionIdentifier:(id)arg1;
- (void)setExtensionLoadState:(long long)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;

@end
