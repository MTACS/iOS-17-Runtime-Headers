
@interface GEORelatedEntitySection : NSObject {
    unsigned int  _index;
    NSString * _name;
    GEORelatedCollectionSection * _relatedCollectionSection;
    NSArray * _relatedPlaceCollections;
    long long  _sectionType;
}

@property (nonatomic, readonly) unsigned int index;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) GEORelatedCollectionSection *relatedCollectionSection;
@property (nonatomic, readonly) NSArray *relatedPlaceCollections;
@property (nonatomic, readonly) long long sectionType;

- (void).cxx_destruct;
- (unsigned int)index;
- (id)init;
- (id)initWithRelatedEntitySection:(id)arg1 mapsResults:(id)arg2;
- (id)name;
- (id)placeCollectionsWithCollectionSection:(id)arg1;
- (id)relatedCollectionSection;
- (id)relatedPlaceCollections;
- (long long)sectionType;

@end
