
@interface BWVariableFrameRateParameters : NSObject {
    NSMutableDictionary * _aeMaxGain;
    int  _motionThreshold;
    NSString * _portType;
}

@property (nonatomic, readonly) NSDictionary *aeMaxGain;
@property (nonatomic, readonly) int motionThreshold;
@property (nonatomic, readonly) NSString *portType;

- (id)aeMaxGain;
- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2;
- (int)motionThreshold;
- (id)portType;

@end
