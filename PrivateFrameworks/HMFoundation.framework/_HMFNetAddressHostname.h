
@interface _HMFNetAddressHostname : HMFNetAddressInternal {
    NSString * _hostname;
}

@property (nonatomic, readonly, copy) NSString *hostname;

+ (id)normalizedHostname:(id)arg1;

- (void).cxx_destruct;
- (id)addressString;
- (unsigned long long)hash;
- (id)hostname;
- (id)init;
- (id)initWithHostname:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
