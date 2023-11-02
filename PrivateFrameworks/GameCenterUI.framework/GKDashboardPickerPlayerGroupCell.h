
@interface GKDashboardPickerPlayerGroupCell : UICollectionViewCell {
    UIView * _bottomLine;
    bool  _canExpand;
    UIImageView * _checkmark;
    UIView * _container;
    <GKDashboardPickerPlayerGroupCellDelegate> * _groupCellDelegate;
    UIView * _iconContainer;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UIImageView * _messageIcon;
    NSString * _originalSubtitle;
    _TtC12GameCenterUI17GKPlayerGroupView * _playerGroupView;
    UIView * _ringView;
    NSString * _searchText;
    UILabel * _subtitle;
    UILabel * _title;
    bool  _usesClearBackground;
}

@property (nonatomic) UIView *bottomLine;
@property (nonatomic) bool canExpand;
@property (nonatomic) UIImageView *checkmark;
@property (nonatomic) UIView *container;
@property (nonatomic) <GKDashboardPickerPlayerGroupCellDelegate> *groupCellDelegate;
@property (nonatomic) UIView *iconContainer;
@property (nonatomic) bool lineVisible;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic) UIImageView *messageIcon;
@property (nonatomic, retain) NSString *originalSubtitle;
@property (nonatomic, retain) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView;
@property (nonatomic) UIView *ringView;
@property (nonatomic, retain) NSString *searchText;
@property (nonatomic) UILabel *subtitle;
@property (nonatomic) UILabel *title;
@property (nonatomic) bool usesClearBackground;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (id)reuseIdentifier;
+ (id)reuseIdentifierAX;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bottomLine;
- (bool)canBecomeFocused;
- (bool)canExpand;
- (id)cellBackgroundColor;
- (id)checkmark;
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 subtitle:(id)arg3 messagesGroupIdentifier:(id)arg4 source:(long long)arg5 playerSelectionProxy:(id)arg6;
- (id)container;
- (void)dealloc;
- (id)groupCellDelegate;
- (void)handleLongPress:(id)arg1;
- (id)iconContainer;
- (bool)lineVisible;
- (id)longPressRecognizer;
- (id)messageIcon;
- (id)originalSubtitle;
- (id)playerGroupView;
- (id)ringView;
- (id)searchText;
- (void)setBottomLine:(id)arg1;
- (void)setCanExpand:(bool)arg1;
- (void)setCheckmark:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setGroupCellDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconContainer:(id)arg1;
- (void)setLineVisible:(bool)arg1;
- (void)setLongPressRecognizer:(id)arg1;
- (void)setMessageIcon:(id)arg1;
- (void)setOriginalSubtitle:(id)arg1;
- (void)setPlayerGroupView:(id)arg1;
- (void)setRingView:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUsesClearBackground:(bool)arg1;
- (id)subtitle;
- (id)title;
- (void)updateCellBackground;
- (void)updateLayerMask:(id)arg1;
- (void)updateTitleForSearchText;
- (bool)usesClearBackground;

@end
