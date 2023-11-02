
@interface GEOMapsHomeSection : NSObject {
    GEOCollectionSuggestionResult * _collectionSuggestionResult;
    NSString * _name;
    long long  _sectionType;
}

@property (nonatomic, readonly) GEOCollectionSuggestionResult *collectionSuggestionResult;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long sectionType;

- (void).cxx_destruct;
- (id)collectionSuggestionResult;
- (id)initWithMapsHomeSection:(id)arg1 mapsResults:(id)arg2;
- (id)name;
- (long long)sectionType;

@end
