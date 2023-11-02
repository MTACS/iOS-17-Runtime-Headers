
@protocol _INPBPrivateAddMediaIntentData <NSObject>

@required

+ (Class)audioSearchResultsType;

- (void)addAudioSearchResults:(_INPBMediaItemValue *)arg1;
- (void)addInternalSignal:(NSString *)arg1;
- (NSArray *)audioSearchResults;
- (_INPBMediaItemValue *)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioSearchResultsCount;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (bool)hasPrivateMediaIntentData;
- (NSString *)internalSignalAtIndex:(unsigned long long)arg1;
- (NSArray *)internalSignals;
- (unsigned long long)internalSignalsCount;
- (_INPBPrivateMediaIntentData *)privateMediaIntentData;
- (void)setAudioSearchResults:(NSArray *)arg1;
- (void)setInternalSignals:(NSArray *)arg1;
- (void)setPrivateMediaIntentData:(_INPBPrivateMediaIntentData *)arg1;

@end
