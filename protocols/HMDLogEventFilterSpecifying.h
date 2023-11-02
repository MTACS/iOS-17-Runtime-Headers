
@protocol HMDLogEventFilterSpecifying <NSObject>

@required

- (bool)enableEventFilterSpecifying;
- (NSString *)sampledCategory;
- (NSData *)sampledData;
- (NSUUID *)sampledUUID;

@end
