
@protocol BLSAssertionService <NSObject>

@required

- (oneway void)acquireAssertion:(id <BLSAssertionServiceResponding>)arg1;
- (oneway void)cancelAssertion:(id <BLSAssertionServiceResponding>)arg1 withError:(NSError *)arg2;
- (void)replaceWithService:(id <BLSAssertionService>)arg1;
- (oneway void)restartAssertionTimeoutTimer:(id <BLSAssertionServiceResponding>)arg1;

@end
