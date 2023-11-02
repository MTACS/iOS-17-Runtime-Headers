
@interface PPSSQLMetadataStore : NSObject

+ (struct sqlite3 { }*)openReadConnection:(id)arg1;
+ (bool)performQuery:(id)arg1 conn:(struct sqlite3 { }*)arg2;
+ (id)performReadQuery:(id)arg1 conn:(struct sqlite3 { }*)arg2;
+ (long long)queryIDForSubsystem:(id)arg1 category:(id)arg2 conn:(struct sqlite3 { }*)arg3;
+ (id)queryMetadataForFKID:(long long)arg1 conn:(struct sqlite3 { }*)arg2;
+ (id)queryMetadataForFKID:(long long)arg1 name:(id)arg2 conn:(struct sqlite3 { }*)arg3;
+ (id)queryMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3;
+ (id)queryMetadataHistoryForFilepath:(id)arg1 subsystem:(id)arg2 category:(id)arg3 name:(id)arg4;

@end
