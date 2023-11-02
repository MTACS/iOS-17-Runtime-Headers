
@interface HMDSettingOnChangeAttachedUpdatesResult : HMFObject {
    NSArray * _modelsToUpdate;
    id /* block */  _onCommitCompletion;
    NSArray * _settingsToUpdate;
}

@property (readonly) NSArray *modelsToUpdate;
@property (readonly) id /* block */ onCommitCompletion;
@property (readonly) NSArray *settingsToUpdate;

- (void).cxx_destruct;
- (id)initWithSettingsToUpdate:(id)arg1 models:(id)arg2 onCommitCompletion:(id /* block */)arg3;
- (id)modelsToUpdate;
- (id /* block */)onCommitCompletion;
- (id)settingsToUpdate;

@end
