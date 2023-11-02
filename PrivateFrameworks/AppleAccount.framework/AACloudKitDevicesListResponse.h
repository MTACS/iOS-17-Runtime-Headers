
@interface AACloudKitDevicesListResponse : AAResponse {
    NSArray * _incompatibleDeviceNames;
    NSArray * _incompatibleDevices;
    NSArray * _needUpgradeDeviceNames;
    NSArray * _needUpgradeDevices;
}

@property (nonatomic, readonly) NSArray *incompatibleDeviceNames;
@property (nonatomic, readonly) NSArray *incompatibleDevices;
@property (nonatomic, readonly) NSArray *needUpgradeDeviceNames;
@property (nonatomic, readonly) NSArray *needUpgradeDevices;

- (void).cxx_destruct;
- (id)incompatibleDeviceNames;
- (id)incompatibleDevices;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)needUpgradeDeviceNames;
- (id)needUpgradeDevices;

@end
