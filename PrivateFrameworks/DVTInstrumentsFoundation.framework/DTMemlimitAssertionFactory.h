
@interface DTMemlimitAssertionFactory : NSObject

- (id /* block */)_removeMemoryLimitsForPid:(int)arg1;
- (id /* block */)assertionForPid:(int)arg1;

@end
