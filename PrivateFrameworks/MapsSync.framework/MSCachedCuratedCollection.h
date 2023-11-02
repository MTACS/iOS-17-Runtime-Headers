
@interface MSCachedCuratedCollection : MapsSync.MapsSyncObject {
    void _collectionDescription;
    void _curatedCollectionIdentifier;
    void _image;
    void _imageUrl;
    void _isTombstone;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastFetchedDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lastSignificantChangeDate;
    void _placesCount;
    void _positionIndex;
    void _publisherAttribution;
    void _resultProviderIdentifier;
    void _title;
    void _titleLocale;
}

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic) unsigned long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) bool isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic) int resultProviderIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)collectionDescription;
- (unsigned long long)curatedCollectionIdentifier;
- (id)image;
- (id)imageUrl;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 collectionDescription:(id)arg2 curatedCollectionIdentifier:(unsigned long long)arg3 image:(id)arg4 imageUrl:(id)arg5 isTombstone:(bool)arg6 lastFetchedDate:(id)arg7 lastSignificantChangeDate:(id)arg8 placesCount:(int)arg9 positionIndex:(long long)arg10 publisherAttribution:(id)arg11 resultProviderIdentifier:(int)arg12 title:(id)arg13 titleLocale:(id)arg14;
- (bool)isTombstone;
- (id)lastFetchedDate;
- (id)lastSignificantChangeDate;
- (int)placesCount;
- (long long)positionIndex;
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
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setPublisherAttribution:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocale:(id)arg1;
- (id)title;
- (id)titleLocale;

@end
