
@interface TITrialManager : NSObject <DDSAssetCenterDelegate, TITrialManager> {
    <DDSTrialProvider> * _ddsTrialProvider;
    bool  _didStart;
    DDSTrialAsset * _trialAsset;
    id /* block */  _updateCallback;
}

@property (readonly) <DDSTrialProvider> *ddsTrialProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy) DDSTrialAsset *trialAsset;
@property (copy) id /* block */ updateCallback;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)ddsTrialProvider;
- (void)dealloc;
- (bool)didStart;
- (void)didUpdateAssetsWithType:(id)arg1;
- (id)encodedCATrialParametersForLocale:(id)arg1;
- (id)encodedLMTrialParametersForLocale:(id)arg1;
- (id)favoniusLanguagePowerOverrideForLocale:(id)arg1;
- (id)featuresInTrialForLocale:(id)arg1;
- (void)handleReceivedTrialAsset:(id)arg1;
- (id)initWithDDSTrialProvider:(id)arg1;
- (id)inlineCompletionOperatingPointOverrideForLocale:(id)arg1;
- (id)inputTranscoderAssetsDirectoryURLForLocale:(id)arg1;
- (id)isNegativeLearningEnabledForLocale:(id)arg1;
- (void)setDidStart:(bool)arg1;
- (void)setTrialAsset:(id)arg1;
- (void)setUpdateCallback:(id /* block */)arg1;
- (void)start;
- (id)trialAsset;
- (void)trialDidReceiveAsset:(id)arg1 forQuery:(id)arg2;
- (void)trialDidStopForQuery:(id)arg1;
- (id /* block */)updateCallback;
- (id)urlForContentItemType:(id)arg1 asset:(id)arg2 locale:(id)arg3;

@end
