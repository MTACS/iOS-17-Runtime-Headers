
@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate> {
    SearchUIImageView * _appIconBadgeView;
    SearchUIContactsThumbnailView * _avatarView;
}

@property (nonatomic, retain) SearchUIImageView *appIconBadgeView;
@property (nonatomic, retain) SearchUIContactsThumbnailView *avatarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUIContainerBoxView *view;

+ (bool)supportsRowModel:(id)arg1;

- (void).cxx_destruct;
- (id)appIconBadgeView;
- (id)avatarView;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)hide;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAppIconBadgeView:(id)arg1;
- (void)setAvatarView:(id)arg1;
- (void)setUsesCompactWidth:(bool)arg1;
- (id)setupView;
- (bool)shouldVerticallyCenter;
- (unsigned long long)type;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

@end
