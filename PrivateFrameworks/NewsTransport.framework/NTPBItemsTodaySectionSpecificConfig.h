
@interface NTPBItemsTodaySectionSpecificConfig : PBCodable <NSCopying> {
    struct { 
        unsigned int maxArticlesShown : 1; 
    }  _has;
    NSMutableArray * _items;
    unsigned long long  _maxArticlesShown;
}

@property (nonatomic) bool hasMaxArticlesShown;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) unsigned long long maxArticlesShown;

+ (Class)itemsType;

- (void)addItems:(id)arg1;
- (void)clearItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxArticlesShown;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (unsigned long long)maxArticlesShown;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxArticlesShown:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setMaxArticlesShown:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
