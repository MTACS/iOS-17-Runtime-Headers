
@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType> {
    NSISO8601DateFormatter * _dateFormatter;
    FCJSONRecordSourceSchema * _schema;
}

@property (nonatomic, copy) NSISO8601DateFormatter *dateFormatter;
@property (nonatomic, copy) FCJSONRecordSourceSchema *schema;

- (void).cxx_destruct;
- (id)alwaysLocalizedKeys;
- (id)dateFormatter;
- (void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchRecordsWithIDs:(id)arg1 completion:(id /* block */)arg2;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5;
- (id)keyValueRepresentationOfRecord:(id)arg1;
- (id)localizableKeys;
- (unsigned long long)lowThresholdDataSizeLimit;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)recordIDPrefixes;
- (id)recordType;
- (id)schema;
- (void)setDateFormatter:(id)arg1;
- (void)setSchema:(id)arg1;
- (id)storeFilename;
- (unsigned long long)storeVersion;

@end
