
@interface HUAvatarTableViewCell : UITableViewCell <HUCellProtocol> {
    HUAvatarContentView * _avatarContentView;
    double  _avatarSize;
    UIView * _avatarView;
    <CNAvatarViewController> * _avatarViewController;
    <UIContentConfiguration> * _contentConfiguration;
    HFItem * _item;
    bool  _showAccessLevelDescription;
}

@property (nonatomic, retain) HUAvatarContentView *avatarContentView;
@property (nonatomic) double avatarSize;
@property (nonatomic, readonly) UIView *avatarView;
@property (nonatomic, readonly) <CNAvatarViewController> *avatarViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic) bool showAccessLevelDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserHandle *userHandle;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (id)avatarContentView;
- (double)avatarSize;
- (id)avatarView;
- (id)avatarViewController;
- (id)contentConfiguration;
- (id)description;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAvatarContentView:(id)arg1;
- (void)setAvatarSize:(double)arg1;
- (void)setContentConfiguration:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setShowAccessLevelDescription:(bool)arg1;
- (void)setUserHandle:(id)arg1;
- (bool)showAccessLevelDescription;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)userHandle;

@end
