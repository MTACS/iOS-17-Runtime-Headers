
@interface HDDataDeletionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    Class  _entityClass;
    bool  _failIfNotFound;
    bool  _generateDeletedObjects;
    bool  _notifyObservers;
    bool  _preserveExactStartAndEndDates;
    id /* block */  _recursiveDeleteAuthorizationBlock;
    NSString * _restrictedSourceBundleIdentifier;
    bool  _secureDelete;
    bool  _userRequested;
}

@property (nonatomic, copy) Class entityClass;
@property (nonatomic) bool failIfNotFound;
@property (nonatomic) bool generateDeletedObjects;
@property (nonatomic) bool notifyObservers;
@property (nonatomic) bool preserveExactStartAndEndDates;
@property (nonatomic, copy) id /* block */ recursiveDeleteAuthorizationBlock;
@property (nonatomic, copy) NSString *restrictedSourceBundleIdentifier;
@property (nonatomic) bool secureDelete;
@property (nonatomic) bool userRequested;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)entityClass;
- (bool)failIfNotFound;
- (bool)generateDeletedObjects;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)notifyObservers;
- (bool)preserveExactStartAndEndDates;
- (id /* block */)recursiveDeleteAuthorizationBlock;
- (id)restrictedSourceBundleIdentifier;
- (bool)secureDelete;
- (void)setEntityClass:(Class)arg1;
- (void)setFailIfNotFound:(bool)arg1;
- (void)setGenerateDeletedObjects:(bool)arg1;
- (void)setNotifyObservers:(bool)arg1;
- (void)setPreserveExactStartAndEndDates:(bool)arg1;
- (void)setRecursiveDeleteAuthorizationBlock:(id /* block */)arg1;
- (void)setRestrictedSourceBundleIdentifier:(id)arg1;
- (void)setSecureDelete:(bool)arg1;
- (void)setUserRequested:(bool)arg1;
- (bool)userRequested;

@end
