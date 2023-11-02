
@protocol CNTCCSettings

@required

- (CNTCCAppAuthorizationRecord *)authorizationRecordForBundleIdentifier:(NSString *)arg1;
- (NSArray *)authorizationRecords;
- (void)saveAuthorizationRecord:(CNTCCAppAuthorizationRecord *)arg1;

@end
