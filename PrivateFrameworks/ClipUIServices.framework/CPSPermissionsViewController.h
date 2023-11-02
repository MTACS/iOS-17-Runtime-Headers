
@interface CPSPermissionsViewController : UIViewController <PRXCardContentProviding> {
    NSString * _appName;
    UIImage * _backgroundImage;
    bool  _backgroundImageNeedsUpdate;
    UIImageView * _backgroundImageView;
    <CPSPermissionsViewControllerDelegate> * _delegate;
    CPSPermissionItemView * _locationConfirmationItemView;
    CPSPermissionItemView * _notificationItemView;
    UIView * _optionsContainer;
}

@property (nonatomic, readonly) bool allowsPullToDismiss;
@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, readonly) long long cardStyle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSPermissionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool locationConfirmationPermissionEnabled;
@property (nonatomic) bool notificationPermissionEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (bool)allowsPullToDismiss;
- (id)backgroundImage;
- (id)delegate;
- (void)doneTapped;
- (id)init;
- (id)initWithAppName:(id)arg1 backgroundImage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (bool)locationConfirmationPermissionEnabled;
- (bool)notificationPermissionEnabled;
- (void)setBackgroundImage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocationConfirmationPermissionEnabled:(bool)arg1;
- (void)setNotificationPermissionEnabled:(bool)arg1;
- (void)setUpOptionsContainer;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSizeForCardWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
