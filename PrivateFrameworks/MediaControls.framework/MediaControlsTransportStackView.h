
@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate> {
    <MediaControlsActionsDelegate> * _actionsDelegate;
    bool  _empty;
    MediaControlsTransportButton * _languageOptionsButton;
    MediaControlsTransportButton * _leftButton;
    MediaControlsTransportButton * _middleButton;
    MPCPlayerResponse * _response;
    MediaControlsTransportButton * _rightButton;
    bool  _shouldShowTVRemoteButton;
    long long  _style;
    MediaControlsTransportButton * _tvRemoteButton;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (nonatomic) <MediaControlsActionsDelegate> *actionsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsTransportButton *languageOptionsButton;
@property (nonatomic, retain) MediaControlsTransportButton *leftButton;
@property (nonatomic, retain) MediaControlsTransportButton *middleButton;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic, retain) MediaControlsTransportButton *rightButton;
@property (nonatomic) bool shouldShowTVRemoteButton;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) MediaControlsTransportButton *tvRemoteButton;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (id)_createTransportButton;
- (void)_resetTransportButton:(id)arg1;
- (void)_updateButtonConfiguration;
- (void)_updateButtonLayout;
- (void)_updateButtonVisualStyling:(id)arg1;
- (void)_updateVisualStylingForButtons;
- (id)actionsDelegate;
- (void)buttonHoldBegan:(id)arg1;
- (void)buttonHoldReleased:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEmpty;
- (id)languageOptionsButton;
- (void)layoutSubviews;
- (id)leftButton;
- (id)middleButton;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (id)response;
- (id)rightButton;
- (void)setActionsDelegate:(id)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setLanguageOptionsButton:(id)arg1;
- (void)setLeftButton:(id)arg1;
- (void)setMiddleButton:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRightButton:(id)arg1;
- (void)setShouldShowTVRemoteButton:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTvRemoteButton:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (bool)shouldShowTVRemoteButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)touchUpInsideCaptionsButton:(id)arg1;
- (void)touchUpInsideHangdogButton:(id)arg1;
- (void)touchUpInsideLeftButton:(id)arg1;
- (void)touchUpInsideMiddleButton:(id)arg1;
- (void)touchUpInsideRightButton:(id)arg1;
- (id)tvRemoteButton;
- (void)updateOnRouteChange;
- (id)visualStylingProvider;

@end
