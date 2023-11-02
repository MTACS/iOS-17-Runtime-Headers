
@protocol _GCDeviceMatchingFilter <NSObject>

@required

- (NSString *)identifier;
- (bool)match:(_GCHIDServiceInfo *)arg1;

@end
