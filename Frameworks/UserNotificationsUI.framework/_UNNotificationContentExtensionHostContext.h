
@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface> {
    <_UNNotificationContentExtensionHostContextDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _delegateQueueSuspended;
    UIColor * _playPauseMediaButtonColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _playPauseMediaButtonFrame;
    unsigned long long  _playPauseMediaButtonType;
    bool  _wantsToBecomeFirstResponder;
    bool  _wantsToReceiveActionResponses;
}

@property (nonatomic) <_UNNotificationContentExtensionHostContextDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (getter=isDelegateQueueSuspended, nonatomic) bool delegateQueueSuspended;
@property (nonatomic, retain) UIColor *playPauseMediaButtonColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } playPauseMediaButtonFrame;
@property (nonatomic) unsigned long long playPauseMediaButtonType;
@property (nonatomic) bool wantsToBecomeFirstResponder;
@property (nonatomic) bool wantsToReceiveActionResponses;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
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
- (void)_extensionWantsToBecomeFirstResponder:(bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(bool)arg1;
- (void)_hostDidReceiveNotification:(id)arg1;
- (void)_hostDidReceiveNotificationResponse:(id)arg1;
- (void)_hostDidReceiveNotificationResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (void)_resumeDelegateQueueIfNecessary;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)didReceiveNotification:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (bool)isDelegateQueueSuspended;
- (void)mediaPause;
- (void)mediaPlay;
- (id)playPauseMediaButtonColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playPauseMediaButtonFrame;
- (unsigned long long)playPauseMediaButtonType;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDelegateQueueSuspended:(bool)arg1;
- (void)setPlayPauseMediaButtonColor:(id)arg1;
- (void)setPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)setWantsToBecomeFirstResponder:(bool)arg1;
- (void)setWantsToReceiveActionResponses:(bool)arg1;
- (void)updateMediaPlayPauseButton;
- (bool)wantsToBecomeFirstResponder;
- (bool)wantsToReceiveActionResponses;

@end
