
@interface HMFNetAddressInternal : HMFObject {
    unsigned long long  _addressFamily;
    NSString * _addressString;
}

@property (nonatomic, readonly) unsigned long long addressFamily;
@property (nonatomic, readonly, copy) NSString *addressString;

- (void).cxx_destruct;
- (unsigned long long)addressFamily;
- (id)addressString;
- (id)dataUsingEncoding:(unsigned long long)arg1;

@end
