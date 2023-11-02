
@interface GEOLogMsgEventTelemetric : PBCodable <NSCopying> {
    NSMutableArray * _telemetricEntitys;
}

@property (nonatomic, retain) NSMutableArray *telemetricEntitys;

+ (bool)isValid:(id)arg1;
+ (Class)telemetricEntityType;

- (void).cxx_destruct;
- (void)addTelemetricEntity:(id)arg1;
- (void)clearTelemetricEntitys;
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
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTelemetricEntitys:(id)arg1;
- (id)telemetricEntityAtIndex:(unsigned long long)arg1;
- (id)telemetricEntitys;
- (unsigned long long)telemetricEntitysCount;
- (void)writeTo:(id)arg1;

@end
