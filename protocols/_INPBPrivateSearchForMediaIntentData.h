
@protocol _INPBPrivateSearchForMediaIntentData <NSObject>

@required

+ (Class)audioSearchResultsType;

- (void)addAudioSearchResults:(_INPBMediaItemValue *)arg1;
- (void)addInternalSignal:(NSString *)arg1;
- (bool)appInferred;
- (NSArray *)audioSearchResults;
- (_INPBMediaItemValue *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioSearchResultsCount;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (bool)hasAppInferred;
- (bool)hasPrivateMediaIntentData;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (NSArray *)internalSignals;
- (unsigned long long)internalSignalsCount;
- (_INPBPrivateMediaIntentData *)privateMediaIntentData;
- (void)setAppInferred:(bool)arg1;
- (void)setAudioSearchResults:(NSArray *)arg1;
- (void)setHasAppInferred:(bool)arg1;
- (void)setInternalSignals:(NSArray *)arg1;
- (void)setPrivateMediaIntentData:(_INPBPrivateMediaIntentData *)arg1;

@end
