
@interface PKProductSectionSearchResult : NSObject {
    double  _normalizedSearchDistance;
    unsigned long long  _numberOfResults;
    double  _searchDistance;
}

@property (nonatomic, readonly) double normalizedSearchDistance;
@property (nonatomic) unsigned long long numberOfResults;
@property (nonatomic) double searchDistance;

- (double)normalizedSearchDistance;
- (unsigned long long)numberOfResults;
- (double)searchDistance;
- (void)setNumberOfResults:(unsigned long long)arg1;
- (void)setSearchDistance:(double)arg1;

@end
