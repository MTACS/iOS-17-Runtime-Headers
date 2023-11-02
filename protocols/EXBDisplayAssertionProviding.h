
@protocol EXBDisplayAssertionProviding <NSObject>

@required

- (EXBDisplayAssertion *)acquireAssertionForDisplay:(FBSDisplayIdentity *)arg1 level:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3 delegate:(id <EXBDisplayAssertionDelegate>)arg4;
- (void)activateAssertionsForDisplay:(FBSDisplayIdentity *)arg1;

@end
