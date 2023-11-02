
@interface MPSGraphDevice : MPSGraphObject {
    <MTLDevice> * _metalDevice;
    NSString * _metalDeviceName;
    unsigned int  _type;
}

@property (nonatomic, readonly) long long gpuCoreCount;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;
@property (nonatomic, readonly) NSString *metalDeviceName;
@property (nonatomic, readonly) unsigned int type;

+ (id)ANEDevice;
+ (id)CPUDevice;
+ (id)deviceWithMTLDevice:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (long long)gpuCoreCount;
- (id)initWithDeviceType:(unsigned int)arg1 metalDevice:(id)arg2;
- (id)metalDevice;
- (id)metalDeviceName;
- (unsigned int)type;

@end
