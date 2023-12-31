
@interface NTPBVanityURLMapping : PBCodable <NSCopying> {
    NSMutableArray * _paths;
}

@property (nonatomic, retain) NSMutableArray *paths;

+ (Class)pathsType;

- (void).cxx_destruct;
- (void)addPaths:(id)arg1;
- (void)clearPaths;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paths;
- (id)pathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (bool)readFrom:(id)arg1;
- (void)setPaths:(id)arg1;
- (void)writeTo:(id)arg1;

@end
