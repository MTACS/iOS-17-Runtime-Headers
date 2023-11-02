
@interface VCMediaNegotiationBlobV2StreamGroup : PBCodable <NSCopying> {
    struct { 
        unsigned int streamGroup : 1; 
    }  _has;
    NSMutableArray * _payloads;
    VCMediaNegotiationBlobV2SettingsU1 * _settingsU1;
    unsigned int  _streamGroup;
    NSMutableArray * _streams;
}

@property (nonatomic, readonly) bool hasSettingsU1;
@property (nonatomic) bool hasStreamGroup;
@property (nonatomic, retain) NSMutableArray *payloads;
@property (nonatomic, retain) VCMediaNegotiationBlobV2SettingsU1 *settingsU1;
@property (nonatomic) unsigned int streamGroup;
@property (nonatomic, retain) NSMutableArray *streams;

+ (id)defaultsForStreamGroup:(unsigned int)arg1;
+ (id)defaultsForStreamGroupCustom:(unsigned int)arg1;
+ (bool)isValidStreamGroupIDFromConfig:(id)arg1 defaultConfig:(id)arg2;
+ (id)negotiationCipherSuiteAsString:(unsigned int)arg1;
+ (Class)payloadsType;
+ (unsigned int)streamGroupFromStreamGroupID:(unsigned int)arg1;
+ (unsigned int)streamGroupIDFromStreamGroup:(unsigned int)arg1;
+ (Class)streamsType;
+ (void)updateParentStreamIDForGroupConfig:(id)arg1;

- (void)addPayloads:(id)arg1;
- (void)addStreams:(id)arg1;
- (bool)appendStreamsToStreamGroupConfig:(id)arg1 streamGroupID:(unsigned int)arg2 rtpSampleRates:(id)arg3;
- (void)clearPayloads;
- (void)clearStreams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPayloadConfigStateWithStreamGroupConfig:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)getStreamGroupConfig:(id*)arg1;
- (bool)hasSettingsU1;
- (bool)hasStreamGroup;
- (unsigned long long)hash;
- (id)initWithStreamGroupConfig:(id)arg1;
- (id)initWithStreamGroupConfig:(id)arg1 defaultConfig:(id)arg2;
- (bool)isDefaultPayloadConfigsWithStreamGroupConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUsedPayloadConfigAtIndex:(id)arg1 streamGroupConfig:(id)arg2 rtpTimestampRate:(unsigned int*)arg3;
- (void)mergeFrom:(id)arg1;
- (id)payloads;
- (id)payloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)payloadsCount;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (void)setHasStreamGroup:(bool)arg1;
- (void)setPayloads:(id)arg1;
- (void)setSettingsU1:(id)arg1;
- (void)setStreamGroup:(unsigned int)arg1;
- (void)setStreams:(id)arg1;
- (id)settingsU1;
- (bool)setupPayloadsWithGroupConfig:(id)arg1;
- (bool)setupStreamsWithGroupConfig:(id)arg1;
- (unsigned int)streamGroup;
- (id)streams;
- (id)streamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)streamsCount;
- (void)updateDefaultPayloadConfigsWithConfig:(id)arg1 rtpSampleRates:(id)arg2;
- (bool)updatePayloadConfigsWithStreamGroupConfig:(id)arg1 rtpSampleRates:(id)arg2;
- (void)writeTo:(id)arg1;

@end
