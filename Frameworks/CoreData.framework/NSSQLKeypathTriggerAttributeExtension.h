
@interface NSSQLKeypathTriggerAttributeExtension : NSObject <NSSQLAttributeExtension> {
    NSSQLAttribute * _attribute;
    NSArray * _bulkUpdateSQLStrings;
    NSSQLRelationship * _countedRelationship;
    NSArray * _dropSQLStrings;
    NSSQLEntity * _entity;
    NSArray * _insertSQLStrings;
    NSString * _keypath;
    id  _objectFromUserInfo;
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
- (id)description;
- (id)dropSQLStrings;
- (id)initWithObjectFromUserInfo:(id)arg1 onAttributeNamed:(id)arg2 onEntity:(id)arg3;
- (id)insertSQLStrings;
- (bool)isEqualToExtension:(id)arg1;
- (bool)validate:(id*)arg1;

@end
