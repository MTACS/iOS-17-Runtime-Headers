
@interface CPUITableCellConfiguration : NSObject <CPUITableCellConfigurationProtocol> {
    CPUITableCellAccessory * _accessory;
    NSString * _detailText;
    bool  _enabled;
    UIImage * _image;
    double  _playbackProgress;
    long long  _playbackState;
    bool  _playingIndicatorLeadingSide;
    bool  _shouldShowPlaybackProgress;
    bool  _showActivityIndicator;
    bool  _showExplicit;
    NSString * _text;
}

@property (nonatomic, retain) CPUITableCellAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double playbackProgress;
@property (nonatomic) long long playbackState;
@property (nonatomic) bool playingIndicatorLeadingSide;
@property (nonatomic) bool shouldShowPlaybackProgress;
@property (nonatomic) bool showActivityIndicator;
@property (nonatomic) bool showExplicit;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(bool)arg9;
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(bool)arg9 playingIndicatorLeadingSide:(bool)arg10;
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 currentlyPlaying:(bool)arg9 playingIndicatorLeadingSide:(bool)arg10 isEnabled:(bool)arg11;
+ (id)configurationWithText:(id)arg1 detailText:(id)arg2 image:(id)arg3 showExplicit:(bool)arg4 accessory:(id)arg5 showActivityIndicator:(bool)arg6 showPlaybackProgress:(bool)arg7 playbackProgress:(double)arg8 playbackState:(long long)arg9 playingIndicatorLeadingSide:(bool)arg10 isEnabled:(bool)arg11;

- (void).cxx_destruct;
- (id)accessory;
- (bool)currentlyPlaying;
- (id)detailText;
- (bool)enabled;
- (id)image;
- (double)playbackProgress;
- (long long)playbackState;
- (bool)playingIndicatorLeadingSide;
- (void)setAccessory:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setPlaybackProgress:(double)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlayingIndicatorLeadingSide:(bool)arg1;
- (void)setShouldShowPlaybackProgress:(bool)arg1;
- (void)setShowActivityIndicator:(bool)arg1;
- (void)setShowExplicit:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)shouldShowPlaybackProgress;
- (bool)showActivityIndicator;
- (bool)showExplicit;
- (id)text;

@end
