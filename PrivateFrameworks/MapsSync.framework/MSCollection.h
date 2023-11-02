
@interface MSCollection : MapsSync.MapsSyncObject {
    void _collectionDescription;
    void _image;
    void _imageUrl;
    void _placeChanges;
    void _placesCount;
    void _positionIndex;
    void _title;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, readonly) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *title;

+ (Class)managedClass;

- (void).cxx_destruct;
- (void)addPlace:(id)arg1;
- (void)beforeDeleteWithManaged:(id)arg1;
- (id)collectionDescription;
- (id)fetchPlaces;
- (void)flushChanges;
- (id)image;
- (id)imageUrl;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 collectionDescription:(id)arg2 image:(id)arg3 imageUrl:(id)arg4 positionIndex:(long long)arg5 title:(id)arg6;
- (int)placesCount;
- (long long)positionIndex;
- (void)removePlace:(id)arg1;
- (void)setCollectionDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
