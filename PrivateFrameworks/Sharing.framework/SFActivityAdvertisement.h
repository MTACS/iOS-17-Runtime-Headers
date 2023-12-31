
@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {
    NSData * _advertisementPayload;
    long long  _advertisementVersion;
    SFPeerDevice * _device;
    NSDictionary * _options;
}

@property (readonly, copy) NSData *advertisementPayload;
@property (readonly) long long advertisementVersion;
@property (readonly, retain) SFPeerDevice *device;
@property (readonly, copy) NSDictionary *options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisementPayload;
- (long long)advertisementVersion;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)options;

@end
