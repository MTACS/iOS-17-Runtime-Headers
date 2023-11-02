
@interface MapsSync.MapsSyncAnonymousCredential : MapsSync.MapsSyncBaseItem {
    void _anonymousId;
    void _mapsToken;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mapsTokenCreatedAt;
    void _mapsTokenTTL;
    void _reviewedPlaces;
    void _reviewedPlacesUnstored;
}

@property (nonatomic, copy) NSSet *_reviewedPlacesUnstored;
@property (nonatomic, readonly) NSData *anonymousId;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSData *mapsToken;
@property (nonatomic, readonly) NSDate *mapsTokenCreatedAt;
@property (nonatomic, readonly) unsigned long long mapsTokenTTL;
@property (nonatomic, readonly) NSSet *reviewedPlaces;

+ (id)fetchLatestAnonymousCredential;
+ (id)fetchWithAnonymousId:(id)arg1;

- (void).cxx_destruct;
- (id)_reviewedPlacesUnstored;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)anonymousId;
- (id)description;
- (void)executeOnFirstSave:(id)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (id)mapsToken;
- (id)mapsTokenCreatedAt;
- (unsigned long long)mapsTokenTTL;
- (Class)mutableObjectClass;
- (id)reviewedPlaces;
- (void)setPropertiesWithObject:(id)arg1;
- (void)set_reviewedPlacesUnstored:(id)arg1;

@end
