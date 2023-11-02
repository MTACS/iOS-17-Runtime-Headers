
@interface COClusterRealm : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSPredicate * _predicate;
    MGGroupQuery * _query;
    id /* block */  _updateHandler;
    bool  _updateHandlerInvoked;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly) MGGroupQuery *query;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;
@property (nonatomic, readonly) bool updateHandlerInvoked;

+ (id)realmWithMediaGroup:(id)arg1;
+ (id)realmWithPredicate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleQueryResult:(id)arg1 error:(id)arg2;
- (id)_identifierForGroupResult:(id)arg1;
- (id)_initWithPredicate:(id)arg1;
- (void)_invokeUpdateHandler;
- (void)_setIdentifierLocked:(id)arg1;
- (void)_setUpdateHandlerLocked:(id /* block */)arg1;
- (void)_startQuery;
- (void)_withLock:(id /* block */)arg1;
- (void)activate:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClusterRealm:(id)arg1;
- (id)predicate;
- (id)query;
- (id /* block */)updateHandler;
- (bool)updateHandlerInvoked;

@end
