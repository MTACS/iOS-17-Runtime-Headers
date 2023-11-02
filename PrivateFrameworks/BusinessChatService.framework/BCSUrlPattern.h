
@interface BCSUrlPattern : PBCodable <NSCopying> {
    NSString * _path;
    NSString * _query;
}

@property (nonatomic, readonly) bool hasPath;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *query;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPath;
- (bool)hasQuery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)path;
- (id)query;
- (bool)readFrom:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)writeTo:(id)arg1;

@end
