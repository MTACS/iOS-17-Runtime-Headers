
@interface _UINavigationBarTitleRenamerRemoteSession : _UINavigationBarTitleRenamerSession <BSXPCSecureCoding, _UIOServiceConnectionObserver, _UIOverlayServiceDelegate> {
    _UIOServiceConnection * _connection;
    unsigned long long  _currentState;
    _UIOverlayService * _overlayService;
    FBSSceneIdentityToken * _sceneOriginIdentityToken;
    FPSandboxingURLWrapper * _urlWrapper;
}

@property (nonatomic, retain) _UIOServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIOverlayService *overlayService;
@property (nonatomic, readonly) FBSSceneIdentityToken *sceneOriginIdentityToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FPSandboxingURLWrapper *urlWrapper;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)_attemptLocalRenameForFileURL:(id)arg1 proposedName:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_client_cancelSessionAndNotify:(bool)arg1;
- (void)_client_fileRenameDidEnd:(id)arg1;
- (void)_client_fileRenameDidFail:(id)arg1 proposedName:(id)arg2;
- (void)_client_sessionDidEnd;
- (void)_client_sessionDidStartInRenamer:(id)arg1;
- (void)_client_textFieldDidEndEditingWithText:(id)arg1;
- (bool)_client_textFieldShouldEndEditingWithText:(id)arg1;
- (id)_client_willBeginRenamingWithText:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)_isServerSide;
- (void)_server_cancelSessionAndNotify:(bool)arg1;
- (void)_server_fileRenameDidEnd:(id)arg1;
- (void)_server_fileRenameDidFail:(id)arg1 proposedName:(id)arg2;
- (void)_server_sessionDidEnd;
- (void)_server_sessionDidStartInRenamer:(id)arg1;
- (void)_server_textFieldDidEndEditingWithText:(id)arg1;
- (bool)_server_textFieldShouldEndEditingWithText:(id)arg1;
- (id)_server_willBeginRenamingWithText:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_textFieldDidEndEditingWithText:(id)arg1;
- (bool)_textFieldShouldEndEditingWithText:(id)arg1;
- (void)_updateSessionWithAction:(long long)arg1;
- (id)_willBeginRenamingWithText:(id)arg1 selectedRange:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)cancelSession;
- (void)cancelSessionAndNotify:(bool)arg1;
- (id)connection;
- (id)createRenamerContentView;
- (void)dealloc;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)fileRenameDidEnd:(id)arg1;
- (void)fileRenameDidFail:(id)arg1 proposedName:(id)arg2;
- (id)fileURL;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 iconMetadata:(id)arg2 error:(id*)arg3 scene:(id)arg4;
- (id)initWithSuggestedTitle:(id)arg1 iconMetadata:(id)arg2 scene:(id)arg3;
- (id)overlayService;
- (void)overlayServiceDidInvalidate:(id)arg1;
- (id)sceneOriginIdentityToken;
- (void)serviceConnectionDidInvalidate:(id)arg1;
- (void)sessionDidEnd;
- (void)sessionDidStartInRenamer:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)urlWrapper;

@end
