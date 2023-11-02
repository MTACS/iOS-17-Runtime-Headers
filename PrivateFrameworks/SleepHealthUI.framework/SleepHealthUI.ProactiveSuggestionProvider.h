
@interface SleepHealthUI.ProactiveSuggestionProvider : NSObject <HKSPSuggestionProvider>

- (void)hksp_suggestedSleepScheduleWithCompletion:(id /* block */)arg1;
- (id)init;

@end
