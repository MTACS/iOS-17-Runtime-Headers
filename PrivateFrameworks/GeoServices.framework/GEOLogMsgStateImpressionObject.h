
@interface GEOLogMsgStateImpressionObject : PBCodable <NSCopying> {
    GEOImpressionObjectId * _impressionObjectId;
}

@property (nonatomic, readonly) bool hasImpressionObjectId;
@property (nonatomic, retain) GEOImpressionObjectId *impressionObjectId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImpressionObjectId;
- (unsigned long long)hash;
- (id)impressionObjectId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImpressionObjectId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
