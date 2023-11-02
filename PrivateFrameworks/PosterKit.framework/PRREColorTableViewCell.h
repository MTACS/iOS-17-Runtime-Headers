
@interface PRREColorTableViewCell : PRRETableViewCell <UIColorPickerViewControllerDelegate> {
    UIColorWell * _well;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configure;
- (id)_currentValue;
- (void)_setCurrentValue:(id)arg1;
- (void)_tapped:(id)arg1;
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(bool)arg3;
- (void)colorPickerViewControllerDidFinish:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
