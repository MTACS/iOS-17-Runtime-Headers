
@interface MapsSync.MapsSyncMutableCachedCuratedCollection : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) bool isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;

- (void).cxx_destruct;
- (id)collectionDescription;
- (unsigned long long)curatedCollectionIdentifier;
- (id)image;
- (id)imageUrl;
- (id)initWithProxyObject:(id)arg1;
- (bool)isTombstone;
- (id)lastFetchedDate;
- (id)lastSignificantChangeDate;
- (int)placesCount;
- (id)publisherAttribution;
- (int)resultProviderIdentifier;
- (void)setCollectionDescription:(id)arg1;
- (void)setCuratedCollectionIdentifier:(unsigned long long)arg1;
- (void)setImage:(id)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setIsTombstone:(bool)arg1;
- (void)setLastFetchedDate:(id)arg1;
- (void)setLastSignificantChangeDate:(id)arg1;
- (void)setPlacesCount:(int)arg1;
- (void)setPublisherAttribution:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocale:(id)arg1;
- (id)title;
- (id)titleLocale;

@end
