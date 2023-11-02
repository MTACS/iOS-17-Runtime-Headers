
@interface EKUILabeledAvatarView : UIView {
    CNAvatarView * _avatar;
    UIImageView * _badge;
    unsigned long long  _badgeType;
    <EKUILabeledAvatarViewDelegate> * _delegate;
    UILabel * _label;
    unsigned long long  _labelPlacement;
    bool  _loadContactsAsynchronously;
    unsigned long long  _options;
    UIView * _pressedAccentOverlay;
    unsigned long long  _selectionState;
    UIViewController * _viewController;
}

@property (retain) CNAvatarView *avatar;
@property (retain) UIImageView *badge;
@property (nonatomic) unsigned long long badgeType;
@property (retain) CNContact *contact;
@property (nonatomic) <EKUILabeledAvatarViewDelegate> *delegate;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property (nonatomic) bool loadContactsAsynchronously;
@property unsigned long long options;
@property (retain) UIView *pressedAccentOverlay;
@property (nonatomic) unsigned long long selectionState;
@property UIViewController *viewController;

+ (id)_createAvatarView;
+ (id)contactKeysToFetch;
+ (id)sortedAvatarListFromParticipants:(id)arg1;

- (void).cxx_destruct;
- (id)avatar;
- (id)badge;
- (unsigned long long)badgeType;
- (id)contact;
- (id)delegate;
- (void)didLongPress;
- (void)didTap;
- (id)init;
- (id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)label;
- (unsigned long long)labelPlacement;
- (bool)loadContactsAsynchronously;
- (unsigned long long)options;
- (id)pressedAccentOverlay;
- (unsigned long long)selectionState;
- (void)setAvatar:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setBadgeType:(unsigned long long)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPlacement:(unsigned long long)arg1;
- (void)setLoadContactsAsynchronously:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPressedAccentOverlay:(id)arg1;
- (void)setSelectionState:(unsigned long long)arg1;
- (void)setViewController:(id)arg1;
- (void)setup;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAvatarViewWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateLabel;
- (void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithParticipant:(id)arg1;
- (id)viewController;

@end
