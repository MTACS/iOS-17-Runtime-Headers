
@interface ARPRoutePrediction : NSObject {
    double  _confidence;
    NSString * _outputDeviceID;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSString *outputDeviceID;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (id)initWithOutputDeviceID:(id)arg1 confidence:(double)arg2;
- (id)outputDeviceID;

@end
