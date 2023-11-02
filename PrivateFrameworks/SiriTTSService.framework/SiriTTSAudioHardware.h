
@interface SiriTTSAudioHardware : NSObject {
    unsigned int  _audioDeviceID;
    bool  _duckOthers;
    bool  _isAppleProduct;
    bool  _isBluetooth;
    long long  _productId;
    NSString * _routeType;
    long long  _vendorId;
    float  _volume;
}

@property (nonatomic) unsigned int audioDeviceID;
@property (nonatomic) bool duckOthers;
@property (readonly) bool isAppleProduct;
@property (readonly) bool isBluetooth;
@property (readonly) long long productId;
@property (readonly) NSString *routeType;
@property (readonly) long long vendorId;
@property (readonly) float volume;

+ (id)defaultOutput;

- (void).cxx_destruct;
- (unsigned int)audioDeviceID;
- (bool)duckOthers;
- (void)fetchHardwareInfo;
- (bool)isAppleProduct;
- (bool)isBluetooth;
- (long long)productId;
- (id)routeType;
- (void)setAudioDeviceID:(unsigned int)arg1;
- (void)setDuckOthers:(bool)arg1;
- (long long)vendorId;
- (float)volume;

@end
