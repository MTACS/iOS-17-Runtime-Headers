
@interface TPSCloudDeviceValidation : TPSTargetingValidation {
    <TPSCloudDeviceDataSource> * _dataSource;
    TPSCloudDeviceInfo * _deviceInfo;
}

@property (nonatomic) <TPSCloudDeviceDataSource> *dataSource;
@property (nonatomic, retain) TPSCloudDeviceInfo *deviceInfo;

+ (id)deviceInfoForIdentifier:(id)arg1;
+ (id)normalizedVersion:(id)arg1;
+ (id)tvDeviceInfo;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (id)deviceInfo;
- (id)initWithDeviceInfo:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
