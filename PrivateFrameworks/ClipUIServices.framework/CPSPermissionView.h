
@interface CPSPermissionView : UIView <UITextViewDelegate> {
    NSString * _appName;
    bool  _locationConfirmationPermissionEnabled;
    bool  _notificationPermissionEnabled;
    id /* block */  _optionsAction;
    CPSButton * _permissionButton;
    bool  _permissionTextNeedsUpdate;
    bool  _requestsLocationConfirmationPermission;
    bool  _requestsNotificationPermission;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locationConfirmationPermissionEnabled;
@property (nonatomic) bool notificationPermissionEnabled;
@property (nonatomic, copy) id /* block */ optionsAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureWithAppName:(id)arg1 requestsNotificationPermission:(bool)arg2 requestsLocationConfirmationPermission:(bool)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)locationConfirmationPermissionEnabled;
- (bool)notificationPermissionEnabled;
- (id /* block */)optionsAction;
- (void)permissionButtonTapped:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setLocationConfirmationPermissionEnabled:(bool)arg1;
- (void)setLocationConfirmationPermissionEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setNotificationPermissionEnabled:(bool)arg1;
- (void)setNotificationPermissionEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setOptionsAction:(id /* block */)arg1;
- (void)toggleLocationConfirmationPermission;
- (void)toggleNotificationPermission;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionViewAnimated:(bool)arg1;

@end
