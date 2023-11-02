
@protocol SAActivityHostingPrivate <SAActivityHosting>

@required

- (<SAAutomaticallyInvalidatable> *)systemManagedAlertingActivityAssertionWithReason:(NSString *)arg1;
- (NSArray *)temporallyOrderedAlertingActivityAssertions;

@end
