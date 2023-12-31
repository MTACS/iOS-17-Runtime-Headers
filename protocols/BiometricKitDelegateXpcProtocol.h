
@protocol BiometricKitDelegateXpcProtocol <NSObject>

@required

- (void)enrollFeedback:(NSData *)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(BiometricKitIdentity *)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)enrollUpdate:(NSData *)arg1 client:(unsigned long long)arg2;
- (void)homeButtonPressed:(unsigned long long)arg1;
- (bool)isDelegate;
- (void)matchResult:(BiometricKitIdentity *)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2;
- (void)templateUpdate:(BiometricKitIdentity *)arg1 details:(NSDictionary *)arg2 client:(unsigned long long)arg3;
- (void)touchIDButtonPressed:(bool)arg1 client:(unsigned long long)arg2;

@end
