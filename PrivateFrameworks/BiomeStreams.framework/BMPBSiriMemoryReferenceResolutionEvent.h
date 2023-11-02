
@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying> {
    NSMutableArray * _entityMapElements;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableArray *entityMapElements;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *version;

+ (Class)entityMapElementsType;

- (void).cxx_destruct;
- (void)addEntityMapElements:(id)arg1;
- (void)clearEntityMapElements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityMapElements;
- (id)entityMapElementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityMapElementsCount;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEntityMapElements:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
