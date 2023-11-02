
@interface MapsSync.MapsSyncCachedCuratedCollection : MapsSync.MapsSyncBaseItem {
    void _collectionDescription;
    void _curatedCollectionIdentifier;
    void _image;
    void _imageUrl;
    void _isTombstone;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastFetchedDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastSignificantChangeDate;
    void _placesCount;
    void _publisherAttribution;
    void _resultProviderIdentifier;
    void _title;
    void _titleLocale;
}

@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long identifierHash;
@property (nonatomic, readonly) NSData *image;
@property (nonatomic, readonly) NSString *imageUrl;
@property (nonatomic, readonly) bool isTombstone;
@property (nonatomic, readonly) NSDate *lastFetchedDate;
@property (nonatomic, readonly) NSDate *lastSignificantChangeDate;
@property (nonatomic, readonly) int placesCount;
@property (nonatomic, readonly) NSString *publisherAttribution;
@property (nonatomic, readonly) int resultProviderIdentifier;
@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncDataSession *session;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *titleLocale;

+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completion:(id /* block */)arg6;
+ (void)fetchWithCuratedCollection:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchWithCuratedCollections:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
+ (void)fetchWithHistoryCuratedCollection:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchWithHistoryCuratedCollections:(id)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)collectionDescription;
- (unsigned long long)curatedCollectionIdentifier;
- (id)description;
- (long long)identifierHash;
- (id)image;
- (id)imageUrl;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1;
- (id)initWithCuratedCollectionIdentifier:(unsigned long long)arg1 resultProviderIdentifier:(int)arg2;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTombstone;
- (id)lastFetchedDate;
- (id)lastSignificantChangeDate;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (int)placesCount;
- (id)publisherAttribution;
- (int)resultProviderIdentifier;
- (id)session;
- (void)setPropertiesWithObject:(id)arg1;
- (id)title;
- (id)titleLocale;

@end
