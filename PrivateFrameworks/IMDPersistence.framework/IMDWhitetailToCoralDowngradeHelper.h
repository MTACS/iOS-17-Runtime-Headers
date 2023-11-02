
@interface IMDWhitetailToCoralDowngradeHelper : IMDDatabaseDowngradeHelper

+ (id)arrayOfCreateIndexesSQL;
+ (id)arrayOfCreateTablesSQL;
+ (id)arrayOfCreateTriggersSQL;
+ (id)arrayOfTableNames;

- (id)initWithPath:(id)arg1;

@end
