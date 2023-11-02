
@protocol ICMutableMusicLibraryAuthToken <NSObject>

@required

- (NSString *)deviceGUID;
- (NSDate *)expirationDate;
- (void)setDeviceGUID:(NSString *)arg1;
- (void)setExpirationDate:(NSDate *)arg1;
- (void)setToken:(NSString *)arg1;
- (NSString *)token;

@end
