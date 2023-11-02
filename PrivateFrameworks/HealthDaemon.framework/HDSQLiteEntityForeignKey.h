
@interface HDSQLiteEntityForeignKey : NSObject {
    long long  _deletionAction;
    Class  _entityClass;
    bool  _isDeferred;
    NSString * _property;
}

@property (nonatomic, readonly) long long deletionAction;
@property (nonatomic, readonly) Class entityClass;
@property (nonatomic, readonly) bool isDeferred;
@property (nonatomic, readonly, copy) NSString *property;

- (void).cxx_destruct;
- (id)creationSQL;
- (long long)deletionAction;
- (Class)entityClass;
- (id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3;
- (id)initWithEntityClass:(Class)arg1 property:(id)arg2 deletionAction:(long long)arg3 isDeferred:(bool)arg4;
- (bool)isDeferred;
- (id)property;

@end
