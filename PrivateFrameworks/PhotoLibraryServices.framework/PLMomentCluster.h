
@interface PLMomentCluster : NSObject {
    NSDate * _endDate;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    NSArray * _moments;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic, readonly, copy) NSArray *moments;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithMomentClusters:(id)arg1;
- (id)initWithMoments:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localEndDate;
- (id)localStartDate;
- (id)moments;
- (id)startDate;

@end
