
@interface GEOSearchSectionList : NSObject {
    NSArray * _geoMapItemIdentifiers;
    NSArray * _searchSections;
}

@property (nonatomic, readonly) NSArray *geoMapItemIdentifiers;
@property (nonatomic, readonly) NSArray *searchSections;

+ (id)identifiersWithSearchSections:(id)arg1;

- (void).cxx_destruct;
- (id)geoMapItemIdentifiers;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithSearchSectionList:(id)arg1 mapsResults:(id)arg2;
- (id)initWithSearchSections:(id)arg1;
- (id)searchSections;

@end
