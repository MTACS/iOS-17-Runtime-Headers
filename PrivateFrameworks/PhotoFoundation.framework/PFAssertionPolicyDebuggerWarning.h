
@interface PFAssertionPolicyDebuggerWarning : NSObject <PFAssertionPolicyHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)notifyAssertion:(id)arg1;

@end
