
@interface PLAssetCluster : NSObject {
    NSArray * _assets;
    NSDate * _endDate;
    CLLocation * _location;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)mergedCluster:(id)arg1;
+ (id)sortByTimeSortDescriptors;

- (void).cxx_destruct;
- (id)assets;
- (id)description;
- (id)endDate;
- (id)initWithAssetsSortedByDate:(id)arg1 region:(id)arg2;
- (id)location;
- (id)startDate;

@end
