
@interface MPPSearchStringPredicate : PBCodable <NSCopying> {
    NSMutableArray * _properties;
    NSString * _searchString;
}

@property (nonatomic, readonly) bool hasSearchString;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, retain) NSString *searchString;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (void)clearProperties;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (id)searchString;
- (void)setProperties:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
