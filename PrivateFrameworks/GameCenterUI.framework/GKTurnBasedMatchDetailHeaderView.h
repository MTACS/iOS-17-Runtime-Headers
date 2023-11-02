
@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView {
    UIButton * _actionButton;
    UIFocusGuide * _actionFocusGuide;
    SEL  _actionSelector;
    id  _actionTarget;
    GKDashboardPlayerPhotoView * _avatarView;
    NSArray * _constraints;
    GKLabel * _infoLabel;
    NSString * _infoText;
    GKLabel * _lastTurnLabel;
    GKTurnBasedMatch * _match;
    UILabel * _playingWithLabel;
    GKLabel * _startedLabel;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UIFocusGuide *actionFocusGuide;
@property (nonatomic) SEL actionSelector;
@property (nonatomic) id actionTarget;
@property (nonatomic, retain) NSString *actionText;
@property (nonatomic, retain) GKDashboardPlayerPhotoView *avatarView;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) GKLabel *infoLabel;
@property (nonatomic, retain) NSString *infoText;
@property (nonatomic, retain) GKLabel *lastTurnLabel;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, retain) UILabel *playingWithLabel;
@property (nonatomic, readonly) NSString *playingWithString;
@property (nonatomic, retain) GKLabel *startedLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)actionButton;
- (id)actionFocusGuide;
- (void)actionPressed:(id)arg1;
- (SEL)actionSelector;
- (id)actionTarget;
- (id)actionText;
- (id)avatarView;
- (id)constraints;
- (void)didUpdateModel;
- (void)establishConstraints;
- (id)infoLabel;
- (id)infoText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lastTurnLabel;
- (id)match;
- (id)playingWithLabel;
- (id)playingWithString;
- (void)setActionButton:(id)arg1;
- (void)setActionFocusGuide:(id)arg1;
- (void)setActionSelector:(SEL)arg1;
- (void)setActionTarget:(id)arg1;
- (void)setActionText:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)setLastTurnLabel:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setPlayingWithLabel:(id)arg1;
- (void)setStartedLabel:(id)arg1;
- (id)startedLabel;

@end
