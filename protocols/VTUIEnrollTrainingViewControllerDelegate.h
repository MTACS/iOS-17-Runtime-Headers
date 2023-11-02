
@protocol VTUIEnrollTrainingViewControllerDelegate <NSObject>

@required

- (void)continueSetup;
- (void)showLearnMore;
- (void)skipSetup;

@optional

- (void)continueSetupWithVoiceProfile:(SSRVoiceProfile *)arg1;
- (void)dismissSetup;
- (void)selectedVoice:(AFVoiceInfo *)arg1 recognitionLanguageCode:(NSString *)arg2;

@end
