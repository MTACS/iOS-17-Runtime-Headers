
@interface AVMobileChromelessControlsStyleSheet : AVMobileControlsStyleSheet {
    UIFont * _contentTabLabelFont;
    UIFont * _contentTagFont;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _embeddedInlineInsets;
    UIFont * _infoAffordanceButtonFont;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeFullscreenInsets;
    UIFont * _playPauseButtonFont;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitFullscreenInsets;
    UIFont * _prominentContentTagFont;
    UIFont * _secondaryPlaybackControlsFont;
    double  _standardPaddingFullScreen;
    double  _standardPaddingInline;
    UIFont * _subtitleFont;
    UIFont * _timeLabelFont;
    UIFont * _titleFont;
}

@property (nonatomic, readonly) UIFont *contentTabLabelFont;
@property (nonatomic, readonly) UIFont *contentTagFont;
@property (nonatomic, readonly) UIFont *infoAffordanceButtonFont;
@property (nonatomic, readonly) UIFont *playPauseButtonFont;
@property (nonatomic, readonly) UIFont *prominentContentTagFont;
@property (nonatomic, readonly) UIFont *secondaryPlaybackControlsFont;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) UIFont *timeLabelFont;
@property (nonatomic, readonly) UIFont *titleFont;

- (void).cxx_destruct;
- (id)contentTabLabelFont;
- (id)contentTagFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })embeddedInlineInsets;
- (id)infoAffordanceButtonFont;
- (id)initWithTraitCollection:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeFullscreenInsets;
- (id)playPauseButtonFont;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitFullscreenInsets;
- (id)prominentContentTagFont;
- (id)secondaryPlaybackControlsFont;
- (double)standardPaddingFullScreen;
- (double)standardPaddingInline;
- (id)subtitleFont;
- (id)timeLabelFont;
- (id)titleFont;

@end
