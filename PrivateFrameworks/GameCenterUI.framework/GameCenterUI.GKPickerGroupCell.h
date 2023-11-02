
@interface GameCenterUI.GKPickerGroupCell : GameCenterUI.GKPickerGroupCollectionViewCell {
    void container;
    void groupCellDelegate;
    void iconContainer;
    void longPressRecognizer;
    void messageIcon;
    void nearbyIcon;
    void nearbyIconContainer;
    void nearbyIconVisualEffectView;
    void playerGroupView;
    void players;
    void ringView;
    void subtitleLabel;
    void titleLabel;
}

@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic) UIView *container;
@property (nonatomic) <_TtP12GameCenterUI22GKPickerGroupCellProxy_> *groupCellDelegate;
@property (nonatomic) bool highlighted;
@property (nonatomic) UIView *iconContainer;
@property (nonatomic) UIImageView *messageIcon;
@property (nonatomic) UIImageView *nearbyIcon;
@property (nonatomic) UIView *nearbyIconContainer;
@property (nonatomic) UIVisualEffectView *nearbyIconVisualEffectView;
@property (nonatomic) UIView *ringView;
@property (nonatomic) bool selected;
@property (nonatomic) UILabel *subtitleLabel;
@property (nonatomic) UILabel *titleLabel;

+ (id)reuseIdentifier;
+ (id)reuseIdentifierAX;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (void)awakeFromNib;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 subtitle:(id)arg3 messagesGroupIdentifier:(id)arg4 source:(long long)arg5 playerSelectionProxy:(id)arg6;
- (id)container;
- (void)dealloc;
- (id)groupCellDelegate;
- (void)handleLongPressWithSender:(id)arg1;
- (id)iconContainer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (id)messageIcon;
- (id)nearbyIcon;
- (id)nearbyIconContainer;
- (id)nearbyIconVisualEffectView;
- (void)prepareForReuse;
- (id)ringView;
- (void)setContainer:(id)arg1;
- (void)setGroupCellDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconContainer:(id)arg1;
- (void)setMessageIcon:(id)arg1;
- (void)setNearbyIcon:(id)arg1;
- (void)setNearbyIconContainer:(id)arg1;
- (void)setNearbyIconVisualEffectView:(id)arg1;
- (void)setRingView:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
