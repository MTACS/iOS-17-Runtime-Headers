
@interface ISAMSBagShim : NSObject <AMSBagProtocol> {
    ISURLBag * _URLBag;
    SSBag * _bag;
    long long  _type;
}

@property (nonatomic, retain) ISURLBag *URLBag;
@property (nonatomic, retain) SSBag *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, readonly, copy) NSString *profile;
@property (nonatomic, readonly, copy) NSString *profileVersion;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)URLBag;
- (id)URLForKey:(id)arg1;
- (id)_bagValueForKey:(id)arg1 valueType:(unsigned long long)arg2;
- (id)arrayForKey:(id)arg1;
- (id)bag;
- (id)boolForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithBag:(id)arg1;
- (id)initWithURLBag:(id)arg1;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (bool)isLoaded;
- (id)profile;
- (id)profileVersion;
- (void)setBag:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setURLBag:(id)arg1;
- (id)stringForKey:(id)arg1;
- (long long)type;

@end
