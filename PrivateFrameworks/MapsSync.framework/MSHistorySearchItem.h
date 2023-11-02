
@interface MSHistorySearchItem : MSHistoryItem {
    void _geoMapRegion;
    void _language;
    void _locationDisplay;
    void _query;
}

@property (nonatomic, copy) NSData *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;

+ (Class)managedClass;

- (void).cxx_destruct;
- (id)geoMapRegion;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 geoMapRegion:(id)arg2 language:(id)arg3 locationDisplay:(id)arg4 query:(id)arg5;
- (id)language;
- (id)locationDisplay;
- (id)query;
- (void)setGeoMapRegion:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLocationDisplay:(id)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
- (void)setQuery:(id)arg1;

@end
