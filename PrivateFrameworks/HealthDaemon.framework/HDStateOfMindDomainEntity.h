
@interface HDStateOfMindDomainEntity : HDHealthEntity

+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)domainsForObjectID:(long long)arg1 transaction:(id)arg2 error:(id*)arg3;
+ (id)foreignKeys;
+ (bool)insertDomainsForObjectID:(long long)arg1 domains:(id)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)predicateForDomainsForObjectID:(long long)arg1;
+ (long long)protectionClass;

@end
