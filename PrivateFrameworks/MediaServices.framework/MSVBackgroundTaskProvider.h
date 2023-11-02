
@interface MSVBackgroundTaskProvider : NSObject <MSVBackgroundTaskProviding> {
    BKSProcessAssertion * _assertion;
    long long  _assertionCount;
    unsigned int  _assertionInvalidationNonce;
    unsigned long long  _lastIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _timeoutGuards;
}

@property (nonatomic) unsigned long long lastIdentifier;
@property (nonatomic, retain) NSMutableDictionary *timeoutGuards;

+ (id)sharedProvider;

- (void).cxx_destruct;
- (bool)_locked_acquireAssertion;
- (void)_locked_releaseAssertion;
- (unsigned long long)beginTaskWithExpirationHandler:(id /* block */)arg1;
- (unsigned long long)beginTaskWithName:(id)arg1 expirationHandler:(id /* block */)arg2;
- (void)endTask:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)lastIdentifier;
- (void)setLastIdentifier:(unsigned long long)arg1;
- (void)setTimeoutGuards:(id)arg1;
- (id)timeoutGuards;

@end
