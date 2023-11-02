
@interface _UIColorPickerRemoteViewController : _UIRemoteViewController <_UIColorPickerViewProvidingDelegate> {
    <_UIColorPickerRemoteViewControllerHost> * _delegate;
}

@property (nonatomic) <_UIColorPickerRemoteViewControllerHost> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_delegate;
- (void)_pickerDidDismissEyedropper;
- (void)_pickerDidFinish;
- (void)_pickerDidFloatEyedropper;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (void)_pickerDidShowEyedropper;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_delegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
