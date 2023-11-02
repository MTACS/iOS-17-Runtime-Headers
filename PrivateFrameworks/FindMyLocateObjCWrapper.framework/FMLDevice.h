
@interface FMLDevice : NSObject {
    NSString * _deviceName;
    NSString * _identifier;
    NSString * _idsDeviceId;
    bool  _isActive;
    bool  _isAutoMeCapable;
    bool  _isCompanion;
    bool  _isThisDevice;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsDeviceId;
@property (nonatomic) bool isActive;
@property (nonatomic) bool isAutoMeCapable;
@property (nonatomic) bool isCompanion;
@property (nonatomic) bool isThisDevice;

- (void).cxx_destruct;
- (id)comparisonIdentifier;
- (id)debugDescription;
- (id)description;
- (id)deviceName;
- (unsigned long long)hash;
- (id)identifier;
- (id)idsDeviceId;
- (id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 idsDeviceId:(id)arg3 isActive:(bool)arg4 isThisDevice:(bool)arg5 isCompanion:(bool)arg6 isAutoMeCapable:(bool)arg7;
- (bool)isActive;
- (bool)isAutoMeCapable;
- (bool)isCompanion;
- (bool)isEqual:(id)arg1;
- (bool)isThisDevice;
- (void)setDeviceName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDeviceId:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setIsAutoMeCapable:(bool)arg1;
- (void)setIsCompanion:(bool)arg1;
- (void)setIsThisDevice:(bool)arg1;

@end
