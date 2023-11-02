
@interface GEOMapsSearchHomeSection : NSObject {
    GEOCollectionSuggestionResult * _collectionSuggestions;
    GEOGuideLocationSuggestionResults * _guideLocationSuggestsions;
    NSString * _name;
    GEOPublisherSuggestionResult * _publisherSuggestions;
    NSArray * _searchCategories;
    unsigned long long  _sectionType;
}

@property (nonatomic, readonly) GEOCollectionSuggestionResult *collectionSuggestions;
@property (nonatomic, readonly) GEOGuideLocationSuggestionResults *guideLocationSuggestsions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEOPublisherSuggestionResult *publisherSuggestions;
@property (nonatomic, readonly) NSArray *searchCategories;
@property (nonatomic, readonly) unsigned long long sectionType;

- (void).cxx_destruct;
- (id)collectionSuggestions;
- (bool)dataModelIsValid:(id)arg1;
- (id)description;
- (id)guideLocationSuggestsions;
- (id)initWithMapsSearchHomeSection:(id)arg1 mapsResults:(id)arg2;
- (id)name;
- (id)publisherSuggestions;
- (id)searchCategories;
- (unsigned long long)sectionType;

@end
