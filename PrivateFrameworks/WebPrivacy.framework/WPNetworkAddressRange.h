
@interface WPNetworkAddressRange : NSObject {
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
    }  _address;
    NSString * _host;
    unsigned long long  _netMaskLength;
    NSString * _owner;
}

@property (nonatomic, readonly) unsigned long long _addressLength;
@property (nonatomic, readonly) void*_addressPointer;
@property (nonatomic, readonly) const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*address;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) unsigned long long netMaskLength;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (unsigned long long)_addressLength;
- (void*)_addressPointer;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)address;
- (long long)compare:(id)arg1;
- (id)description;
- (id)host;
- (id)init;
- (id)initWithAddress:(const struct sockaddr_in6 { unsigned char x1; unsigned char x2; unsigned short x3; unsigned int x4; struct in6_addr { union { unsigned char x_1_2_1[16]; unsigned short x_1_2_2[8]; unsigned int x_1_2_3[4]; } x_5_1_1; } x5; unsigned int x6; }*)arg1 netMaskLength:(unsigned long long)arg2 owner:(id)arg3 host:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)netMaskLength;
- (id)owner;
- (long long)version;

@end
