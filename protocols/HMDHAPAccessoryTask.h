
@protocol HMDHAPAccessoryTask <NSObject>

@required

- (void)execute;
- (double)executionTimeInterval;
- (NSNumber *)identifier;

@end
