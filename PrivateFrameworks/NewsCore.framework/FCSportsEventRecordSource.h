
@interface FCSportsEventRecordSource : FCRecordSource

+ (id)defaultCachePolicy;
+ (bool)recognizesRecordID:(id)arg1;
+ (id)recordIDPrefixes;

- (unsigned long long)highThresholdDataSizeLimit;
- (id)localizableKeys;
- (id)localizableLanguageSpecificKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
