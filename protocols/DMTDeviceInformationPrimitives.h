
@protocol DMTDeviceInformationPrimitives <NSObject>

@required

- (NSString *)deviceClass;
- (NSString *)deviceUDID;
- (NSString *)marketingModelName;
- (NSString *)modelIdentifier;
- (NSString *)serialNumber;

@end
