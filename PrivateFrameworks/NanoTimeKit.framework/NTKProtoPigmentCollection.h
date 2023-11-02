
@interface NTKProtoPigmentCollection : PBCodable <NSCopying> {
    NSMutableArray * _collections;
    NTKProtoPigmentCollectionConfig * _config;
    NSMutableArray * _defaultGalleryColors;
    NTKProtoPigment * _defaultOption;
    struct { 
        unsigned int isShared : 1; 
        unsigned int isStub : 1; 
    }  _has;
    bool  _isShared;
    bool  _isStub;
    NSMutableArray * _items;
    NSString * _name;
}

@property (nonatomic, retain) NSMutableArray *collections;
@property (nonatomic, retain) NTKProtoPigmentCollectionConfig *config;
@property (nonatomic, retain) NSMutableArray *defaultGalleryColors;
@property (nonatomic, retain) NTKProtoPigment *defaultOption;
@property (nonatomic, readonly) bool hasConfig;
@property (nonatomic, readonly) bool hasDefaultOption;
@property (nonatomic) bool hasIsShared;
@property (nonatomic) bool hasIsStub;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool isShared;
@property (nonatomic) bool isStub;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *name;

+ (Class)collectionsType;
+ (Class)defaultGalleryColorsType;
+ (Class)itemsType;

- (void).cxx_destruct;
- (void)addCollections:(id)arg1;
- (void)addDefaultGalleryColors:(id)arg1;
- (void)addItems:(id)arg1;
- (void)clearCollections;
- (void)clearDefaultGalleryColors;
- (void)clearItems;
- (id)collections;
- (id)collectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)collectionsCount;
- (id)config;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultGalleryColors;
- (id)defaultGalleryColorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultGalleryColorsCount;
- (id)defaultOption;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfig;
- (bool)hasDefaultOption;
- (bool)hasIsShared;
- (bool)hasIsStub;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isShared;
- (bool)isStub;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDefaultGalleryColors:(id)arg1;
- (void)setDefaultOption:(id)arg1;
- (void)setHasIsShared:(bool)arg1;
- (void)setHasIsStub:(bool)arg1;
- (void)setIsShared:(bool)arg1;
- (void)setIsStub:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
