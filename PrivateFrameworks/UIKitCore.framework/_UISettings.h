
@interface _UISettings : PTSettings

+ (id)_archiveDictionaryForObject:(id)arg1 ofCustomClass:(Class)arg2;
+ (id)_archiveDictionaryForValue:(id)arg1 ofStructType:(id)arg2;
+ (id)_colorFromDictionary:(id)arg1;
+ (id)_dictionaryForColor:(id)arg1;
+ (id)_dictionaryForFont:(id)arg1;
+ (id)_fontFromDictionary:(id)arg1;
+ (id)_objectOfCustomClass:(Class)arg1 fromArchiveDictionary:(id)arg2;
+ (bool)_supportsArchivingCustomClass:(Class)arg1;
+ (bool)_supportsArchivingStructType:(id)arg1;
+ (id)_valueOfStructType:(id)arg1 fromArchiveDictionary:(id)arg2;
+ (id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2;

- (bool)archiveToFile:(id)arg1 error:(id*)arg2;
- (id)initWithDefaultValues;
- (bool)restoreFromArchiveFile:(id)arg1 error:(id*)arg2;
- (void)setValuesFromModel:(id)arg1;

@end
