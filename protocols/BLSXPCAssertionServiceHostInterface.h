
@protocol BLSXPCAssertionServiceHostInterface <NSObject>

@required

- (oneway void)acquireAssertion:(BLSAssertionIdentifier *)arg1;
- (BLSAssertionIdentifier *)acquireAssertionForDescriptor:(BLSAssertionDescriptor *)arg1 error:(out id*)arg2;
- (oneway void)cancelAssertion:(BLSAssertionIdentifier *)arg1 withError:(NSError *)arg2;
- (oneway void)destroyAssertion:(BLSAssertionIdentifier *)arg1;
- (oneway void)restartAssertionTimeoutTimer:(BLSAssertionIdentifier *)arg1;

@end
