
@interface MapsSync.MapsSyncMutableCollection : MapsSync.MapsSyncMutableBaseItem {
    void _proxyCollection;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSSet *places;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addItemWithCollectionItem:(id)arg1;
- (id)collectionDescription;
- (id)image;
- (id)imageUrl;
- (id)initWithProxyObject:(id)arg1;
- (id)places;
- (void)removePlaceWithCollectionItem:(id)arg1;
- (void)setCollectionDescription:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setPlaces:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
