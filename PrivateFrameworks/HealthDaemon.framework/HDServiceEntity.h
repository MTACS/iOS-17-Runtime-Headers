
@interface HDServiceEntity : HDHealthEntity

+ (id)allServicesWithProfile:(id)arg1 error:(id*)arg2;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(id /* block */)arg5;
+ (bool)healthUpdatesEnabledForDevice:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertOrUpdateService:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (long long)protectionClass;
+ (bool)setHealthUpdatesEnabled:(bool)arg1 forDevice:(id)arg2 inDatabase:(id)arg3 error:(id*)arg4;
+ (id)tableAliases;
+ (id)uniquedColumns;

@end
