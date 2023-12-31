
@interface TRNearbyDevice : NSObject {
    SFDevice * _representedDevice;
    unsigned long long  _supportedService;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) SFDevice *representedDevice;
@property (nonatomic) unsigned long long supportedService;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithRepresentedDevice:(id)arg1 supportedService:(unsigned long long)arg2;
- (id)representedDevice;
- (void)setSupportedService:(unsigned long long)arg1;
- (unsigned long long)supportedService;

@end
