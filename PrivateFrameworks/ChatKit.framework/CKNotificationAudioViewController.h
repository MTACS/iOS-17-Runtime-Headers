
@interface CKNotificationAudioViewController : UIViewController <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    NSObject<CKNotificationAudioViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKNotificationAudioViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioMessageToggled;
- (void)buttonTapped:(id)arg1;
- (id)delegate;
- (void)loadMessage:(id)arg1;
- (void)playOrPauseAudioMessage;
- (void)setDelegate:(id)arg1;

@end
