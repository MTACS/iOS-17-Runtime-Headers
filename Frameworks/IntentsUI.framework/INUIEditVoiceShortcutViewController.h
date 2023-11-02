
@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining> {
    UIViewController * _currentChildViewController;
    <INUIEditVoiceShortcutViewControllerDelegate> * _delegate;
    INUIVoiceShortcutHostViewController * _remoteHostViewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, retain) UIViewController *currentChildViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIEditVoiceShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_remoteHostViewController, setter=_setRemoteHostViewController:, nonatomic, retain) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)_remoteHostViewController;
- (void)_setRemoteHostViewController:(id)arg1;
- (id)currentChildViewController;
- (id)delegate;
- (id)initWithVoiceShortcut:(id)arg1;
- (void)loadView;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)setChildViewController:(id)arg1;
- (void)setCurrentChildViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
