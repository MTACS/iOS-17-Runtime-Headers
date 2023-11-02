
@interface FCTagRecordSource : FCRecordSource {
    unsigned long long  _desiredFieldOptions;
    NSArray * _nonLocalizableKeys;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

- (void).cxx_destruct;
- (id)alwaysLocalizedKeys;
- (unsigned long long)desiredFieldOptions;
- (id)experimentalizableKeys;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 desiredTagRecordFieldOptions:(unsigned long long)arg5;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 appActivityMonitor:(id)arg3 backgroundTaskable:(id)arg4 experimentalizableFieldsPostfix:(id)arg5 activeTreatmentID:(id)arg6;
- (id)localizableExperimentalizableKeys;
- (id)localizableKeys;
- (id)localizableLanguageSpecificKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)saveTagRecords:(id)arg1;
- (void)setDesiredFieldOptions:(unsigned long long)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
