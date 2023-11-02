
@interface LPPlayButtonView : LPComponentView <LPComponentMediaPlayable, LPContentInsettable> {
    LPPlayButtonControl * _button;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    bool  _hasBuilt;
    LPInlineMediaPlaybackInformation * _playbackInformation;
    LPAudioPlayButtonStyle * _style;
}

- (void).cxx_destruct;
- (void)buildSubviewsIfNeeded;
- (void)dealloc;
- (id)initWithHost:(id)arg1;
- (id)initWithHost:(id)arg1 playbackInformation:(id)arg2 style:(id)arg3;
- (void)installAudioButton;
- (void)installDisablediTunesButton;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installiTunesButton;
- (bool)isLyricStyle;
- (void)layoutComponentView;
- (id)playable;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)theme;
- (void)updateButton;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForSongOrAlbum;

@end
