
@protocol _INPBPrivatePlayMediaIntentData <NSObject>

@required

+ (Class)audioSearchResultsType;

- (void)addAudioSearchResults:(_INPBMediaItemValue *)arg1;
- (void)addInternalSignal:(NSString *)arg1;
- (_INPBString *)alternativeProviderBundleIdentifier;
- (_INPBString *)ampPAFDataSetID;
- (bool)appInferred;
- (bool)appSelectionEnabled;
- (bool)appSelectionSignalsEnabled;
- (int)appSelectionSignalsFrequencyDenominator;
- (NSArray *)audioSearchResults;
- (_INPBMediaItemValue *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioSearchResultsCount;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (bool)entityConfidenceSignalsEnabled;
- (int)entityConfidenceSignalsFrequencyDenominatorInternal;
- (int)entityConfidenceSignalsFrequencyDenominatorProd;
- (int)entityConfidenceSignalsMaxItemsToDisambiguate;
- (bool)hasAlternativeProviderBundleIdentifier;
- (bool)hasAmpPAFDataSetID;
- (bool)hasAppInferred;
- (bool)hasAppSelectionEnabled;
- (bool)hasAppSelectionSignalsEnabled;
- (bool)hasAppSelectionSignalsFrequencyDenominator;
- (bool)hasEntityConfidenceSignalsEnabled;
- (bool)hasEntityConfidenceSignalsFrequencyDenominatorInternal;
- (bool)hasEntityConfidenceSignalsFrequencyDenominatorProd;
- (bool)hasEntityConfidenceSignalsMaxItemsToDisambiguate;
- (bool)hasImmediatelyStartPlayback;
- (bool)hasIsAmbiguousPlay;
- (bool)hasIsPersonalizedRequest;
- (bool)hasPrivateMediaIntentData;
- (bool)hasShouldSuppressCommonWholeHouseAudioRoutes;
- (bool)immediatelyStartPlayback;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (NSArray *)internalSignals;
- (unsigned long long)internalSignalsCount;
- (bool)isAmbiguousPlay;
- (bool)isPersonalizedRequest;
- (_INPBPrivateMediaIntentData *)privateMediaIntentData;
- (void)setAlternativeProviderBundleIdentifier:(_INPBString *)arg1;
- (void)setAmpPAFDataSetID:(_INPBString *)arg1;
- (void)setAppInferred:(bool)arg1;
- (void)setAppSelectionEnabled:(bool)arg1;
- (void)setAppSelectionSignalsEnabled:(bool)arg1;
- (void)setAppSelectionSignalsFrequencyDenominator:(int)arg1;
- (void)setAudioSearchResults:(NSArray *)arg1;
- (void)setEntityConfidenceSignalsEnabled:(bool)arg1;
- (void)setEntityConfidenceSignalsFrequencyDenominatorInternal:(int)arg1;
- (void)setEntityConfidenceSignalsFrequencyDenominatorProd:(int)arg1;
- (void)setEntityConfidenceSignalsMaxItemsToDisambiguate:(int)arg1;
- (void)setHasAppInferred:(bool)arg1;
- (void)setHasAppSelectionEnabled:(bool)arg1;
- (void)setHasAppSelectionSignalsEnabled:(bool)arg1;
- (void)setHasAppSelectionSignalsFrequencyDenominator:(bool)arg1;
- (void)setHasEntityConfidenceSignalsEnabled:(bool)arg1;
- (void)setHasEntityConfidenceSignalsFrequencyDenominatorInternal:(bool)arg1;
- (void)setHasEntityConfidenceSignalsFrequencyDenominatorProd:(bool)arg1;
- (void)setHasEntityConfidenceSignalsMaxItemsToDisambiguate:(bool)arg1;
- (void)setHasImmediatelyStartPlayback:(bool)arg1;
- (void)setHasIsAmbiguousPlay:(bool)arg1;
- (void)setHasIsPersonalizedRequest:(bool)arg1;
- (void)setHasShouldSuppressCommonWholeHouseAudioRoutes:(bool)arg1;
- (void)setImmediatelyStartPlayback:(bool)arg1;
- (void)setInternalSignals:(NSArray *)arg1;
- (void)setIsAmbiguousPlay:(bool)arg1;
- (void)setIsPersonalizedRequest:(bool)arg1;
- (void)setPrivateMediaIntentData:(_INPBPrivateMediaIntentData *)arg1;
- (void)setShouldSuppressCommonWholeHouseAudioRoutes:(bool)arg1;
- (bool)shouldSuppressCommonWholeHouseAudioRoutes;

@end
