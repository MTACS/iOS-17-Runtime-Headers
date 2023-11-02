
@interface GEOAllCollectionsViewResultFilter : NSObject {
    NSArray * _places;
    GEOPDAllCollectionsViewResultFilter * _resultFilter;
}

@property (nonatomic, readonly) GEOAllCollectionsViewResultFilterTypeAddress *addressFilter;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) GEOAllCollectionsViewResultFilterTypeKeyword *keywordFilter;

- (void).cxx_destruct;
- (id)addressFilter;
- (long long)filterType;
- (id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2;
- (id)keywordFilter;

@end
