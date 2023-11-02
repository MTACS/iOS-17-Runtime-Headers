
@interface GKDashboardTurnDetailViewController : GKDetailViewController {
    UIView * _contentVerticalCenteringView;
    UILabel * _createdLabel;
    UIButton * _firstButton;
    GKTurnBasedMatch * _match;
    UILabel * _playingWithLabel;
    UIButton * _secondButton;
    NSLayoutConstraint * _secondButtonCenteringConstraint;
    bool  _shouldShowPlay;
    bool  _shouldShowQuit;
    UIView * _turnDetailContentView;
}

@property (nonatomic) UIView *contentVerticalCenteringView;
@property (nonatomic) UILabel *createdLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic) UILabel *playingWithLabel;
@property (nonatomic) UIButton *secondButton;
@property (nonatomic) NSLayoutConstraint *secondButtonCenteringConstraint;
@property (nonatomic) bool shouldShowPlay;
@property (nonatomic) bool shouldShowQuit;
@property (nonatomic) UIView *turnDetailContentView;

- (void).cxx_destruct;
- (void)acceptInvitation:(id)arg1;
- (void)chooseMatch:(id)arg1;
- (id)contentVerticalCenteringView;
- (id)createdLabel;
- (void)dealloc;
- (void)declineInvitation:(id)arg1;
- (void)disableButtons;
- (id)firstButton;
- (void)handleTurnBasedEvent:(id)arg1;
- (id)initWithTurnBasedMatch:(id)arg1;
- (id)match;
- (id)playingWithLabel;
- (id)preferredFocusEnvironments;
- (void)quitMatch:(id)arg1;
- (void)refreshPresenter;
- (void)removeMatch:(id)arg1;
- (id)secondButton;
- (id)secondButtonCenteringConstraint;
- (void)setContentVerticalCenteringView:(id)arg1;
- (void)setCreatedLabel:(id)arg1;
- (void)setFirstButton:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setPlayingWithLabel:(id)arg1;
- (void)setSecondButton:(id)arg1;
- (void)setSecondButtonCenteringConstraint:(id)arg1;
- (void)setShouldShowPlay:(bool)arg1;
- (void)setShouldShowQuit:(bool)arg1;
- (void)setTurnDetailContentView:(id)arg1;
- (bool)shouldShowPlay;
- (bool)shouldShowQuit;
- (id)turnDetailContentView;
- (void)turnOK:(id)arg1;
- (void)viewDidLoad;

@end
