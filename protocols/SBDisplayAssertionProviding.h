
@protocol SBDisplayAssertionProviding <NSObject>

@required

- (SBDisplayAssertion *)acquireAssertionForDisplay:(FBSDisplayIdentity *)arg1 level:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3 delegate:(id <SBDisplayAssertionDelegate>)arg4;
- (void)activateAssertionsForDisplay:(FBSDisplayIdentity *)arg1;

@end
