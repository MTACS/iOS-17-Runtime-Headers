
@interface AMSContractBagShim : NSObject <AMSBagProtocol> {
    NSObject * _bagContract;
}

@property (nonatomic, retain) NSObject *bagContract;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;

+ (id)_callSelector:(SEL)arg1 onBagContract:(id)arg2;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForBagKey:(id)arg1 bagValueType:(unsigned long long)arg2;
- (SEL)_selectorForBagKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)bagContract;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithBagContract:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)profile;
- (id)profileVersion;
- (void)setBagContract:(id)arg1;
- (id)stringForKey:(id)arg1;

@end
