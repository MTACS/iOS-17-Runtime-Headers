
@protocol MSBackoffManagerDelegate <NSObject>

@required

- (void)MSBackoffManagerDidUpdateNextExpiryDate:(MSBackoffManager *)arg1;

@end
