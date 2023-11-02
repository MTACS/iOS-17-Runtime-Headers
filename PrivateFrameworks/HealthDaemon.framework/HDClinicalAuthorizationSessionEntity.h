
@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity

+ (id)checkConstraints;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)joinClausesForProperty:(id)arg1;
+ (long long)protectionClass;

@end
