
@interface ICAMSBagAdapter : NSObject <AMSBagProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingBagValuePromises;
    ICStoreRequestContext * _requestContext;
    ICURLBag * _urlBag;
    NSError * _urlBagLoadingError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (readonly) Class superclass;

+ (bool)_value:(id)arg1 matchesExpectedType:(unsigned long long)arg2;
+ (id)_valueForBagKey:(id)arg1 valueType:(unsigned long long)arg2 fromURLBag:(id)arg3 urlBagLoadingError:(id)arg4 valueRetrievingError:(id*)arg5;
+ (id)_valueFromICURLBag:(id)arg1 forKeyPath:(id)arg2 valueType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)_didFinishLoadingBag:(id)arg1 error:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithRequestContext:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (id)profile;
- (id)profileVersion;
- (id)requestContext;
- (id)stringForKey:(id)arg1;

@end
