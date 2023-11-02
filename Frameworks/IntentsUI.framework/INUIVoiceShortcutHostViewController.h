
@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface> {
    <INUIVoiceShortcutRemoteViewControllerDelegate> * _delegate;
    long long  _mode;
    INUIVoiceShortcutHostContext * _serviceContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIVoiceShortcutRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) INUIVoiceShortcutHostContext *serviceContext;
@property (readonly) Class superclass;

+ (id)_voiceShortcutUIExtension;
+ (id)exportedInterface;
+ (void)getViewControllerCompletion:(id /* block */)arg1;
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(id /* block */)arg2;
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (long long)mode;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (id)remoteViewControllerProxy;
- (id)serviceContext;
- (void)setDelegate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setServiceContext:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
