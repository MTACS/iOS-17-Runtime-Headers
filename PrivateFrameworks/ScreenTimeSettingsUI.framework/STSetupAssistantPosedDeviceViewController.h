
@interface STSetupAssistantPosedDeviceViewController : UIViewController {
    long long  _deviceSize;
    UIImageView * _deviceWithScreenImageView;
    bool  _isiPad;
}

@property (readonly) long long deviceSize;
@property (retain) UIImageView *deviceWithScreenImageView;
@property (readonly) bool isiPad;

- (void).cxx_destruct;
- (id)_deviceWithScreenImage;
- (bool)_isRTL;
- (id)_setupGenericImage;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;
- (long long)deviceSize;
- (id)deviceWithScreenImageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isiPad;
- (void)setDeviceWithScreenImageView:(id)arg1;
- (void)viewDidLoad;

@end
