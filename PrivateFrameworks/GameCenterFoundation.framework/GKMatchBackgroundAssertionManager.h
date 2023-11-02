
@interface GKMatchBackgroundAssertionManager : NSObject <RBSAssertionObserving> {
    void activeAssertion;
}

@property (nonatomic, retain) RBSAssertion *activeAssertion;

+ (id)shared;

- (void).cxx_destruct;
- (void)acquire;
- (id)activeAssertion;
- (void)assertionWillInvalidate:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)setActiveAssertion:(id)arg1;

@end
