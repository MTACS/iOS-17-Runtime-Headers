
@interface AssistantLanguageController : PSListItemsController {
    AssistantSettingsSignalEmitter * _signalEmitter;
    NSDate * _startDate;
}

+ (id)bundle;

- (void).cxx_destruct;
- (void)_signalDidSelectVoice;
- (void)languageCodeDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
