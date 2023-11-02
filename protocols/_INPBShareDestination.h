
@protocol _INPBShareDestination <NSObject>

@required

- (int)StringAsDeviceType:(NSString *)arg1;
- (_INPBContact *)contact;
- (int)deviceType;
- (NSString *)deviceTypeAsString:(int)arg1;
- (bool)hasContact;
- (bool)hasDeviceType;
- (void)setContact:(_INPBContact *)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;

@end
