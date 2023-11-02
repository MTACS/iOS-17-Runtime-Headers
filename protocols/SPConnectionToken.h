
@protocol SPConnectionToken <NSObject>

@required

- (NSData *)address;
- (NSData *)commandKey;
- (NSData *)connectionToken;
- (NSDateInterval *)dateInterval;

@end
