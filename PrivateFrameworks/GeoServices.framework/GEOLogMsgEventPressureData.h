
@interface GEOLogMsgEventPressureData : PBCodable <NSCopying> {
    NSData * _pressureData;
}

@property (nonatomic, readonly) bool hasPressureData;
@property (nonatomic, retain) NSData *pressureData;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPressureData;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)pressureData;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPressureData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
