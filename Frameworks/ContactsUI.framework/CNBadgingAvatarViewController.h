
@interface CNBadgingAvatarViewController : NSObject <CNUIObjectViewController, CNUIObjectViewControllerDelegate> {
    CNAvatarViewController * _avatarViewController;
    UIImage * _badgeImage;
    CNBadgingAvatarBadgeStyleSettings * _badgeStyleSettings;
    CNBadgingAvatarView * _badgingAvatarView;
    UIView * _containerView;
    bool  _isDoNotDisturb;
    bool  _isMarkedForSyndication;
    CNAvatarAccessoryView * _mediaContextBadge;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic, retain) CNAvatarViewController *avatarViewController;
@property (nonatomic, retain) UIImage *badgeImage;
@property (nonatomic, retain) CNBadgingAvatarBadgeStyleSettings *badgeStyleSettings;
@property (nonatomic, retain) CNBadgingAvatarView *badgingAvatarView;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isDoNotDisturb;
@property (nonatomic) bool isMarkedForSyndication;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)avatarViewController;
- (id)badgeImage;
- (id)badgeStyleSettings;
- (id)badgingAvatarView;
- (id)contacts;
- (id)containerView;
- (id)descriptorForRequiredKeys;
- (id)hostingViewControllerForController:(id)arg1;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)isDoNotDisturb;
- (bool)isMarkedForSyndication;
- (id)mediaContextBadge;
- (id)objectViewControllerDelegate;
- (void)setAvatarViewController:(id)arg1;
- (void)setBadgeImage:(id)arg1;
- (void)setBadgeStyleSettings:(id)arg1;
- (void)setBadgingAvatarView:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setIsDoNotDisturb:(bool)arg1;
- (void)setIsMarkedForSyndication:(bool)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setupContainerViewIfNeeded;
- (id)view;

@end
