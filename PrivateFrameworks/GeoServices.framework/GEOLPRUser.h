
@interface GEOLPRUser : PBCodable <NSCopying> {
    NSMutableDictionary * _vehicles;
}

@property (nonatomic, retain) NSMutableDictionary *vehicles;

+ (bool)isValid:(id)arg1;
+ (Class)vehiclesType;

- (void).cxx_destruct;
- (void)clearVehicles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumerateVehiclesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setVehicles:(id)arg1;
- (void)setVehiclesValue:(id)arg1 forKey:(id)arg2;
- (id)vehicles;
- (unsigned long long)vehiclesCount;
- (id)vehiclesForKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
