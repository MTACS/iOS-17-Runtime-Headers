
@interface _HMFNetAddressIPV4 : HMFNetAddressInternal {
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  _in;
}

- (unsigned long long)addressFamily;
- (id)addressString;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (bool)isEqual:(id)arg1;

@end
