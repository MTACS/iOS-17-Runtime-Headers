
@protocol TUTelephonySubscription <NSObject>

@required

- (id)initWithUUID:(NSUUID *)arg1;
- (NSString *)labelID;
- (NSUUID *)uuid;

@end
