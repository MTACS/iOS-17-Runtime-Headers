
@interface PUPickerExtensionHostContext : PUPickerExtensionContext <_PUPickerExtensionContextHostInterface> {
    <_PUPickerExtensionContextHostInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PUPickerExtensionContextHostInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_pickerDidFinishPicking:(id)arg1;
- (void)_pickerDidSetModalInPresentation:(bool)arg1;
- (void)_pickerDidSetOnboardingHeaderDismissed:(bool)arg1;
- (void)_pickerDidSetOnboardingOverlayDismissed:(bool)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
