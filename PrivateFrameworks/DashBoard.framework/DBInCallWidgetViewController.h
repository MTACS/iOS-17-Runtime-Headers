
@interface DBInCallWidgetViewController : DBWidgetViewController <BSInvalidatable> {
    DBInCallWidgetAppIconButton * _appIconButton;
    DBInCallWidgetAvatarView * _avatarButton;
    UIFocusContainerGuide * _bottomFocusContainerGuide;
    UILayoutGuide * _bottomRowGuide;
    CADisplayLink * _callTimeDisplayLink;
    UILabel * _callTimeLabel;
    NSArray * _constraints;
    UILabel * _contactNameLabel;
    TUCall * _currentCall;
    DBInCallWidgetButton * _endCallButton;
    bool  _invalidated;
    UILayoutGuide * _labelContainerGuide;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastViewSize;
    UILayoutGuide * _leftButtonGuide;
    UILayoutGuide * _midBottomGuide;
    UILayoutGuide * _midButtonGuide;
    UILayoutGuide * _midTopRowGuide;
    UIFocusContainerGuide * _multiwayLabelFocusContainerGuide;
    DBInCallWidgetMultiwayTitleButton * _multiwayTitleButton;
    DBInCallWidgetButton * _muteButton;
    UILayoutGuide * _rightButtonGuide;
    NSArray * _tallMultiwayOnlyConstraints;
    NSArray * _tallNonMultiwayConstraints;
    UIFocusContainerGuide * _topFocusContainerGuide;
    UILayoutGuide * _topRowGuide;
    unsigned long long  _widgetStyle;
}

@property (nonatomic, retain) DBInCallWidgetAppIconButton *appIconButton;
@property (nonatomic, retain) DBInCallWidgetAvatarView *avatarButton;
@property (nonatomic, retain) UIFocusContainerGuide *bottomFocusContainerGuide;
@property (nonatomic, retain) UILayoutGuide *bottomRowGuide;
@property (nonatomic, retain) CADisplayLink *callTimeDisplayLink;
@property (nonatomic, retain) UILabel *callTimeLabel;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *contactNameLabel;
@property (nonatomic, retain) TUCall *currentCall;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DBInCallWidgetButton *endCallButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invalidated;
@property (nonatomic, retain) UILayoutGuide *labelContainerGuide;
@property (nonatomic) struct CGSize { double x1; double x2; } lastViewSize;
@property (nonatomic, retain) UILayoutGuide *leftButtonGuide;
@property (nonatomic, retain) UILayoutGuide *midBottomGuide;
@property (nonatomic, retain) UILayoutGuide *midButtonGuide;
@property (nonatomic, retain) UILayoutGuide *midTopRowGuide;
@property (nonatomic, retain) UIFocusContainerGuide *multiwayLabelFocusContainerGuide;
@property (nonatomic, retain) DBInCallWidgetMultiwayTitleButton *multiwayTitleButton;
@property (nonatomic, retain) DBInCallWidgetButton *muteButton;
@property (nonatomic, retain) UILayoutGuide *rightButtonGuide;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tallMultiwayOnlyConstraints;
@property (nonatomic, retain) NSArray *tallNonMultiwayConstraints;
@property (nonatomic, retain) UIFocusContainerGuide *topFocusContainerGuide;
@property (nonatomic, retain) UILayoutGuide *topRowGuide;
@property (nonatomic) unsigned long long widgetStyle;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (id)_displayNameForCall:(id)arg1;
- (void)_muteStateChanged:(id)arg1;
- (bool)_shouldUseMultilineTitleButton;
- (void)_updateUIForCallState;
- (id)appIconButton;
- (id)avatarButton;
- (id)bottomFocusContainerGuide;
- (id)bottomRowGuide;
- (void)buttonTapped:(id)arg1;
- (id)callTimeDisplayLink;
- (id)callTimeLabel;
- (id)constraints;
- (id)contactNameLabel;
- (id)currentCall;
- (void)dealloc;
- (id)endCallButton;
- (bool)entireWidgetFocusable;
- (void)handleCallStatusChanged;
- (void)invalidate;
- (bool)invalidated;
- (id)labelContainerGuide;
- (struct CGSize { double x1; double x2; })lastViewSize;
- (id)leftButtonGuide;
- (id)linearFocusItems;
- (id)midBottomGuide;
- (id)midButtonGuide;
- (id)midTopRowGuide;
- (id)multiwayLabelFocusContainerGuide;
- (id)multiwayTitleButton;
- (id)muteButton;
- (id)rightButtonGuide;
- (void)setAppIconButton:(id)arg1;
- (void)setAvatarButton:(id)arg1;
- (void)setBottomFocusContainerGuide:(id)arg1;
- (void)setBottomRowGuide:(id)arg1;
- (void)setCallTimeDisplayLink:(id)arg1;
- (void)setCallTimeLabel:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContactNameLabel:(id)arg1;
- (void)setCurrentCall:(id)arg1;
- (void)setEndCallButton:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setLabelContainerGuide:(id)arg1;
- (void)setLastViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLeftButtonGuide:(id)arg1;
- (void)setMidBottomGuide:(id)arg1;
- (void)setMidButtonGuide:(id)arg1;
- (void)setMidTopRowGuide:(id)arg1;
- (void)setMultiwayLabelFocusContainerGuide:(id)arg1;
- (void)setMultiwayTitleButton:(id)arg1;
- (void)setMuteButton:(id)arg1;
- (void)setRightButtonGuide:(id)arg1;
- (void)setTallMultiwayOnlyConstraints:(id)arg1;
- (void)setTallNonMultiwayConstraints:(id)arg1;
- (void)setTopFocusContainerGuide:(id)arg1;
- (void)setTopRowGuide:(id)arg1;
- (void)setWidgetStyle:(unsigned long long)arg1;
- (void)setupConstraints;
- (id)tallMultiwayOnlyConstraints;
- (id)tallNonMultiwayConstraints;
- (id)topFocusContainerGuide;
- (id)topRowGuide;
- (void)updateLabelsForCurrentStyle;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (unsigned long long)widgetStyle;
- (void)widgetViewTapped;

@end
