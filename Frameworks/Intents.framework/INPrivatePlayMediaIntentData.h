
@interface INPrivatePlayMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {
    NSString * _alternativeProviderBundleIdentifier;
    NSString * _ampPAFDataSetID;
    NSNumber * _appInferred;
    NSNumber * _appSelectionEnabled;
    NSNumber * _appSelectionSignalsEnabled;
    NSNumber * _appSelectionSignalsFrequencyDenominator;
    NSArray * _audioSearchResults;
    NSNumber * _entityConfidenceSignalsEnabled;
    NSNumber * _entityConfidenceSignalsFrequencyDenominatorInternal;
    NSNumber * _entityConfidenceSignalsFrequencyDenominatorProd;
    NSNumber * _entityConfidenceSignalsMaxItemsToDisambiguate;
    NSNumber * _immediatelyStartPlayback;
    NSArray * _internalSignals;
    NSNumber * _isAmbiguousPlay;
    NSNumber * _isPersonalizedRequest;
    INPrivateMediaIntentData * _privateMediaIntentData;
    NSNumber * _shouldSuppressCommonWholeHouseAudioRoutes;
}

@property (nonatomic, readonly, copy) NSString *alternativeProviderBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *ampPAFDataSetID;
@property (nonatomic, readonly, copy) NSNumber *appInferred;
@property (nonatomic, readonly, copy) NSNumber *appSelectionEnabled;
@property (nonatomic, readonly, copy) NSNumber *appSelectionSignalsEnabled;
@property (nonatomic, readonly, copy) NSNumber *appSelectionSignalsFrequencyDenominator;
@property (nonatomic, readonly, copy) NSArray *audioSearchResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *entityConfidenceSignalsEnabled;
@property (nonatomic, readonly, copy) NSNumber *entityConfidenceSignalsFrequencyDenominatorInternal;
@property (nonatomic, readonly, copy) NSNumber *entityConfidenceSignalsFrequencyDenominatorProd;
@property (nonatomic, readonly, copy) NSNumber *entityConfidenceSignalsMaxItemsToDisambiguate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *immediatelyStartPlayback;
@property (nonatomic, readonly, copy) NSArray *internalSignals;
@property (nonatomic, readonly, copy) NSNumber *isAmbiguousPlay;
@property (nonatomic, readonly, copy) NSNumber *isPersonalizedRequest;
@property (nonatomic, copy) INPrivateMediaIntentData *privateMediaIntentData;
@property (nonatomic, readonly, copy) NSNumber *shouldSuppressCommonWholeHouseAudioRoutes;
@property (readonly) Class superclass;

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)alternativeProviderBundleIdentifier;
- (id)ampPAFDataSetID;
- (id)appInferred;
- (id)appSelectionEnabled;
- (id)appSelectionSignalsEnabled;
- (id)appSelectionSignalsFrequencyDenominator;
- (id)audioSearchResults;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityConfidenceSignalsEnabled;
- (id)entityConfidenceSignalsFrequencyDenominatorInternal;
- (id)entityConfidenceSignalsFrequencyDenominatorProd;
- (id)entityConfidenceSignalsMaxItemsToDisambiguate;
- (unsigned long long)hash;
- (id)immediatelyStartPlayback;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8 isAmbiguousPlay:(id)arg9;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8 isAmbiguousPlay:(id)arg9 isPersonalizedRequest:(id)arg10;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8 isAmbiguousPlay:(id)arg9 isPersonalizedRequest:(id)arg10 internalSignals:(id)arg11 entityConfidenceSignalsEnabled:(id)arg12 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg13 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg14 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg15;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8 isAmbiguousPlay:(id)arg9 isPersonalizedRequest:(id)arg10 internalSignals:(id)arg11 entityConfidenceSignalsEnabled:(id)arg12 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg13 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg14 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg15 alternativeProviderBundleIdentifier:(id)arg16;
- (id)initWithAppSelectionEnabled:(id)arg1 appInferred:(id)arg2 audioSearchResults:(id)arg3 privateMediaIntentData:(id)arg4 appSelectionSignalsEnabled:(id)arg5 appSelectionSignalsFrequencyDenominator:(id)arg6 shouldSuppressCommonWholeHouseAudioRoutes:(id)arg7 immediatelyStartPlayback:(id)arg8 isAmbiguousPlay:(id)arg9 isPersonalizedRequest:(id)arg10 internalSignals:(id)arg11 entityConfidenceSignalsEnabled:(id)arg12 entityConfidenceSignalsFrequencyDenominatorInternal:(id)arg13 entityConfidenceSignalsFrequencyDenominatorProd:(id)arg14 entityConfidenceSignalsMaxItemsToDisambiguate:(id)arg15 alternativeProviderBundleIdentifier:(id)arg16 ampPAFDataSetID:(id)arg17;
- (id)initWithCoder:(id)arg1;
- (id)internalSignals;
- (id)isAmbiguousPlay;
- (bool)isEqual:(id)arg1;
- (id)isPersonalizedRequest;
- (id)privateMediaIntentData;
- (void)setPrivateMediaIntentData:(id)arg1;
- (id)shouldSuppressCommonWholeHouseAudioRoutes;

@end
