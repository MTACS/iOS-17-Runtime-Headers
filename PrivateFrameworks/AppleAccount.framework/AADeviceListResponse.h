
@interface AADeviceListResponse : AAResponse {
    NSArray * _devices;
}

@property (nonatomic, readonly) NSArray *devices;

- (void).cxx_destruct;
- (id)devices;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
