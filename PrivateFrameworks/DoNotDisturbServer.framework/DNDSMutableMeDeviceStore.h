
@interface DNDSMutableMeDeviceStore : DNDSMeDeviceStore

@property (nonatomic, copy) NSString *meDeviceName;
@property (nonatomic, copy) NSNumber *meDeviceStatus;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setMeDeviceName:(id)arg1;
- (void)setMeDeviceStatus:(id)arg1;

@end
