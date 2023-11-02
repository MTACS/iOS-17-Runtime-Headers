
@interface MockTITrialManager : NSObject <TITrialManager> {
    id /* block */  _updateCallback;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) id /* block */ updateCallback;

- (void).cxx_destruct;
- (id)encodedCATrialParametersForLocale:(id)arg1;
- (id)encodedLMTrialParametersForLocale:(id)arg1;
- (id)favoniusLanguagePowerOverrideForLocale:(id)arg1;
- (id)inlineCompletionOperatingPointOverrideForLocale:(id)arg1;
- (id)inputTranscoderAssetsDirectoryURLForLocale:(id)arg1;
- (id)isNegativeLearningEnabledForLocale:(id)arg1;
- (void)setUpdateCallback:(id /* block */)arg1;
- (void)start;
- (id /* block */)updateCallback;

@end
