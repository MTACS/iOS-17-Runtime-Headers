
@interface IMFindMyDevice : NSObject {
    FMFDevice * _fmfDevice;
    FMLDevice * _fmlDevice;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) FMFDevice *fmfDevice;
@property (nonatomic, readonly) FMLDevice *fmlDevice;
@property (nonatomic, readonly) bool isThisDevice;

+ (id)deviceWithFMFDevice:(id)arg1;
+ (id)deviceWithFMLDevice:(id)arg1;

- (void).cxx_destruct;
- (id)deviceName;
- (id)fmfDevice;
- (id)fmlDevice;
- (unsigned long long)hash;
- (id)initWithFMFDevice:(id)arg1 fmlDevice:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isThisDevice;

@end
