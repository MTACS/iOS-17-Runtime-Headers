
@interface GEOLogMsgEventFullNavTrace : PBCodable <NSCopying> {
    NSData * _navTraceData;
}

@property (nonatomic, readonly) bool hasNavTraceData;
@property (nonatomic, retain) NSData *navTraceData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNavTraceData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)navTraceData;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setNavTraceData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
