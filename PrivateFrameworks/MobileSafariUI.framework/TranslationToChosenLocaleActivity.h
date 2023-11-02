
@interface TranslationToChosenLocaleActivity : TranslationActivity <_SFTranslationTargetLocaleAlertControllerDelegate> {
    UIViewController * _activityViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)actionType;
- (id)activityTitle;
- (id)activityViewController;
- (bool)canPerformWithTranslationContext:(id)arg1;
- (void)prepareWithTranslationContext:(id)arg1;
- (void)translationAlertController:(id)arg1 didSelectLocale:(id)arg2;
- (void)translationAlertController:(id)arg1 validateTargetLocale:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)translationAlertControllerShouldDismissAfterSelection:(id)arg1;

@end
