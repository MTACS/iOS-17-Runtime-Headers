
@interface HDUserDomainConceptEducationContentSectionDataStringsEntity : HDHealthEntity

+ (bool)addSectionDataStringsToCodable:(id)arg1 sectionDataID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateSectionDataStringsForEducationContentSectionDataID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)insertEducationContentSectionDataString:(id)arg1 sectionDataPersistentID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (long long)protectionClass;

@end
