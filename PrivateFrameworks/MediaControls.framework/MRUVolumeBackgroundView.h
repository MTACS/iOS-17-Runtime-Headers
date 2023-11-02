
@interface MRUVolumeBackgroundView : UIView {
    MediaControlsExpandableButton * _conversationAwarenessButton;
    MRUVolumeNowPlayingView * _nowPlayingView;
    MRUOutputDeviceAssetView * _primaryAssetView;
    MediaControlsExpandableButton * _primaryListeningModeButton;
    MRUOutputDeviceAssetView * _secondaryAssetView;
    MediaControlsExpandableButton * _secondaryListeningModeButton;
    bool  _showConversationAwarenessButton;
    bool  _showNowPlayingView;
    bool  _showPrimaryListeningModeButton;
    bool  _showSecondaryAssetView;
    bool  _showSecondaryListeningModeButton;
    bool  _showSpatialAudioModeButton;
    MediaControlsExpandableButton * _spatialAudioModeButton;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, retain) MediaControlsExpandableButton *conversationAwarenessButton;
@property (nonatomic, readonly) bool hasExpandedButtons;
@property (nonatomic, retain) MRUVolumeNowPlayingView *nowPlayingView;
@property (nonatomic, retain) MRUOutputDeviceAssetView *primaryAssetView;
@property (nonatomic, retain) MediaControlsExpandableButton *primaryListeningModeButton;
@property (nonatomic, retain) MRUOutputDeviceAssetView *secondaryAssetView;
@property (nonatomic, retain) MediaControlsExpandableButton *secondaryListeningModeButton;
@property (nonatomic) bool showConversationAwarenessButton;
@property (nonatomic) bool showNowPlayingView;
@property (nonatomic) bool showPrimaryListeningModeButton;
@property (nonatomic) bool showSecondaryAssetView;
@property (nonatomic) bool showSecondaryListeningModeButton;
@property (nonatomic) bool showSpatialAudioModeButton;
@property (nonatomic, retain) MediaControlsExpandableButton *spatialAudioModeButton;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;

- (void).cxx_destruct;
- (void)collapseExpandableButtons;
- (id)conversationAwarenessButton;
- (void)expandButton:(id)arg1;
- (bool)hasExpandedButtons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsHorizontal;
- (void)layoutSubviewsVertical;
- (id)nowPlayingView;
- (id)primaryAssetView;
- (id)primaryListeningModeButton;
- (id)secondaryAssetView;
- (id)secondaryListeningModeButton;
- (void)setConversationAwarenessButton:(id)arg1;
- (void)setNowPlayingView:(id)arg1;
- (void)setPrimaryAssetView:(id)arg1;
- (void)setPrimaryListeningModeButton:(id)arg1;
- (void)setSecondaryAssetView:(id)arg1;
- (void)setSecondaryListeningModeButton:(id)arg1;
- (void)setShowConversationAwarenessButton:(bool)arg1;
- (void)setShowNowPlayingView:(bool)arg1;
- (void)setShowPrimaryListeningModeButton:(bool)arg1;
- (void)setShowSecondaryAssetView:(bool)arg1;
- (void)setShowSecondaryListeningModeButton:(bool)arg1;
- (void)setShowSpatialAudioModeButton:(bool)arg1;
- (void)setSpatialAudioModeButton:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (bool)showConversationAwarenessButton;
- (bool)showNowPlayingView;
- (bool)showPrimaryListeningModeButton;
- (bool)showSecondaryAssetView;
- (bool)showSecondaryListeningModeButton;
- (bool)showSpatialAudioModeButton;
- (id)spatialAudioModeButton;
- (id)stylingProvider;
- (double)totalHorizontalSliderWidth;
- (void)updateVisibility;

@end
