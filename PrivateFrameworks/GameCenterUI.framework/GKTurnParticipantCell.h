
@interface GKTurnParticipantCell : GKBasePlayerCell {
    UILabel * _additionalPlayerCountLabel;
    GKLabel * _bottomLabel;
    NSArray * _constraints;
    GKFocusableButton * _detailButton;
    NSLayoutConstraint * _detailButtonConstraint;
    SEL  _detailPressedAction;
    UIView * _divider;
    NSLayoutConstraint * _iconLeadingConstraint;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    bool  _isDetail;
    GKTurnBasedMatch * _match;
    _TtC12GameCenterUI22OverlappingPlayersView * _overlappingPlayersView;
    UIView * _overlappingPlayersViewContainer;
    NSLayoutConstraint * _overlappingPlayersViewTrailingConstraint;
    NSLayoutConstraint * _overlappingPlayersViewWidthConstraint;
    GKTurnBasedParticipant * _participant;
    NSDictionary * _playerAvatarMapping;
    NSArray * _previousParticipants;
    NSLayoutConstraint * _statusImageTrailingConstraint;
    UIImageView * _statusImageView;
    NSLayoutConstraint * _textContainerTrailingConstraint;
    UIStackView * _textStackView;
    NSLayoutConstraint * _textStackViewToIconViewLeadingConstraint;
    NSLayoutConstraint * _textStackViewToSuperViewLeadingConstraint;
}

@property (nonatomic, retain) UILabel *additionalPlayerCountLabel;
@property (nonatomic, retain) GKLabel *bottomLabel;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) GKFocusableButton *detailButton;
@property (nonatomic, retain) NSLayoutConstraint *detailButtonConstraint;
@property (nonatomic) SEL detailPressedAction;
@property (nonatomic, retain) UIView *divider;
@property (nonatomic, retain) NSLayoutConstraint *iconLeadingConstraint;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) bool isDetail;
@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, retain) _TtC12GameCenterUI22OverlappingPlayersView *overlappingPlayersView;
@property (nonatomic, retain) UIView *overlappingPlayersViewContainer;
@property (nonatomic, retain) NSLayoutConstraint *overlappingPlayersViewTrailingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *overlappingPlayersViewWidthConstraint;
@property (nonatomic, retain) GKTurnBasedParticipant *participant;
@property (nonatomic, retain) NSDictionary *playerAvatarMapping;
@property (nonatomic, retain) NSArray *previousParticipants;
@property (nonatomic, retain) NSLayoutConstraint *statusImageTrailingConstraint;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) NSLayoutConstraint *textContainerTrailingConstraint;
@property (nonatomic, retain) UIStackView *textStackView;
@property (nonatomic, retain) NSLayoutConstraint *textStackViewToIconViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *textStackViewToSuperViewLeadingConstraint;

+ (double)defaultRowHeight;
+ (id)itemHeightList;
+ (void)registerCellClassesForCollectionView:(id)arg1;

- (void).cxx_destruct;
- (id)additionalPlayerCountLabel;
- (id)bottomLabel;
- (bool)canBecomeFocused;
- (void)configureForDetail;
- (void)configureForMatch;
- (void)configureOverlappingPlayersView;
- (id)constraints;
- (id)detailButton;
- (id)detailButtonConstraint;
- (void)detailPressed:(id)arg1;
- (SEL)detailPressedAction;
- (void)didUpdateModel;
- (id)divider;
- (void)establishConstraints;
- (double)getOverlappingPlayerAvatarIconSize;
- (id)getPlayerIDForAllNonAutomatchedTurnBasedParticipants;
- (id)iconLeadingConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (bool)isDetail;
- (id)match;
- (bool)matchWantsLocalPlayerAttention;
- (bool)needsRefreshOverlappingPlayersView;
- (id)overlappingPlayersView;
- (id)overlappingPlayersViewContainer;
- (id)overlappingPlayersViewTrailingConstraint;
- (id)overlappingPlayersViewWidthConstraint;
- (id)participant;
- (id)playerAvatarMapping;
- (id)previousParticipants;
- (void)setAdditionalPlayerCountLabel:(id)arg1;
- (void)setBottomLabel:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setDetailButtonConstraint:(id)arg1;
- (void)setDetailPressedAction:(SEL)arg1;
- (void)setDivider:(id)arg1;
- (void)setIconLeadingConstraint:(id)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIsDetail:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setOverlappingPlayersView:(id)arg1;
- (void)setOverlappingPlayersViewContainer:(id)arg1;
- (void)setOverlappingPlayersViewTrailingConstraint:(id)arg1;
- (void)setOverlappingPlayersViewWidthConstraint:(id)arg1;
- (void)setParticipant:(id)arg1;
- (void)setPlayerAvatarMapping:(id)arg1;
- (void)setPreviousParticipants:(id)arg1;
- (void)setStatusImageTrailingConstraint:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerTrailingConstraint:(id)arg1;
- (void)setTextStackView:(id)arg1;
- (void)setTextStackViewToIconViewLeadingConstraint:(id)arg1;
- (void)setTextStackViewToSuperViewLeadingConstraint:(id)arg1;
- (id)statusImageTrailingConstraint;
- (id)statusImageView;
- (id)textContainerTrailingConstraint;
- (id)textStackView;
- (id)textStackViewToIconViewLeadingConstraint;
- (id)textStackViewToSuperViewLeadingConstraint;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateMarginConstraints;
- (void)updateOverlappingPlayerViewsAvatar;
- (void)updateUIBasedOnTraitCollection;

@end
