
@interface ICASOrientationData : NSObject <AADataEventType> {
    ICASDeviceOrientation * _deviceOrientation;
    ICASInterfaceOrientation * _interfaceOrientation;
}

@property (nonatomic, readonly) ICASDeviceOrientation *deviceOrientation;
@property (nonatomic, readonly) ICASInterfaceOrientation *interfaceOrientation;

+ (id)dataName;

- (void).cxx_destruct;
- (id)deviceOrientation;
- (id)initWithDeviceOrientation:(id)arg1 interfaceOrientation:(id)arg2;
- (id)interfaceOrientation;
- (id)toDict;

@end
