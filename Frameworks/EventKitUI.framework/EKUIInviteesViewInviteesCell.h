
@interface EKUIInviteesViewInviteesCell : UITableViewCell {
    UILabel * _commentLabel;
    EKUILabeledAvatarView * _contactAvatarView;
    bool  _hideStatus;
    UILabel * _nameLabel;
    UILabel * _optionalInviteeLabel;
    NSArray * _persistentConstraints;
    NSArray * _removableConstraints;
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    UIImageView * _statusImageView;
    UIView * _textContainerView;
}

@property (nonatomic, retain) UILabel *commentLabel;
@property (nonatomic, retain) EKUILabeledAvatarView *contactAvatarView;
@property bool hideStatus;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *optionalInviteeLabel;
@property (nonatomic, retain) NSArray *persistentConstraints;
@property (nonatomic, retain) NSArray *removableConstraints;
@property (nonatomic) bool showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic, retain) UIImageView *statusImageView;
@property (nonatomic, retain) UIView *textContainerView;

+ (id)_commentLabelFont;
+ (id)_nameLabelFont;

- (void).cxx_destruct;
- (id)_statusImageViewSymbolConfiguration;
- (id)commentLabel;
- (id)contactAvatarView;
- (bool)hideStatus;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)nameLabel;
- (id)optionalInviteeLabel;
- (id)persistentConstraints;
- (id)removableConstraints;
- (void)setCommentLabel:(id)arg1;
- (void)setContactAvatarView:(id)arg1;
- (void)setHideStatus:(bool)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setOptionalInviteeLabel:(id)arg1;
- (void)setPersistentConstraints:(id)arg1;
- (void)setRemovableConstraints:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setStatusImageView:(id)arg1;
- (void)setTextContainerView:(id)arg1;
- (bool)showSpinner;
- (id)spinner;
- (id)statusImageView;
- (id)textContainerView;
- (void)updateCommonElements:(id)arg1 statusImage:(id)arg2 conflict:(bool)arg3;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;
- (void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(bool)arg3 animated:(bool)arg4;

@end
