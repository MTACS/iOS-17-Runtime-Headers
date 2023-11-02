
@protocol HDSPProcessStateManagerDelegate

@required

- (void)processDidBecomeSuspended:(int)arg1;
- (void)processNoLongerSuspended:(int)arg1;

@end
