
@interface HUPresenceUserCell : UITableViewCell <HUDisableableCellProtocol> {
    HULayoutContainerView * _avatarContainerView;
    <CNAvatarViewController> * _avatarViewController;
    bool  _checked;
    UIImageView * _checkmarkImageView;
    NSString * _deviceName;
    bool  _disabled;
    bool  _locationUnavailable;
    HUTitleDescriptionContentView * _titleDescriptionView;
    HFUserHandle * _userHandle;
    NSString * _userName;
}

@property (nonatomic, readonly) HULayoutContainerView *avatarContainerView;
@property (nonatomic, readonly) <CNAvatarViewController> *avatarViewController;
@property (getter=isChecked, nonatomic) bool checked;
@property (nonatomic, readonly) UIImageView *checkmarkImageView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceName;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (getter=isLocationUnavailable, nonatomic) bool locationUnavailable;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUTitleDescriptionContentView *titleDescriptionView;
@property (nonatomic, retain) HFUserHandle *userHandle;
@property (nonatomic, copy) NSString *userName;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_updateCustomSeparatorInset;
- (void)_updateDescriptionText;
- (id)avatarContainerView;
- (id)avatarViewController;
- (id)checkmarkImageView;
- (id)deviceName;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isChecked;
- (bool)isDisabled;
- (bool)isLocationUnavailable;
- (void)prepareForReuse;
- (void)setChecked:(bool)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setLocationUnavailable:(bool)arg1;
- (void)setUserHandle:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)titleDescriptionView;
- (id)userHandle;
- (id)userName;

@end
