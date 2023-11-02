
@protocol INSaveHealthSampleIntentExport <NSObject, JSExport>

@required

- (id)init;
- (long long)objectType;
- (INDateComponentsRange *)recordDate;
- (NSArray *)sampleMetadatas;
- (void)setObjectType:(long long)arg1;
- (void)setRecordDate:(INDateComponentsRange *)arg1;
- (void)setSampleMetadatas:(NSArray *)arg1;
- (void)setUnit:(HKUnit *)arg1;
- (void)setValues:(NSArray *)arg1;
- (HKUnit *)unit;
- (NSArray *)values;

@end
