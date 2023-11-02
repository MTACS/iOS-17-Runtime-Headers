
@interface AATrustedDeviceListResponse : AAResponse {
    NSNumber * _defaultNumberOfDevicesToShow;
    NSArray * _devices;
}

@property (nonatomic, readonly) NSNumber *defaultNumberOfDevicesToShow;
@property (nonatomic, readonly) NSArray *devices;

- (void).cxx_destruct;
- (id)defaultNumberOfDevicesToShow;
- (id)devices;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
