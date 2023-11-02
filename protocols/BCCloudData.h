
@protocol BCCloudData <NSObject>

@required

- (NSData *)ckSystemFields;
- (bool)deletedFlag;
- (long long)editGeneration;
- (NSString *)identifier;
- (void)incrementEditGeneration;
- (NSDate *)modificationDate;
- (<BCCloudDataPrivacyDelegate> *)privacyDelegate;
- (NSString *)recordType;
- (void)setPrivacyDelegate:(id <BCCloudDataPrivacyDelegate>)arg1;
- (long long)syncGeneration;
- (CKRecord *)systemFields;
- (NSString *)zoneName;

@end
