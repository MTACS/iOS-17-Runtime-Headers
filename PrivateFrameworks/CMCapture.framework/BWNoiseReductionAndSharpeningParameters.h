
@interface BWNoiseReductionAndSharpeningParameters : NSObject {
    NSDictionary * _noiseReductionAndSharpeningConfiguration;
    NSString * _portType;
}

- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2;
- (id)noiseReductionAndSharpeningConfigurationForType:(int)arg1 gain:(float)arg2;
- (id)portType;

@end
