
@interface RemoteUIControllerPreferences : NSObject {
    UIImage * _navBarImage;
    NSString * _navBarImageLabel;
    bool  _showSpinner;
    NSString * _spinnerLabel;
}

@property (nonatomic, retain) UIImage *navBarImage;
@property (nonatomic, retain) NSString *navBarImageLabel;
@property (nonatomic) bool showSpinner;
@property (nonatomic, retain) NSString *spinnerLabel;

- (void).cxx_destruct;
- (id)initWithSpinner:(bool)arg1;
- (id)initWithSpinner:(bool)arg1 spinnerLabel:(id)arg2;
- (id)initWithSpinner:(bool)arg1 spinnerLabel:(id)arg2 navBarImage:(id)arg3 navBarImageLabel:(id)arg4;
- (id)navBarImage;
- (id)navBarImageLabel;
- (void)setNavBarImage:(id)arg1;
- (void)setNavBarImageLabel:(id)arg1;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinnerLabel:(id)arg1;
- (bool)showSpinner;
- (id)spinnerLabel;

@end
