
@interface TRINamespaceDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (bool)_enumerateDynamicNamespaceRecordsWithWhereClause:(id)arg1 bind:(id /* block */)arg2 block:(id /* block */)arg3;
- (bool)addOrUpdateDynamicNamespaceWithName:(id)arg1 compatibilityVersion:(unsigned int)arg2 defaultsFileURL:(id)arg3 teamId:(id)arg4 appContainerId:(id)arg5 appContainerType:(long long)arg6 cloudKitContainer:(int)arg7;
- (id)dynamicNamespaceRecordWithNamespaceName:(id)arg1;
- (bool)enumerateAppContainerIdsForContainer:(int)arg1 block:(id /* block */)arg2;
- (bool)enumerateDynamicNamespaceRecordsForContainer:(int)arg1 teamId:(id)arg2 block:(id /* block */)arg3;
- (bool)enumerateDynamicNamespaceRecordsWithBlock:(id /* block */)arg1;
- (bool)hasUnfetchedNamespaceForTeamId:(id)arg1;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (struct { unsigned long long x1; })removeDynamicNamespaceRecordWithNamespaceName:(id)arg1;
- (struct { unsigned long long x1; })setFetched:(bool)arg1 forDynamicNamespaceName:(id)arg2;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end
