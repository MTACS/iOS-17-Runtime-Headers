
@interface ATXPBFaceGallerySection : PBCodable <NSCopying> {
    struct { 
        unsigned int semanticType : 1; 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _items;
    int  _semanticType;
    int  _type;
}

@property (nonatomic) bool hasSemanticType;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic) int semanticType;
@property (nonatomic) int type;

+ (Class)itemsType;

- (void).cxx_destruct;
- (int)StringAsSemanticType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSemanticType;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)semanticType;
- (id)semanticTypeAsString:(int)arg1;
- (void)setHasSemanticType:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setSemanticType:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
