
@interface PKLinkedAppView : PKTableViewCell <PKLinkedApplicationObserver> {
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _appName;
    UILabel * _appPublisher;
    UIColor * _buttonBackgroundColor;
    UIColor * _buttonTintColor;
    UIImageView * _iconView;
    PKLinkedApplication * _linkedApplication;
    UILabel * _loadingLabel;
    UIColor * _mainLabelColor;
    UILabel * _price;
    UIColor * _subTextLabelColor;
    PKLinkedAppUserRatingView * _userRatingView;
    PKContinuousButton * _viewButton;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, retain) UIColor *buttonBackgroundColor;
@property (nonatomic, retain) UIColor *buttonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic, retain) UIColor *subTextLabelColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLoadingView;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (id)appLaunchURL;
- (id)buttonBackgroundColor;
- (id)buttonTintColor;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkedApplication:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStoreIDs:(id)arg1 systemAppBundleIdentifiers:(id)arg2 appLaunchURL:(id)arg3 reuseIdentifier:(id)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (id)mainLabelColor;
- (void)reloadApplicationStateIfNecessary;
- (void)setAppLaunchURL:(id)arg1;
- (void)setApplicationIcon:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setButtonBackgroundColor:(id)arg1;
- (void)setButtonTintColor:(id)arg1;
- (void)setCustomProductPageIdentifier:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (id)storeIDs;
- (id)subTextLabelColor;

@end
