
@interface DYGTMTLDeviceProfile : NSObject <NSSecureCoding> {
    NSDictionary * _defaultSamplePositions;
    <MTLDevice> * _device;
    NSString * _name;
    unsigned long long  _streamRef;
    NSArray * _supportedFeatureSets;
    NSArray * _supportedGPUFamilies;
}

@property (nonatomic, copy) NSDictionary *defaultSamplePositions;
@property (nonatomic) <MTLDevice> *device;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long streamRef;
@property (nonatomic, copy) NSArray *supportedFeatureSets;
@property (nonatomic, copy) NSArray *supportedGPUFamilies;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultSamplePositions;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setDefaultSamplePositions:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setName:(id)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (void)setSupportedFeatureSets:(id)arg1;
- (void)setSupportedGPUFamilies:(id)arg1;
- (unsigned long long)streamRef;
- (id)supportedFeatureSets;
- (id)supportedGPUFamilies;

@end
