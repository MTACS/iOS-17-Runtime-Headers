
@interface HDQuantityAggregationResult : NSObject {
    NSArray * _aggregatedSamples;
    NSArray * _consumedSensorData;
    NSMutableArray * _remainingSensorData;
}

@property (nonatomic, readonly, copy) NSArray *aggregatedSamples;
@property (nonatomic, readonly, copy) NSArray *consumedSensorData;
@property (nonatomic, readonly, copy) NSMutableArray *remainingSensorData;

- (void).cxx_destruct;
- (id)aggregatedSamples;
- (id)consumedSensorData;
- (id)initWithAggregatedSamples:(id)arg1 consumedData:(id)arg2 remainingData:(id)arg3;
- (id)remainingSensorData;

@end
