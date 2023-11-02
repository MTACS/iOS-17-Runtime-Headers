
@interface _HKSPDefaultScheduleProvider : NSObject <HKSPSuggestionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)hksp_suggestedSleepScheduleWithCompletion:(id /* block */)arg1;

@end
