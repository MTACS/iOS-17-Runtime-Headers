
@interface HDUserDomainConceptEducationContentSectionDataEntity : HDHealthEntity

+ (bool)addSectionDataToCodable:(id)arg1 educationContentSectionID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)enumerateSectionDataForEducationContentSectionID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3 enumerationHandler:(id /* block */)arg4;
+ (id)foreignKeys;
+ (bool)insertEducationContentSectionData:(id)arg1 sectionPersistentID:(long long)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)privateSubEntities;
+ (long long)protectionClass;

@end
