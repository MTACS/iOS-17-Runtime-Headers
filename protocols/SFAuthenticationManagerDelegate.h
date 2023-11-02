
@protocol SFAuthenticationManagerDelegate <NSObject>

@optional

- (void)manager:(SFAuthenticationManager *)arg1 didCompleteAuthenticationForSessionWithID:(NSUUID *)arg2;
- (void)manager:(SFAuthenticationManager *)arg1 didEnableAuthenticationForSessionWithID:(NSUUID *)arg2;
- (void)manager:(SFAuthenticationManager *)arg1 didFailAuthenticationForSessionWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(SFAuthenticationManager *)arg1 didFailToEnableDeviceForSessionWithID:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)manager:(SFAuthenticationManager *)arg1 didStartAuthenticationForSessionWithID:(NSUUID *)arg2;

@end
