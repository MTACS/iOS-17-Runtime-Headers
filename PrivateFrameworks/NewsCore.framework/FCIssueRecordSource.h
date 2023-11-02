
@interface FCIssueRecordSource : FCRecordSource

+ (id)_URLStringForCoverImageKey:(id)arg1 inRecord:(id)arg2;
+ (bool)_useTaggedImages;

- (id)alwaysLocalizedKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
