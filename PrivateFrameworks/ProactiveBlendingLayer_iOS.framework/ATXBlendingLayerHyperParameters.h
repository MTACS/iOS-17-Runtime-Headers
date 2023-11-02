
@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary * _clientModelsToConsiderForConsumerSubType;
    NSDictionary * _parameters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)abGroup;
- (id)clientModelPriorityOrder;
- (id)clientModelsToConsiderForConsumerSubType;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)arg1;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)arg1;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)arg1;
- (id)init;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (id)initForTestingWithTrialAssetsOnly;
- (bool)isSuggestionEligibleForAppPredictionPanel:(id)arg1;
- (bool)isSuggestionEligibleForSuggestionsWidget:(id)arg1;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)arg1;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (long long)minConfidenceCategoryToConsider;
- (double)sessionLogSamplingRate;
- (bool)uiConfidenceLevelMetBySuggestion:(id)arg1;
- (bool)uiIsEnabledForSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2;
- (bool)uiSupportsClientModelIdForSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2;
- (bool)uiSupportsExecutableTypeForSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2;
- (bool)uiSupportsLayoutType:(long long)arg1 consumerSubType:(unsigned char)arg2;
- (bool)uiSupportsSuggestion:(id)arg1 consumerSubType:(unsigned char)arg2;

@end
