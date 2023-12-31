
@interface HUUserManagementUserCell : UITableViewCell {
    NSString * _displayName;
    NSString * _invitationStatusString;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *invitationStatusString;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)invitationStatusString;
- (void)layoutSubviews;
- (void)setDisplayName:(id)arg1;
- (void)setInvitationStatusString:(id)arg1;

@end
