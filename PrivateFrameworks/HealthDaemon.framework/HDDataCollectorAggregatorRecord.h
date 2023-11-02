
@interface HDDataCollectorAggregatorRecord : NSObject {
    HDDataAggregator * _aggregator;
    HDDataCollectorConfiguration * _configuration;
    bool  _hasSetLastSensorDatum;
    NSString * _identifier;
    <HDCollectedSensorDatum> * _lastSensorDatum;
}

- (void).cxx_destruct;
- (id)description;

@end
