
@interface _INPBPrivateAddMediaIntentData : PBCodable <NSCopying, NSSecureCoding, _INPBPrivateAddMediaIntentData> {
    NSArray * _audioSearchResults;
    struct { }  _has;
    NSArray * _internalSignals;
    _INPBPrivateMediaIntentData * _privateMediaIntentData;
}

@property (nonatomic, copy) NSArray *audioSearchResults;
@property (nonatomic, readonly) unsigned long long audioSearchResultsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPrivateMediaIntentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *internalSignals;
@property (nonatomic, readonly) unsigned long long internalSignalsCount;
@property (nonatomic, retain) _INPBPrivateMediaIntentData *privateMediaIntentData;
@property (readonly) Class superclass;

+ (Class)audioSearchResultsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAudioSearchResults:(id)arg1;
- (void)addInternalSignal:(id)arg1;
- (id)audioSearchResults;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)audioSearchResultsCount;
- (void)clearAudioSearchResults;
- (void)clearInternalSignals;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPrivateMediaIntentData;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)internalSignalAtIndex:(unsigned long long)arg1;
- (id)internalSignals;
- (unsigned long long)internalSignalsCount;
- (bool)isEqual:(id)arg1;
- (id)privateMediaIntentData;
- (bool)readFrom:(id)arg1;
- (void)setAudioSearchResults:(id)arg1;
- (void)setInternalSignals:(id)arg1;
- (void)setPrivateMediaIntentData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
