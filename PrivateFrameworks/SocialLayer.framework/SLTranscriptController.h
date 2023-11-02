
@interface SLTranscriptController : UIViewController <_UIRemoteViewControllerContaining> {
    NSExtension * _extension;
    _UIRemoteViewController * _remoteViewController;
    NSUUID * _requestUUID;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIRemoteViewController *remoteViewController;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (void)dealloc;
- (bool)deviceIsiPad;
- (id)extension;
- (void)presentTranscriptForMessageGUID:(id)arg1 attachmentGUID:(id)arg2 presentingViewController:(id)arg3;
- (id)remoteViewController;
- (id)requestUUID;
- (void)setExtension:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
