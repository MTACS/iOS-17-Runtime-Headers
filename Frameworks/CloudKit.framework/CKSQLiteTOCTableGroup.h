
@interface CKSQLiteTOCTableGroup : CKSQLiteSharedTableGroup {
    CKSQLiteTOCTable * _tocTable;
    CKSQLiteTOCTableGroupTable * _tocTableGroup;
}

+ (id)TOCTableGroupInDatabase:(id)arg1;
+ (id)bootstrapNewDatabase:(id)arg1;
+ (double)expirationTime;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2 database:(id)arg3;
- (id)tocTable;
- (id)tocTableGroup;
- (id)tocTableGroupInitValue;
- (id)tocTableGroupTable;

@end
