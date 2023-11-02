
@interface MCMApplicationTerminationAssertion : NSObject {
    RBSTerminationAssertion * _termAssertion;
}

@property (nonatomic, retain) RBSTerminationAssertion *termAssertion;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 reason:(id)arg2;
- (void)invalidate;
- (void)setTermAssertion:(id)arg1;
- (id)termAssertion;

@end
