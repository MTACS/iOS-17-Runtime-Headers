
@interface IDSFamilyDevice : NSObject {
    NSString * _buildVersion;
    NSString * _deviceColor;
    NSString * _deviceName;
    long long  _deviceType;
    NSString * _deviceUniqueID;
    NSString * _ownerHandle;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceColor;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (nonatomic, retain) NSString *deviceUniqueID;
@property (nonatomic, retain) NSString *ownerHandle;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)deviceColor;
- (id)deviceName;
- (long long)deviceType;
- (id)deviceUniqueID;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOwnerHandle:(id)arg1 deviceName:(id)arg2 deviceType:(long long)arg3 deviceColor:(id)arg4 buildVersion:(id)arg5 deviceUniqueID:(id)arg6;
- (id)ownerHandle;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceColor:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceType:(long long)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setOwnerHandle:(id)arg1;

@end
