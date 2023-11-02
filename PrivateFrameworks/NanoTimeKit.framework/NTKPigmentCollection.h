
@interface NTKPigmentCollection : NSObject {
    NSOrderedSet * _allItems;
    NSString * _collectionName;
    NSArray * _collections;
    NSMutableDictionary * _collectionsByName;
    NTKPigmentCollectionConfig * _config;
    NSArray * _defaultGalleryColors;
    NTKPigmentEditOption * _defaultOption;
    NSMutableDictionary * _faceSpecificPigmentsByFullname;
    NSOrderedSet * _items;
    NSMutableDictionary * _itemsByName;
    NSDictionary * _migration;
    bool  _shared;
    bool  _stub;
}

@property (readonly) NSOrderedSet *allItems;
@property (copy) NSString *collectionName;
@property (copy) NSArray *collections;
@property (readonly) NSDictionary *collectionsByName;
@property (retain) NTKPigmentCollectionConfig *config;
@property (copy) NSArray *defaultGalleryColors;
@property (retain) NTKPigmentEditOption *defaultOption;
@property (retain) NSMutableDictionary *faceSpecificPigmentsByFullname;
@property (retain) NSOrderedSet *items;
@property (nonatomic, copy) NSDictionary *migration;
@property (getter=isShared, nonatomic) bool shared;
@property (getter=isStub, nonatomic) bool stub;

+ (id)collectionFromProtoBuffer:(id)arg1;
+ (id)collectionFromProtoBuffer:(id)arg1 sharedCollections:(id)arg2;
+ (id)stubCollectionWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_pigmentForName:(id)arg1;
- (id)allItems;
- (void)appendCollection:(id)arg1;
- (id)buildNamesMappingWithPigments:(id)arg1;
- (id)collectionName;
- (id)collections;
- (id)collectionsByName;
- (id)config;
- (unsigned long long)count;
- (id)defaultGalleryColors;
- (id)defaultOption;
- (id)defaultOptionWithName:(id)arg1;
- (id)description;
- (id)faceSpecificPigmentsByFullname;
- (void)fulfillWithSharedCollections:(id)arg1;
- (bool)hasAddableCollection;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRootCollection;
- (bool)isShared;
- (bool)isStub;
- (id)items;
- (void)mergeWithCollection:(id)arg1;
- (id)migration;
- (id)pigmentWithFullname:(id)arg1;
- (id)pigmentsFromMostRecentAddableCollection;
- (id)pigmentsFromMostRecentAddableCollections;
- (id)protoBuffer;
- (id)protoBufferIgnoringSharedCollections:(bool)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setCollections:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setDefaultGalleryColorWithNames:(id)arg1;
- (void)setDefaultGalleryColors:(id)arg1;
- (void)setDefaultOption:(id)arg1;
- (void)setFaceSpecificPigmentsByFullname:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setMigration:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setStub:(bool)arg1;

@end
