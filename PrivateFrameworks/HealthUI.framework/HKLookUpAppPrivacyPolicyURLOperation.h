
@interface HKLookUpAppPrivacyPolicyURLOperation : NSOperation {
    NSString * _bundleIdentifier;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    AMSPromise * _outstandingPromise;
    NSURL * _privacyPolicyURL;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (copy) NSError *error;
@property (getter=isExecuting) bool executing;
@property (getter=isFinished) bool finished;
@property (retain) AMSPromise *outstandingPromise;
@property (copy) NSURL *privacyPolicyURL;

- (void).cxx_destruct;
- (void)_performLookup;
- (id)bundleIdentifier;
- (void)cancel;
- (id)debugDescription;
- (id)description;
- (id)error;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)outstandingPromise;
- (id)privacyPolicyURL;
- (void)setError:(id)arg1;
- (void)setExecuting:(bool)arg1;
- (void)setFinished:(bool)arg1;
- (void)setOutstandingPromise:(id)arg1;
- (void)setPrivacyPolicyURL:(id)arg1;
- (void)start;

@end
