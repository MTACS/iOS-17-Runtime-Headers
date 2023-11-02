
@interface BCCloudDataNullPrivacyDelegate : NSObject <BCCloudDataPrivacyDelegate>

+ (id)nullPrivacyDelegate;

- (bool)establishedSalt;
- (id)recordNameFromRecordType:(id)arg1 identifier:(id)arg2;

@end
