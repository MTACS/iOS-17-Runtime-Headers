
@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController <NUIContainerViewDelegate> {
    TLKLabel * _captionLabel;
    MPMediaEntity * _mediaEntity;
    long long  _mediaEntityType;
    unsigned long long  _persistentID;
    SearchUIButton * _playButton;
    SFPunchout * _punchout;
    NSString * _spotlightIdentifier;
    NSArray * _storeIdentifiers;
    NSTimer * _timer;
    NSString * _universalLibraryID;
}

@property (nonatomic, retain) TLKLabel *captionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MPMediaEntity *mediaEntity;
@property (nonatomic) long long mediaEntityType;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic, retain) SearchUIButton *playButton;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic, retain) NSString *spotlightIdentifier;
@property (nonatomic, retain) NSArray *storeIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, retain) NSString *universalLibraryID;

+ (id)_mediaEntityForPersistentID:(id)arg1 forType:(int)arg2;
+ (id)_mediaEntityForUniversalLibraryID:(id)arg1 forType:(int)arg2;
+ (id)font;
+ (id)mediaEntityForAction:(id)arg1;
+ (bool)mediaItem:(id)arg1 matchesPersistentID:(unsigned long long)arg2 forType:(long long)arg3;
+ (bool)mediaItem:(id)arg1 matchesUniversalLibraryID:(id)arg2 forType:(long long)arg3;
+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (void)buttonPressed;
- (id)captionLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (void)createTimerIfNeeded;
- (void)dealloc;
- (void)hide;
- (void)invalidateTimerIfNeeded;
- (bool)matchesNowPlayingAudioItem;
- (id)mediaEntity;
- (long long)mediaEntityType;
- (void)nowPlayingItemDidChange;
- (unsigned long long)persistentID;
- (void)play;
- (id)playButton;
- (void)playbackStateDidChange;
- (id)punchout;
- (void)sendEngagementDidPunchout:(bool)arg1;
- (void)setCaptionLabel:(id)arg1;
- (void)setMediaEntity:(id)arg1;
- (void)setMediaEntityType:(long long)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setSpotlightIdentifier:(id)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUniversalLibraryID:(id)arg1;
- (id)setupView;
- (bool)shouldTopAlignForAccessibilityContentSizes;
- (id)spotlightIdentifier;
- (id)storeIdentifiers;
- (id)timer;
- (void)togglePlaybackState;
- (unsigned long long)type;
- (id)universalLibraryID;
- (void)updateButtonProgressAnimated:(bool)arg1;
- (void)updatePlayState;
- (bool)updateTimerForPauseState;
- (void)updateWithRowModel:(id)arg1;

@end
