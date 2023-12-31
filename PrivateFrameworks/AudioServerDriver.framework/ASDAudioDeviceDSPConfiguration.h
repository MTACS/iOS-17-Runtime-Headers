
@interface ASDAudioDeviceDSPConfiguration : NSObject {
    NSSet * _dspDeviceProperties;
    NSArray * _inputDSP;
    NSString * _name;
    NSArray * _outputDSP;
    NSSet * _underlyingDeviceProperties;
}

@property (nonatomic, readonly) NSSet *dspDeviceProperties;
@property (nonatomic, readonly) NSArray *inputDSP;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *outputDSP;
@property (nonatomic, readonly) NSSet *underlyingDeviceProperties;

- (void).cxx_destruct;
- (id)dspDeviceProperties;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2 name:(id)arg3;
- (id)inputDSP;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)outputDSP;
- (id)underlyingDeviceProperties;

@end
