
@interface SBKStoreURLBagContext : NSObject <NSCopying, NSMutableCopying> {
    SSURLBag * _bag;
    NSString * _domain;
    bool  _domainDisabled;
    double  _pollingIntervalInSeconds;
    NSURL * _pullAllKeyValueRequestURL;
    NSURL * _pullKeyValueRequestURL;
    NSURL * _pushAllKeyValueRequestURL;
    NSURL * _pushKeyValueRequestURL;
    NSURL * _syncRequestURL;
}

@property (nonatomic, retain) SSURLBag *bag;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool domainDisabled;
@property (nonatomic) double pollingIntervalInSeconds;
@property (nonatomic, retain) NSURL *pullAllKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pullKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pushAllKeyValueRequestURL;
@property (nonatomic, retain) NSURL *pushKeyValueRequestURL;
@property (nonatomic, retain) NSURL *syncRequestURL;

+ (id)ExtrasDomainIdentifier;
+ (id)UPPDomainIdentifier;
+ (void)_findFirstValueInBag:(id)arg1 keyEnumerator:(id)arg2 valueTransformer:(id /* block */)arg3 defaultValue:(id)arg4 completionBlock:(id /* block */)arg5;
+ (void)enumerateRequestURLBagKeysWithBlock:(id /* block */)arg1;
+ (void)loadBagContextFromURLBag:(id)arg1 domain:(id)arg2 completionBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_initWithDomain:(id)arg1 syncRequestURL:(id)arg2 domainDisabled:(bool)arg3;
- (id)bag;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (bool)domainDisabled;
- (id)init;
- (id)initWithBag:(id)arg1 domain:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)pollingIntervalInSeconds;
- (id)pullAllKeyValueRequestURL;
- (id)pullKeyValueRequestURL;
- (id)pushAllKeyValueRequestURL;
- (id)pushKeyValueRequestURL;
- (void)setBag:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setDomainDisabled:(bool)arg1;
- (void)setPollingIntervalInSeconds:(double)arg1;
- (void)setPullAllKeyValueRequestURL:(id)arg1;
- (void)setPullKeyValueRequestURL:(id)arg1;
- (void)setPushAllKeyValueRequestURL:(id)arg1;
- (void)setPushKeyValueRequestURL:(id)arg1;
- (void)setSyncRequestURL:(id)arg1;
- (id)syncRequestURL;

@end
