
@protocol HomePodSettings.DeviceModelMessaging <NSSecureCoding>

@required

- (NSString *)groupID;
- (NSString *)groupName;
- (NSString *)model;
- (NSString *)name;
- (NSString *)pairID;
- (NSString *)pairName;
- (NSString *)roomID;
- (NSString *)roomName;
- (void)setGroupID:(NSString *)arg1;
- (void)setGroupName:(NSString *)arg1;
- (void)setModel:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setPairID:(NSString *)arg1;
- (void)setPairName:(NSString *)arg1;
- (void)setRoomID:(NSString *)arg1;
- (void)setRoomName:(NSString *)arg1;

@end
