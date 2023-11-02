
@interface GEOLogMsgEventBatchTrafficProbe : PBCodable <NSCopying> {
    NSData * _locationCollection;
}

@property (nonatomic, readonly) bool hasLocationCollection;
@property (nonatomic, retain) NSData *locationCollection;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocationCollection;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)locationCollection;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocationCollection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
