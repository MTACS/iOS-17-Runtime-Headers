
@protocol MKFGuestAccessCode <MKFHomeAccessCode, MKFGuestAccessCodePublicExtensions>

@required

- (MKFGuestAccessCodeDatabaseID *)databaseID;
- (NSUUID *)hh2ModelID;
- (<MKFHome> *)home;
- (NSString *)label;
- (void)setHh2ModelID:(NSUUID *)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setUserUniqueIDForAccessories:(NSNumber *)arg1;
- (NSNumber *)userUniqueIDForAccessories;

@end
