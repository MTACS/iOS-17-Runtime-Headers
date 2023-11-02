
@interface MTFrozenBag : NSObject <AMSBagProtocol> {
    NSDictionary * _config;
    NSString * _profile;
    NSString * _profileVersion;
}

@property (nonatomic, copy) NSDictionary *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) AMSProcessInfo *processInfo;
@property (nonatomic, copy) NSString *profile;
@property (nonatomic, copy) NSString *profileVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)boolForKey:(id)arg1;
- (id)config;
- (void)createSnapshotWithCompletion:(id /* block */)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (id)expirationDate;
- (id)initWithConfig:(id)arg1;
- (id)initWithProfile:(id)arg1 profileVersion:(id)arg2 config:(id)arg3;
- (id)integerForKey:(id)arg1;
- (bool)isExpired;
- (id)profile;
- (id)profileVersion;
- (void)setConfig:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileVersion:(id)arg1;
- (id)stringForKey:(id)arg1;

@end
