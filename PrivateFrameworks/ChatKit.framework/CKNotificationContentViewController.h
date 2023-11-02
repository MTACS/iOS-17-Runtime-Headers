
@interface CKNotificationContentViewController : UIViewController <UNNotificationContentExtension> {
    CKNotificationAudioViewController * _audioController;
    CKNotificationChatController * _chatController;
    IMTimingCollection * _launchTokeyboardBringUpTC;
    UNNotification * _notification;
}

@property (nonatomic, retain) CKNotificationAudioViewController *audioController;
@property (nonatomic, retain) CKNotificationChatController *chatController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IMTimingCollection *launchTokeyboardBringUpTC;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } mediaPlayPauseButtonFrame;
@property (nonatomic, readonly, copy) UIColor *mediaPlayPauseButtonTintColor;
@property (nonatomic, readonly) unsigned long long mediaPlayPauseButtonType;
@property (nonatomic, retain) UNNotification *notification;
@property (readonly) Class superclass;

+ (void)connectIfNeeded;
+ (void)initialize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (id)audioController;
- (bool)canBecomeFirstResponder;
- (id)chatController;
- (void)chatController:(id)arg1 didReportSpamForConversation:(id)arg2;
- (void)chatController:(id)arg1 didSendCompositionInConversation:(id)arg2;
- (void)chatController:(id)arg1 willSendComposition:(id)arg2 inConversation:(id)arg3;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didReceiveNotification:(id)arg1;
- (void)grabFocus;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)launchTokeyboardBringUpTC;
- (void)mediaPause;
- (void)mediaPlay;
- (id)notification;
- (void)notificationChatControllerRequestDismissNotificationContentExtension:(id)arg1;
- (void)notificationChatControllerSizeUpdated:(id)arg1;
- (void)setAudioController:(id)arg1;
- (void)setChatController:(id)arg1;
- (void)setLaunchTokeyboardBringUpTC:(id)arg1;
- (void)setNotification:(id)arg1;
- (void)setupAudioAccessoryViewForNotification:(id)arg1;
- (void)setupChatControllerForConversation:(id)arg1;
- (void)transcriptBackgroundTapped:(id)arg1;
- (void)updateContentExtensionSize;
- (void)updateNotificationTitleFromConversation:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
