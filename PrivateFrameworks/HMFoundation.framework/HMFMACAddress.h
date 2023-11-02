
@interface HMFMACAddress : HMFHardwareAddress <NSCopying, NSSecureCoding>

- (id)initWithAddressData:(id)arg1;
- (id)initWithAddressString:(id)arg1 length:(unsigned long long)arg2;
- (id)initWithMACAddressString:(id)arg1;

@end
