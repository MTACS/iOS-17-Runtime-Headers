
@interface _UIFontPickerRemoteViewController : _UIRemoteViewController <_UIFontPickerViewControllerHost> {
    <_UIFontPickerViewControllerHost> * _delegate;
}

@property (nonatomic) <_UIFontPickerViewControllerHost> *_delegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_delegate;
- (void)_pickerDidCancel;
- (void)_pickerDidSelectFont:(id)arg1;
- (void)set_delegate:(id)arg1;

@end
