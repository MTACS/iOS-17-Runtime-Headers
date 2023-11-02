
@protocol MediaServiceUpdatedClientDelegate <NSObject>

@required

- (void)serviceSettingDidUpdate:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;
- (void)userDidRemoveService:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;
- (void)userDidUpdateDefaultService:(MediaService *)arg1 homeUserID:(NSUUID *)arg2;

@end
