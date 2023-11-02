
@interface ADPipelineParameters : NSObject {
    NSString * _deviceName;
    unsigned long long  _outputDepthUnits;
}

@property (nonatomic, readonly, retain) NSString *deviceName;
@property (nonatomic) unsigned long long outputDepthUnits;

- (void).cxx_destruct;
- (id)deviceName;
- (id)init;
- (id)initForDevice:(id)arg1;
- (unsigned long long)outputDepthUnits;
- (void)setOutputDepthUnits:(unsigned long long)arg1;

@end
