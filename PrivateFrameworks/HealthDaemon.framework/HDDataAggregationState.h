
@interface HDDataAggregationState : NSObject {
    HKSample * _openSeries;
    NSMutableArray * _unaggregatedSensorData;
}

@property (nonatomic, readonly) HKSample *openSeries;
@property (nonatomic, readonly) NSMutableArray *unaggregatedSensorData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRemainingSensorData:(id)arg1;
- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2;
- (id)openSeries;
- (id)unaggregatedSensorData;

@end
