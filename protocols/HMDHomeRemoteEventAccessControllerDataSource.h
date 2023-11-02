
@protocol HMDHomeRemoteEventAccessControllerDataSource <NSObject>

@required

- (bool)isAppleMediaAccessory:(NSUUID *)arg1;
- (bool)isMediaSystem:(NSUUID *)arg1;
- (bool)isSidekickAccessory:(NSUUID *)arg1;

@end
