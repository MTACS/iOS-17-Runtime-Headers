
@interface MapsSync.MapsSyncCollection : MapsSync.MapsSyncBaseItem {
    void _collectionDescription;
    void _image;
    void _imageUrl;
    void _places;
    void _placesCount;
    void _placesUnstored;
    void _title;
}

@property (nonatomic, copy) NSSet *_placesUnstored;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) NSSet *places;
@property (nonatomic, readonly) long long placesCount;
@property (nonatomic, readonly) NSString *title;

+ (void)deleteUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
+ (id)fetchCollectionForIdentifier:(id)arg1;
+ (void)fetchUniquelyOwnedCollectionItemsWithCollection:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_placesUnstored;
- (void)addEditWithBlock:(id /* block */)arg1;
- (bool)attributesEqual:(id)arg1;
- (id)collectionDescription;
- (id)copyWithZone:(void*)arg1;
- (void)deleteWithCompletion:(id /* block */)arg1;
- (id)description;
- (void)executeOnFirstSave:(id)arg1;
- (id)image;
- (id)imageUrl;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (id)places;
- (long long)placesCount;
- (void)setPropertiesWithObject:(id)arg1;
- (void)set_placesUnstored:(id)arg1;
- (id)title;

@end
