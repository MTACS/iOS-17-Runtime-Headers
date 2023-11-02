
@interface GEOPublisherViewResultFilter : NSObject {
    NSArray * _places;
    GEOPDPublisherViewResultFilter * _resultFilter;
}

@property (nonatomic, readonly) GEOPublisherViewResultFilterAddress *addressFilter;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) GEOPublisherViewResultFilterKeyword *keywordFilter;

- (void).cxx_destruct;
- (id)addressFilter;
- (long long)filterType;
- (id)initWithPublisherViewResultFilter:(id)arg1 withPlaces:(id)arg2;
- (id)keywordFilter;

@end
