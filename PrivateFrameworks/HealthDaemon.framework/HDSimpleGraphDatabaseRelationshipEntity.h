
@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity

+ (bool)addRelationshipWithType:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 version:(long long)arg4 slots:(unsigned long long)arg5 database:(id)arg6 error:(id*)arg7;
+ (const struct { id x1; id x2; unsigned char x3; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (bool)deleteRelationshipsWithSubjectID:(long long)arg1 lessThanVersion:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)deleteRelationshipsWithSubjectID:(long long)arg1 relationshipID:(long long)arg2 database:(id)arg3 error:(id*)arg4;
+ (bool)enumerateRelationshipsWithPredicate:(id)arg1 skipDeleted:(bool)arg2 database:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (bool)enumerateRelationshipsWithSubjectID:(long long)arg1 skipDeleted:(bool)arg2 database:(id)arg3 error:(id*)arg4 enumerationHandler:(id /* block */)arg5;
+ (id)foreignKeys;
+ (id)indices;
+ (long long)maxVersion:(long long*)arg1 slots:(unsigned long long*)arg2 subjectNodeID:(long long)arg3 relationshipID:(long long)arg4 database:(id)arg5 error:(id*)arg6;
+ (bool)removeRelationshipWithType:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)uniquedColumns;
+ (bool)updateSlots:(unsigned long long)arg1 subjectNodeID:(long long)arg2 relationshipID:(long long)arg3 database:(id)arg4 error:(id*)arg5;

- (id)init;

@end
