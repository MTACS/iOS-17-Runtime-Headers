
@protocol TITrialManager <NSObject>

@required

- (NSDictionary *)encodedCATrialParametersForLocale:(NSLocale *)arg1;
- (NSDictionary *)encodedLMTrialParametersForLocale:(NSLocale *)arg1;
- (NSNumber *)favoniusLanguagePowerOverrideForLocale:(NSLocale *)arg1;
- (NSNumber *)inlineCompletionOperatingPointOverrideForLocale:(NSLocale *)arg1;
- (NSURL *)inputTranscoderAssetsDirectoryURLForLocale:(NSLocale *)arg1;
- (NSNumber *)isNegativeLearningEnabledForLocale:(NSLocale *)arg1;
- (void)setUpdateCallback:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)start;
- (id /* block */)updateCallback:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
