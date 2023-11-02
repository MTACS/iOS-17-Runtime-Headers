
@protocol GEOServerCondition <NSObject, NSCoding>

@required

- (long long)conditionType;
- (NSDate *)expirationDate;
- (NSArray *)subconditions;

@end
