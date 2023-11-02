
@interface FCChannelMembershipRecordSource : FCRecordSource

- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
