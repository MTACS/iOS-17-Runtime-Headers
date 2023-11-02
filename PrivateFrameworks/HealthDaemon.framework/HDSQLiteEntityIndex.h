
@interface HDSQLiteEntityIndex : NSObject {
    NSDictionary * _collationColumnMapping;
    NSArray * _columns;
    Class  _entityClass;
    NSString * _name;
    NSString * _predicateString;
    bool  _unique;
}

@property (nonatomic, readonly) NSDictionary *collationColumnMapping;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly, copy) NSString *disambiguatedName;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *predicateString;
@property (getter=isUnique, nonatomic, readonly) bool unique;

- (void).cxx_destruct;
- (id)collationColumnMapping;
- (id)columns;
- (id)creationSQL;
- (id)disambiguatedName;
- (Class)entityClass;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 collationForColumn:(id)arg4 unique:(bool)arg5 predicateString:(id)arg6;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(bool)arg4 predicateString:(id)arg5;
- (bool)isUnique;
- (id)name;
- (id)predicateString;

@end
