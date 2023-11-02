
@interface PPM2UnmappedMatchedFeedback : PBCodable <NSCopying> {
    NSString * _activeTreatments;
    NSString * _clientId;
    NSString * _mappingId;
}

@property (nonatomic, retain) NSString *activeTreatments;
@property (nonatomic, retain) NSString *clientId;
@property (nonatomic, readonly) bool hasActiveTreatments;
@property (nonatomic, readonly) bool hasClientId;
@property (nonatomic, readonly) bool hasMappingId;
@property (nonatomic, retain) NSString *mappingId;

- (void).cxx_destruct;
- (id)activeTreatments;
- (id)clientId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActiveTreatments;
- (bool)hasClientId;
- (bool)hasMappingId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mappingId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActiveTreatments:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setMappingId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
