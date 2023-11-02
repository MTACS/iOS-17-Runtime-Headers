
@protocol DMTEnrollmentPrerequisiteReceiving <NSObject>

@required

- (void)setNetworkCredential:(DMTNetworkCredential *)arg1 networkPayload:(NSData *)arg2 enrollmentNonce:(NSString *)arg3 postEnrollmentBehavior:(long long)arg4 organizationName:(NSString *)arg5 organizationType:(long long)arg6 mdmServerName:(NSString *)arg7 networkConfiguration:(long long)arg8;

@end
