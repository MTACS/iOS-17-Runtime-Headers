
@protocol SCROIOHIDElementProtocol <SCROIOElementProtocol>

@required

- (void*)hidDevice;
- (NSString *)manufacturerName;
- (unsigned int)productId;
- (NSString *)productName;
- (unsigned int)vendorId;

@end
