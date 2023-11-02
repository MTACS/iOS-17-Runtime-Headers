
@interface SFSharedAccountsGroupAvatarStackView : UIView {
    double  _avatarDiameter;
    double  _avatarSpacing;
    unsigned long long  _maximumNumberOfAvatarsToDisplay;
}

- (void)_addAvatarImageViews:(id)arg1;
- (id)_imageViewsForGroupMemberData:(id)arg1;
- (void)configureWithGroup:(id)arg1;
- (void)configureWithInvitedGroupMemberData:(id)arg1;
- (id)initWithAvatarDiameter:(double)arg1 avatarSpacing:(double)arg2 maximumNumberOfAvatarsToDisplay:(unsigned long long)arg3;

@end
