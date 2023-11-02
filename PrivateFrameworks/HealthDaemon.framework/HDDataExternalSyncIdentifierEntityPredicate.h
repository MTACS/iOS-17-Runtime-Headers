
@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate <HDMetadataPredicate> {
    bool  _matchObjectsWithoutKey;
    HDSQLitePredicate * _valuePredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 exists:(bool)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (id)description;

@end
