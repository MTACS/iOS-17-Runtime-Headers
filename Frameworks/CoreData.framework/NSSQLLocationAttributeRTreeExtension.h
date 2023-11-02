
@interface NSSQLLocationAttributeRTreeExtension : NSObject <NSSQLAttributeExtension> {
    NSAttributeDescription * _attributeDescription;
    NSString * _attributeName;
    NSArray * _bulkUpdateSQLStrings;
    NSArray * _components;
    NSArray * _dropSQLStrings;
    NSArray * _insertSQLStrings;
    NSAttributeDescription * _latProp;
    NSAttributeDescription * _longProp;
    NSString * _rtreeTableName;
    NSSQLEntity * _sqlEntity;
    NSObject * _userInfoObject;
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
