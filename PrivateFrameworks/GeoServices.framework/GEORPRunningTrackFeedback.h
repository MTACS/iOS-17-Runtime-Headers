
@interface GEORPRunningTrackFeedback : PBCodable <NSCopying> {
    NSString * _trackFeatureId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasTrackFeatureId;
@property (nonatomic, retain) NSString *trackFeatureId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTrackFeatureId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTrackFeatureId:(id)arg1;
- (id)trackFeatureId;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
