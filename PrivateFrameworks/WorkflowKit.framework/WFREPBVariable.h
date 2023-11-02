
@interface WFREPBVariable : PBCodable <NSCopying> {
    NSMutableArray * _items;
    NSString * _key;
}

@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *key;

+ (Class)itemsType;

- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setKey:(id)arg1;
- (void)writeTo:(id)arg1;

@end
