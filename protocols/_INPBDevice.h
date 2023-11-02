
@protocol _INPBDevice <NSObject>

@required

- (int)StringAsDeviceCategory:(NSString *)arg1;
- (int)deviceCategory;
- (NSString *)deviceCategoryAsString:(int)arg1;
- (NSString *)deviceModel;
- (NSString *)deviceName;
- (bool)hasDeviceCategory;
- (bool)hasDeviceModel;
- (bool)hasDeviceName;
- (void)setDeviceCategory:(int)arg1;
- (void)setDeviceModel:(NSString *)arg1;
- (void)setDeviceName:(NSString *)arg1;
- (void)setHasDeviceCategory:(bool)arg1;

@end
