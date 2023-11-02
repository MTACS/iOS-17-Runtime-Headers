
@interface IMDAbstractDatabaseDowngrader : IMAbstractDatabaseArchiver

- (bool)copyDatabase:(id /* block */)arg1;
- (id)createDowngradeHelper;

@end
