
@interface AMSODISession : NSObject {
    unsigned long long  _accountType;
    <AMSBagProtocol> * _bag;
    NSString * _bundleIdentifier;
    NSString * _cacheIdentifier;
    NSLock * _lock;
    NSString * _sessionIdentifier;
}

@property (nonatomic, readonly) unsigned long long accountType;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *cacheIdentifier;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;

+ (bool)provideFeedbackOnPayloadOutcome:(unsigned long long)arg1 cacheIdentifier:(id)arg2 bag:(id)arg3;
+ (bool)shouldUseODIWithBag:(id)arg1;

- (void).cxx_destruct;
- (id)_createODISession;
- (unsigned long long)accountType;
- (id)bag;
- (id)bundleIdentifier;
- (id)cacheIdentifier;
- (id)getAssessment;
- (id)initWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bag:(id)arg3;
- (id)initWithSessionIdentifier:(id)arg1 accountType:(unsigned long long)arg2 bundleIdentifier:(id)arg3 bag:(id)arg4;
- (id)lock;
- (id)sessionIdentifier;
- (void)setBag:(id)arg1;
- (void)setCacheIdentifier:(id)arg1;
- (void)setLock:(id)arg1;
- (bool)updateWithAttributes:(id)arg1;

@end
