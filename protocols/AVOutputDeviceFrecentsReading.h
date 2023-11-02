
@protocol AVOutputDeviceFrecentsReading <NSObject>

@required

- (NSArray *)deviceIDs;
- (NSDictionary *)frecencyInfoForDeviceWithID:(NSString *)arg1;

@end
