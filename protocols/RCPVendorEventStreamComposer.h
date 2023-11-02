
@protocol RCPVendorEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)vendorEventWithPage:(NSNumber *)arg1 withUsage:(NSNumber *)arg2 withVersion:(unsigned char)arg3;
- (void)vendorEventWithPage:(NSNumber *)arg1 withUsage:(NSNumber *)arg2 withVersion:(unsigned char)arg3 withData:(NSData *)arg4;

@end
