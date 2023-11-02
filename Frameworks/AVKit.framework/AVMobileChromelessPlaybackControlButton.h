
@interface AVMobileChromelessPlaybackControlButton : AVButton {
    UIViewPropertyAnimator * _highlightAnimator;
    UIView * _highlightView;
    unsigned long long  _playbackControlButtonType;
    AVMobileChromelessControlsStyleSheet * _styleSheet;
}

@property (nonatomic, retain) AVMobileChromelessControlsStyleSheet *styleSheet;

+ (id)backwardSecondaryButtonWithStyleSheet:(id)arg1;
+ (id)buttonWithAccessibilityIdentifier:(id)arg1 withStyleSheet:(id)arg2 withPlaybackControlButtonType:(unsigned long long)arg3;
+ (id)forwardSecondaryButtonWithStyleSheet:(id)arg1;
+ (id)playPauseButtonWithStyleSheet:(id)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlighted:(bool)arg1;
- (void)setStyleSheet:(id)arg1;
- (id)styleSheet;

@end
