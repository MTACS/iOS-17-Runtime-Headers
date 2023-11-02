
@protocol BLSXPCAssertionServiceClientInterface <NSObject>

@required

- (oneway void)assertion:(BLSAssertionIdentifier *)arg1 failedToAcquireWithError:(NSError *)arg2;
- (oneway void)assertionAcquired:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertionDidCancel:(BLSAssertionIdentifier *)arg1 withError:(NSError *)arg2;
- (oneway void)assertionPaused:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertionResumed:(BLSAssertionIdentifier *)arg1;
- (oneway void)assertionWillCancel:(BLSAssertionIdentifier *)arg1;

@end
