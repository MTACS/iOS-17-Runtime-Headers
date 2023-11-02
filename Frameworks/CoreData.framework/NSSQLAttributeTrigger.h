
@interface NSSQLAttributeTrigger : NSObject <NSSQLAttributeExtension> {
    NSSQLAttribute * _attribute;
    NSArray * _destinationAttributes;
    NSSQLEntity * _destinationEntity;
    NSSQLEntity * _entity;
    NSArray * _insertSQLStrings;
    NSMutableArray * _mBulkChangeStrings;
    NSMutableString * _mColumnChangedClause;
    NSMutableString * _mNewMatchingClause;
    NSMutableString * _mOfClause;
    NSMutableString * _mOldMatchingClause;
    NSMutableArray * _mSqlDropStrings;
    NSMutableString * _mToManyDecrementWhenClause;
    NSMutableString * _mToManyIncrementWhenClause;
    NSMutableString * _mToManyInnerFetchWhereClause;
    NSPredicate * _predicate;
    NSString * _predicateString;
    NSSQLRelationship * _relationship;
}

@property (nonatomic, readonly) NSArray *bulkUpdateSQLStrings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *dropSQLStrings;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *insertSQLStrings;
@property (readonly) Class superclass;

- (id)bulkUpdateSQLStrings;
- (void)dealloc;
- (id)dropSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (id)insertSQLStrings;
- (bool)isEqualToExtension:(id)arg1;
- (bool)validate:(id*)arg1;

@end
