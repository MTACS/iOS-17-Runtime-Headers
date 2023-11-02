
@interface NRPBMutableDevice : PBCodable <NSCopying> {
    NSMutableArray * _names;
    NSMutableArray * _properties;
}

@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic, retain) NSMutableArray *properties;

+ (Class)namesType;
+ (Class)propertiesType;

- (void).cxx_destruct;
- (void)addNames:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)clearNames;
- (void)clearProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)names;
- (id)namesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
