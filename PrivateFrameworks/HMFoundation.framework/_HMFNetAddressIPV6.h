
@interface _HMFNetAddressIPV6 : HMFNetAddressInternal {
    struct sockaddr_in6 { 
        unsigned char sin6_len; 
        unsigned char sin6_family; 
        unsigned short sin6_port; 
        unsigned int sin6_flowinfo; 
        struct in6_addr { 
            union { 
                unsigned char __u6_addr8[16]; 
                unsigned short __u6_addr16[8]; 
                unsigned int __u6_addr32[4]; 
            } __u6_addr; 
        } sin6_addr; 
        unsigned int sin6_scope_id; 
    }  _in6;
}

- (unsigned long long)addressFamily;
- (id)addressString;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSocketAddress:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
- (bool)isEqual:(id)arg1;

@end
