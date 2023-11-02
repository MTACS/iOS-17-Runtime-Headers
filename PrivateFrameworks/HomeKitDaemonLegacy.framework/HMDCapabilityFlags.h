
@interface HMDCapabilityFlags : HMFObject <NSSecureCoding> {
    NSData * _bytesData;
}

@property (readonly) NSData *bytesData;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bytesData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCapabilities:(id)arg1;
- (id)initWithCapabilities:(id)arg1;
- (id)initWithCapabilityOptions:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;

@end
