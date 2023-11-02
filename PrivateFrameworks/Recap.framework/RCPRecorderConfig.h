
@interface RCPRecorderConfig : NSObject {
    NSArray * _deviceUsagePageArray;
    bool  _ignoreSenderProperties;
    double  _maxStreamDuration;
}

@property (nonatomic, retain) NSArray *deviceUsagePageArray;
@property (nonatomic) bool ignoreSenderProperties;
@property (nonatomic) double maxStreamDuration;

- (void).cxx_destruct;
- (id)deviceUsagePageArray;
- (bool)ignoreSenderProperties;
- (double)maxStreamDuration;
- (void)setDeviceUsagePageArray:(id)arg1;
- (void)setIgnoreSenderProperties:(bool)arg1;
- (void)setMaxStreamDuration:(double)arg1;

@end
