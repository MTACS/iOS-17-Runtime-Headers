
@interface GEOPublisherViewResult : NSObject {
    NSArray * _places;
    GEOPDPublisherViewResult * _publisherViewResult;
}

@property (nonatomic, readonly) NSArray *collectionIdentifiers;
@property (nonatomic, readonly) NSArray *resultFilters;

- (void).cxx_destruct;
- (id)collectionIdentifiers;
- (id)initWithPublisherViewResult:(id)arg1;
- (id)initWithPublisherViewResult:(id)arg1 withPlaces:(id)arg2;
- (id)resultFilters;

@end
