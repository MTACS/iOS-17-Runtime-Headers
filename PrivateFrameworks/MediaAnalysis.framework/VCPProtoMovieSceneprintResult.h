
@interface VCPProtoMovieSceneprintResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    NSData * _sceneprintBlob;
    VCPProtoTime * _timestamp;
}

@property (nonatomic, retain) NSData *sceneprintBlob;
@property (nonatomic, retain) VCPProtoTime *timestamp;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sceneprintBlob;
- (void)setSceneprintBlob:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
