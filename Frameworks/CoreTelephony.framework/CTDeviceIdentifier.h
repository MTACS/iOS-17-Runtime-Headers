
@interface CTDeviceIdentifier : NSObject <NSSecureCoding> {
    NSString * _EID;
    NSString * _IMEI;
    NSString * _deviceName;
    unsigned long long  _deviceType;
    NSString * _idsDeviceId;
    NSString * _modelName;
}

@property (nonatomic, retain) NSString *EID;
@property (nonatomic, retain) NSString *IMEI;
@property (nonatomic, retain) NSString *deviceName;
@property (nonatomic) unsigned long long deviceType;
@property (nonatomic, retain) NSString *idsDeviceId;
@property (nonatomic, retain) NSString *modelName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)EID;
- (id)IMEI;
- (id)description;
- (id)deviceName;
- (unsigned long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)idsDeviceId;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceType:(unsigned long long)arg1 EID:(id)arg2 IMEI:(id)arg3 idsDeviceId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)modelName;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setEID:(id)arg1;
- (void)setIMEI:(id)arg1;
- (void)setIdsDeviceId:(id)arg1;
- (void)setModelName:(id)arg1;

@end
