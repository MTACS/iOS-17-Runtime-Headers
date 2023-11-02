
@interface HDDataAggregationResult : NSObject {
    HDDataAggregationState * _aggregationState;
    NSArray * _consumedSensorData;
    id /* block */  _persistenceHandler;
}

@property (nonatomic, readonly, copy) HDDataAggregationState *aggregationState;
@property (nonatomic, readonly, copy) NSArray *consumedSensorData;
@property (nonatomic, readonly, copy) id /* block */ persistenceHandler;

- (void).cxx_destruct;
- (id)aggregationState;
- (id)consumedSensorData;
- (id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(id /* block */)arg3;
- (id /* block */)persistenceHandler;

@end
