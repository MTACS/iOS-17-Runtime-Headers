
@interface PHEditingExtensionContext : NSExtensionContext <PUEditingExtensionVendor> {
    PUEditingInitialPayload * __initialPayload;
    bool  _attemptUndoManagerAutoSetup;
    NSNumber * _fullSizeImageSandboxExtensionHandleWrapper;
    PUEditingExtensionUndoAdapter * _undoAdapter;
    NSUndoManager * _undoManagerForBarButtons;
    NSNumber * _videoPathSandboxExtensionHandleWrapper;
}

@property (readonly) PUEditingInitialPayload *_initialPayload;
@property (nonatomic) bool attemptUndoManagerAutoSetup;
@property (nonatomic, retain) PUEditingExtensionUndoAdapter *undoAdapter;
@property (nonatomic, retain) NSUndoManager *undoManagerForBarButtons;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_contentEditingController;
- (id)_initialPayload;
- (void)_releaseSandboxExtensions;
- (bool)attemptUndoManagerAutoSetup;
- (void)beginContentEditingWithCompletionHandler:(id /* block */)arg1;
- (void)cancelContentEditingWithResponseHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)finishContentEditing;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(id /* block */)arg2;
- (void)querySDKVersionWithResponseHandler:(id /* block */)arg1;
- (void)queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)arg1;
- (void)setAttemptUndoManagerAutoSetup:(bool)arg1;
- (void)setHideNavigationController:(bool)arg1;
- (void)setUndoAdapter:(id)arg1;
- (void)setUndoManagerForBarButtons:(id)arg1;
- (void)setupUndoProxyWithXPCListenerEndpoint:(id)arg1 attemptUndoManagerAutoSetup:(bool)arg2;
- (id)undoAdapter;
- (id)undoManagerForBarButtons;

@end
