
@interface HUAvatarContentView : UIView <UIContentView> {
    double  _avatarSize;
    <CNAvatarViewController> * _avatarViewController;
    NSLayoutConstraint * _avatarWidth;
    <UIContentConfiguration> * _configuration;
    NSArray * _dynamicConstraints;
    UIListContentView * _listContentView;
    HFUserHandle * _userHandle;
}

@property (nonatomic) double avatarSize;
@property (nonatomic, readonly) UIView *avatarView;
@property (nonatomic, readonly) <CNAvatarViewController> *avatarViewController;
@property (nonatomic, retain) NSLayoutConstraint *avatarWidth;
@property (nonatomic, copy) <UIContentConfiguration> *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dynamicConstraints;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIListContentView *listContentView;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFUserHandle *userHandle;

- (void).cxx_destruct;
- (double)avatarSize;
- (id)avatarView;
- (id)avatarViewController;
- (id)avatarWidth;
- (id)configuration;
- (id)dynamicConstraints;
- (id)initWithConfiguration:(id)arg1;
- (id)listContentView;
- (void)setAvatarSize:(double)arg1;
- (void)setAvatarWidth:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDynamicConstraints:(id)arg1;
- (void)setListContentView:(id)arg1;
- (void)setUserHandle:(id)arg1;
- (id)userHandle;

@end
