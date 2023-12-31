
@interface ARPPredictionContext : NSObject {
    NSDate * _microLocationEventDate;
    NSDictionary * _microLocationProbabilityVector;
    NSDate * _predictionDate;
}

@property (nonatomic, readonly, copy) NSDate *microLocationEventDate;
@property (nonatomic, readonly) NSDictionary *microLocationProbabilityVector;
@property (nonatomic, readonly, copy) NSDate *predictionDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPredictionDate:(id)arg1 microLocationEventDate:(id)arg2 microLocationProbabilityVector:(id)arg3;
- (id)microLocationEventDate;
- (id)microLocationProbabilityVector;
- (id)predictionDate;

@end
