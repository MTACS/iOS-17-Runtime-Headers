
@interface AUiPodEQViewController : AUAppleViewControllerBase <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView * picker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)priv_eventListener:(void*)arg1 event:(const struct AudioUnitEvent { unsigned int x1; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; } x_2_1_1; struct AudioUnitProperty { struct OpaqueAudioComponentInstance {} *x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_2_1_2; } x2; }*)arg2 value:(float)arg3;
- (void)synchronizeUIWithParameterValues;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
