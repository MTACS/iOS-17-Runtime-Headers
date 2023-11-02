
@interface CNGroupAvatarViewController : UIViewController <CNSharedProfileAnimatingAvatarView> {
    CNVisualIdentityAvatarViewController * _avatarViewController;
    UIImage * _badgeImage;
    CNBadgingAvatarBadgeStyleSettings * _badgeStyleSettings;
    CNGroupIdentity * _group;
    bool  _isDoNotDisturb;
    bool  _isMarkedForSyndication;
    bool  _isPerformingTransition;
    CNAvatarAccessoryView * _mediaContextBadge;
    CNSharedProfileStateOracle * _sharedProfileStateOracle;
}

@property (nonatomic, retain) CNVisualIdentityAvatarViewController *avatarViewController;
@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic, retain) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIImageView *destinationAvatarImageView;
@property (nonatomic, retain) CNGroupIdentity *group;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDoNotDisturb;
@property (nonatomic) bool isMarkedForSyndication;
@property (nonatomic) bool isPerformingTransition;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } primaryAvatarSize;
@property (nonatomic, retain) CNSharedProfileStateOracle *sharedProfileStateOracle;
@property (nonatomic, readonly) CALayer *sourceAvatarLayer;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (id)log;
+ (unsigned long long)maxContactAvatars;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)avatarLayers;
- (id)avatarViewController;
- (id)badgeImage;
- (id)badgeStyleSettings;
- (bool)contactsEqualToContactsFromGroup:(id)arg1;
- (id)destinationAvatarImageView;
- (id)group;
- (void)groupIdentityDidUpdate:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithGroup:(id)arg1 avatarLayoutType:(unsigned long long)arg2;
- (id)initWithGroup:(id)arg1 avatarViewControllerSettings:(id)arg2;
- (id)initWithGroup:(id)arg1 avatarViewControllerSettings:(id)arg2 avatarLayoutType:(unsigned long long)arg3;
- (bool)isDoNotDisturb;
- (bool)isMarkedForSyndication;
- (bool)isPerformingTransition;
- (void)loadView;
- (id)mediaContextBadge;
- (void)performTransitionAnimationWithCompletion:(id /* block */)arg1;
- (void)performTransitionAnimationWithStartHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })primaryAvatarSize;
- (void)setAvatarViewController:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setBadgeStyleSettings:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsDoNotDisturb:(bool)arg1;
- (void)setIsMarkedForSyndication:(bool)arg1;
- (void)setIsPerformingTransition:(bool)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)setSharedProfileStateOracle:(id)arg1;
- (id)sharedProfileStateOracle;
- (id)sourceAvatarLayer;

@end
