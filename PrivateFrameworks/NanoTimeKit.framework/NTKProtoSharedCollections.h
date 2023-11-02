
@interface NTKProtoSharedCollections : PBCodable <NSCopying> {
    NSMutableArray * _collections;
}

@property (nonatomic, retain) NSMutableArray *collections;

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)arg1;

- (void).cxx_destruct;
- (void)addCollections:(id)arg1;
- (void)clearCollections;
- (id)collections;
- (id)collectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollections:(id)arg1;
- (id)sharedCollectionsDictionary;
- (void)writeTo:(id)arg1;

@end
