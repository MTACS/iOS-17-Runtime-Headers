
@interface ICASDeviceData : NSObject <AADataEventType> {
    NSString * _deviceModel;
    NSString * _devicePlatform;
    NSString * _osBundleVersion;
    ICASOsInstallVariant * _osInstallVariant;
    NSString * _osVersion;
}

@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *devicePlatform;
@property (nonatomic, readonly) NSString *osBundleVersion;
@property (nonatomic, readonly) ICASOsInstallVariant *osInstallVariant;
@property (nonatomic, readonly) NSString *osVersion;

+ (id)dataName;

- (void).cxx_destruct;
- (id)deviceModel;
- (id)devicePlatform;
- (id)initWithDeviceModel:(id)arg1 devicePlatform:(id)arg2 osInstallVariant:(id)arg3 osVersion:(id)arg4 osBundleVersion:(id)arg5;
- (id)osBundleVersion;
- (id)osInstallVariant;
- (id)osVersion;
- (id)toDict;

@end
