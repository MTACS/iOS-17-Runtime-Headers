
@protocol BiometricKitUIEnrollResultDelegate <NSObject>

@required

- (void)enrollResult:(int)arg1 bkIdentity:(BKIdentity *)arg2;

@optional

- (void)enrollResult:(int)arg1 identity:(BiometricKitIdentity *)arg2;
- (void)generateAuthToken;

@end
