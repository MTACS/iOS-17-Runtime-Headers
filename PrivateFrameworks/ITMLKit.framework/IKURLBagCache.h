
@interface IKURLBagCache : NSObject <AMSBagProtocol> {
    NSString * _cachePath;
    NSDictionary * _existingDictionary;
    SSURLBag * _urlBag;
}

@property (nonatomic, readonly) NSString *cachePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *existingDictionary;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SSURLBag *urlBag;

+ (id)URLBagContext;
+ (id)sharedCache;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)_loadWithNotification:(bool)arg1 completion:(id /* block */)arg2;
- (id)_urlForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)cachePath;
- (void)checkTrustStatusForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)existingDictionary;
- (id)expirationDate;
- (id)init;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (bool)isTrustedURL:(id)arg1;
- (void)loadValueForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)profile;
- (id)profileVersion;
- (id)stringForKey:(id)arg1;
- (void)updateWithInvalidation:(bool)arg1;
- (id)urlBag;
- (id)valueForKey:(id)arg1;

@end
