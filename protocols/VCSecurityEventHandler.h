
@protocol VCSecurityEventHandler <NSObject>

@required

- (void)didEncryptionKeyRollTimeout;
- (bool)handleEncryptionInfoChange:(NSDictionary *)arg1;
- (void)resetDecryptionTimeout;

@end
