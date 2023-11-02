
@interface HDSQLiteTrigger : NSObject {
    Class  _entityClass;
    long long  _event;
    NSString * _name;
    NSString * _predicateString;
    NSString * _triggerString;
}

@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *predicateString;
@property (nonatomic, readonly, copy) NSString *triggerString;

- (void).cxx_destruct;
- (id)creationSQL;
- (id)description;
- (id)disambiguatedName;
- (Class)entityClass;
- (long long)event;
- (id)init;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 triggerEvent:(long long)arg3 predicateString:(id)arg4 triggerString:(id)arg5;
- (id)name;
- (id)predicateString;
- (id)triggerString;

@end
