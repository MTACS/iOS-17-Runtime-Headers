
@protocol BCCloudDataPrivacyDelegate

@required

- (bool)establishedSalt;
- (NSString *)recordNameFromRecordType:(NSString *)arg1 identifier:(NSString *)arg2;

@end
