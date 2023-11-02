
@protocol SPConnectionMaterial <NSObject>

@required

- (NSData *)address;
- (NSData *)connectionToken;
- (NSDateInterval *)dateInterval;
- (NSNumber *)primaryIndex;
- (NSNumber *)secondaryIndex;
- (long long)type;

@end
