
@interface HAENAccessoryInfo : NSObject {
    NSNumber * _interfaceDeviceSerialNumber;
    NSString * _interfaceModuleSerialNumber;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _name;
    NSString * _serialNumber;
}

@property (readonly) NSNumber *interfaceDeviceSerialNumber;
@property (readonly) NSString *interfaceModuleSerialNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *name;
@property (readonly) NSString *serialNumber;

+ (id)getAccessoryInfo:(id*)arg1;
+ (id)getAccessoryInfoFromIOAccesoryManager:(id*)arg1;
+ (id)getAccessoryInfoFromIOKitDirectly:(id*)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)interfaceDeviceSerialNumber;
- (id)interfaceModuleSerialNumber;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (id)serialNumber;

@end
