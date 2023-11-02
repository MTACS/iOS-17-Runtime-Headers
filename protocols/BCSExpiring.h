
@protocol BCSExpiring <NSObject>

@required

- (NSDate *)expirationDate;
- (bool)isExpired;

@end
