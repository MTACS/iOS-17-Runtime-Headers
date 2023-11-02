
@interface HMFNetAddress : HMFObject {
    HMFNetAddressInternal * _internal;
}

@property (nonatomic, readonly) unsigned long long addressFamily;
@property (nonatomic, readonly, copy) NSString *addressString;
@property (nonatomic, readonly) HMFNetAddressInternal *internal;

+ (id)localAddress;

- (void).cxx_destruct;
- (unsigned long long)addressFamily;
- (id)addressString;
- (id)attributeDescriptions;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithHostname:(id)arg1;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;

@end
