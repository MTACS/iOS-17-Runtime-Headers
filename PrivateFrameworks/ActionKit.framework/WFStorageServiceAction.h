
@interface WFStorageServiceAction : WFAction

@property (nonatomic, readonly) bool showsFilePicker;

- (id)contentDestinationWithError:(id*)arg1;
- (id)filePathKey;
- (id)filenamePlaceholderText;
- (void)initializeParameters;
- (id)keywords;
- (id)outputContentClasses;
- (id)prioritizedParameterKeysForRemoteExecution;
- (bool)requiresRemoteExecution;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1 storageService:(id)arg2;
- (void)selectedStorageServiceChanged;
- (bool)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)showPickerKey;
- (bool)showsFilePicker;
- (bool)showsSettingsWhenResourcesUnavailable;
- (bool)skipsProcessingHiddenParameters;
- (id)storageService;
- (void)updatePathPrefix;

@end
