
@interface GEORPTimestamp : PBCodable <NSCopying> {
    int  _nanos;
    long long  _seconds;
}

@property (nonatomic) int nanos;
@property (nonatomic) long long seconds;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (int)nanos;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (long long)seconds;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
