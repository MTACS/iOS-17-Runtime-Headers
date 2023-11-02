
@interface DMTMobileGestaltBackedDeviceInformationPrimitives : NSObject <DMTDeviceInformationPrimitives> {
    NSString * _deviceClass;
    NSString * _deviceUDID;
    NSString * _marketingModelName;
    NSString * _modelIdentifier;
    NSString * _serialNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceClass;
@property (nonatomic, readonly, copy) NSString *deviceUDID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *marketingModelName;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)deviceClass;
- (id)deviceUDID;
- (id)marketingModelName;
- (id)modelIdentifier;
- (id)serialNumber;

@end
