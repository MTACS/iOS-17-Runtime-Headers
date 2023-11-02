
@interface GEORPRapUserResponseFeedback : PBCodable <NSCopying> {
    NSString * _responseId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic, retain) NSString *responseId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseId;
- (void)setResponseId:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
