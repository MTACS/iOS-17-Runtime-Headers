
@interface GKLeaderboardMetadataView : UIView {
    UIView * _avatarContainer1;
    UIView * _avatarContainer2;
    UIView * _avatarContainer3;
    UIStackView * _body;
    UIStackView * _container;
    NSLayoutConstraint * _containerRightMargin;
    UILabel * _footnote;
    UIStackView * _header;
    NSLayoutConstraint * _headerHeight;
    UILabel * _rank;
    UILabel * _title;
    UIVisualEffectView * _vibrancyView;
}

@property (nonatomic, retain) UIView *avatarContainer1;
@property (nonatomic, retain) UIView *avatarContainer2;
@property (nonatomic, retain) UIView *avatarContainer3;
@property (nonatomic, retain) UIStackView *body;
@property (nonatomic, retain) UIStackView *container;
@property (nonatomic, retain) NSLayoutConstraint *containerRightMargin;
@property (nonatomic, retain) UILabel *footnote;
@property (nonatomic, retain) UIStackView *header;
@property (nonatomic, retain) NSLayoutConstraint *headerHeight;
@property (nonatomic, retain) UILabel *rank;
@property (nonatomic, retain) UILabel *title;
@property (nonatomic, retain) UIVisualEffectView *vibrancyView;

- (void).cxx_destruct;
- (id)avatarContainer1;
- (id)avatarContainer2;
- (id)avatarContainer3;
- (void)awakeFromNib;
- (id)body;
- (void)configureFootnote:(id)arg1 altFootnote:(id)arg2;
- (void)configureVibrancy:(bool)arg1;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4;
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 altFootnote:(id)arg4 vibrant:(bool)arg5;
- (void)configureWithRank:(id)arg1 title:(id)arg2 footnote:(id)arg3 vibrant:(bool)arg4;
- (id)container;
- (id)containerRightMargin;
- (id)footnote;
- (id)header;
- (id)headerHeight;
- (id)rank;
- (void)setAvatarContainer1:(id)arg1;
- (void)setAvatarContainer2:(id)arg1;
- (void)setAvatarContainer3:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerRightMargin:(id)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderHeight:(id)arg1;
- (void)setRank:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrancyView:(id)arg1;
- (void)stackVertically:(bool)arg1;
- (id)title;
- (void)updateAvatarContainer:(id)arg1 withPlayer:(id)arg2;
- (id)vibrancyView;

@end
