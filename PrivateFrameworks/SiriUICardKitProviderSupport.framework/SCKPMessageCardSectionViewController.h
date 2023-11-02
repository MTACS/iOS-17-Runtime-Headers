
@interface SCKPMessageCardSectionViewController : UIViewController <AVAudioPlayerDelegate, CRKCardSectionViewControlling, SCKPMessageCardSectionViewDelegate> {
    SFMessageCardSection * _cardSection;
    INInteraction * _interaction;
    AVAudioPlayer * _player;
    <CRKCardSectionViewControllingDelegate> * cardSectionViewControllingDelegate;
}

@property (readonly) SFMessageCardSection *cardSection;
@property (nonatomic) <CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) INInteraction *interaction;
@property (readonly) AVAudioPlayer *player;
@property (readonly) Class superclass;
@property (readonly) SCKPMessageCardSectionView *view;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_asrUpdated:(id)arg1;
- (bool)_canShowWhileLocked;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)beginAudioPlayback;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)cardSection;
- (id)cardSectionViewControllingDelegate;
- (void)createAudioPlayer;
- (void)desiresInteractivity:(id /* block */)arg1;
- (id)initWithMessageCardSection:(id)arg1 interaction:(id)arg2;
- (id)interaction;
- (void)loadView;
- (void)messageCardSectionAttachmentTapped:(id)arg1;
- (void)messageCardSectionContentUpdated:(id)arg1;
- (void)messageCardSectionPlayButtonTapped:(id)arg1;
- (void)messageCardSectionSendButtonTapped:(id)arg1;
- (void)messageCardSectionViewBeganEditing:(id)arg1;
- (void)messageCardSectionViewFinishedEditing:(id)arg1;
- (void)messageContentUpdatedAndInitiatedByNewRequest:(bool)arg1;
- (void)pauseAudioPlayback;
- (id)player;
- (void)setCardSectionViewControllingDelegate:(id)arg1;
- (void)setupPlaybackSessionOptions;

@end
