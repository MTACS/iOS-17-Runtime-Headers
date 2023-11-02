
@interface _UNNotificationContentExtensionVendorContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface> {
    bool  _didCheckActionResponseDelegate;
    NSArray * _notificationActions;
    <_UNNotificationContentExtensionVendorContainer> * _notificationExtensionContainer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _queueInactive;
}

@property (nonatomic) bool didCheckActionResponseDelegate;
@property (nonatomic, copy) NSArray *notificationActions;
@property (nonatomic) <_UNNotificationContentExtensionVendorContainer> *notificationExtensionContainer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isQueueInactive, nonatomic) bool queueInactive;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_activateQueueIfNecessary;
- (void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateNotificationActions:(id)arg1;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionDidUpdateTitle:(id)arg1;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionRequestsDismiss;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionWantsMessagesFromHostDelivered;
- (void)_extensionWantsToBecomeFirstResponder:(bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(bool)arg1;
- (void)_extensionWantsToUpdateMediaPlayPauseButton;
- (void)_hostDidReceiveNotification:(id)arg1;
- (void)_hostDidReceiveNotificationResponse:(id)arg1;
- (void)_hostDidReceiveNotificationResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (id)_notificationExtension;
- (void)_updateMediaPlayPauseButton;
- (void)dealloc;
- (bool)didCheckActionResponseDelegate;
- (void)dismissNotificationContentExtension;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (bool)isQueueInactive;
- (void)mediaPlayingPaused;
- (void)mediaPlayingStarted;
- (id)notificationActions;
- (id)notificationExtensionContainer;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performNotificationDefaultAction;
- (id)queue;
- (void)requestDismiss;
- (void)setDidCheckActionResponseDelegate:(bool)arg1;
- (void)setNotificationActions:(id)arg1;
- (void)setNotificationExtensionContainer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueInactive:(bool)arg1;

@end
