
@interface PFMutualExclusionAssertion : NSObject {
    bool  _inCriticalSection;
}

- (void)enterCriticalSection;
- (void)leaveCriticalSection;
- (void)performCriticalSection:(id /* block */)arg1;

@end
