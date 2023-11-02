
@interface AVTurboModePlaybackControlsPlaceholderView : UIView {
    UIView * _contentView;
    long long  _includedControlType;
    AVObservationController * _observationController;
    NSValue * _overrideLayoutMarginsWhenEmbeddedInline;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _overrideTransformForProminentPlayButton;
    AVPlayerController * _playerController;
    long long  _preferredUnobscuredArea;
    AVButton * _prominentPlayButton;
    UIView * _prominentPlayButtonContainer;
    AVMobileChromeControlsStyleSheet * _styleSheet;
    AVVolumeButtonControl * _volumeButton;
    UIView * _volumeButtonContainer;
    NSString * _volumeButtonMicaPackageStateName;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) long long includedControlType;
@property (nonatomic, readonly) AVObservationController *observationController;
@property (nonatomic, retain) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } overrideTransformForProminentPlayButton;
@property (nonatomic, retain) AVPlayerController *playerController;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic) AVButton *prominentPlayButton;
@property (nonatomic, retain) UIView *prominentPlayButtonContainer;
@property (nonatomic, retain) AVMobileChromeControlsStyleSheet *styleSheet;
@property (nonatomic) AVVolumeButtonControl *volumeButton;
@property (nonatomic, retain) UIView *volumeButtonContainer;
@property (nonatomic, copy) NSString *volumeButtonMicaPackageStateName;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForIncludedViewType:(long long)arg1;
- (id)_makeProminentPlayButtonAndContainer;
- (void)_makeProminentPlayButtonAndContainerIfNeeded;
- (id)_makeVolumeButtonAndContainer;
- (void)_makeVolumeButtonAndContainerIfNeeded;
- (void)_updateFramesAndHitRectInsets;
- (id)contentView;
- (void)dealloc;
- (bool)hasVisibleControls;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)includedControlType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 styleSheet:(id)arg2;
- (void)layoutSubviews;
- (id)observationController;
- (id)overrideLayoutMarginsWhenEmbeddedInline;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })overrideTransformForProminentPlayButton;
- (id)playerController;
- (long long)preferredUnobscuredArea;
- (id)prominentPlayButton;
- (id)prominentPlayButtonContainer;
- (void)setHidden:(bool)arg1;
- (void)setIncludedControlType:(long long)arg1;
- (void)setOverrideLayoutMarginsWhenEmbeddedInline:(id)arg1;
- (void)setOverrideTransformForProminentPlayButton:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPlayerController:(id)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (void)setProminentPlayButton:(id)arg1;
- (void)setProminentPlayButtonContainer:(id)arg1;
- (void)setStyleSheet:(id)arg1;
- (void)setVolumeButton:(id)arg1;
- (void)setVolumeButtonContainer:(id)arg1;
- (void)setVolumeButtonMicaPackageStateName:(id)arg1;
- (id)styleSheet;
- (id)volumeButton;
- (id)volumeButtonContainer;
- (id)volumeButtonMicaPackageStateName;

@end
