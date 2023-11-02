
@protocol HMAccessCodeModificationRequestValue <NSObject>

@required

- (NSUUID *)accessoryUUID;
- (NSString *)guestName;
- (void)setGuestName:(NSString *)arg1;
- (void)setUserUUID:(NSUUID *)arg1;
- (NSUUID *)userUUID;

@end
