
@interface ML3AggregateQuery : ML3Query <NSSecureCoding> {
    Class  _aggregateEntityClass;
    NSString * _foreignPersistentIDProperty;
    bool  _isFastCountable;
}

@property (nonatomic, readonly) Class aggregateEntityClass;
@property (nonatomic, readonly) NSString *foreignPersistentIDProperty;
@property (nonatomic) bool isFastCountable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)aggregateEntityClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countOfEntities;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (bool)hasEntities;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3;
- (bool)isFastCountable;
- (id)persistentIDProperty;
- (bool)sectionsPersistentIDColumnIsDistinct;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(bool)arg2;
- (void)setIsFastCountable:(bool)arg1;

@end
