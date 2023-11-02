
@interface ICASDeviceOrientation : NSObject <AADataType> {
    long long  _deviceOrientation;
}

@property (nonatomic, readonly) long long deviceOrientation;

- (long long)deviceOrientation;
- (id)initWithDeviceOrientation:(long long)arg1;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
