
@interface GEORPRapQueryParameters : PBCodable <NSCopying> {
    NSMutableArray * _feedbackIds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *feedbackIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)feedbackIdType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFeedbackId:(id)arg1;
- (void)clearFeedbackIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;
- (id)feedbackIds;
- (unsigned long long)feedbackIdsCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackIds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
