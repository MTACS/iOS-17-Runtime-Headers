
@interface HAP2AccessoryDeviceIPAddress : NSObject {
    struct coap_address_t { 
        unsigned int size; 
        union { 
            struct sockaddr { 
                unsigned char sa_len; 
                unsigned char sa_family; 
                BOOL sa_data[14]; 
            } sa; 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } sin; 
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
            } sin6; 
        } addr; 
    }  _address;
}

@property (nonatomic, readonly) struct coap_address_t { unsigned int x1; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; } x2; } address;

- (struct coap_address_t { unsigned int x1; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; } x2; })address;
- (struct coap_address_t { unsigned int x1; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; } x2; }*)getAddressPtr;
- (id)initWithAddress:(const struct coap_address_t { unsigned int x1; union { struct sockaddr { unsigned char x_1_2_1; unsigned char x_1_2_2; BOOL x_1_2_3[14]; } x_2_1_1; struct sockaddr_in { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; struct in_addr { unsigned int x_4_3_1; } x_2_2_4; BOOL x_2_2_5[8]; } x_2_1_2; struct sockaddr_in6 { unsigned char x_3_2_1; unsigned char x_3_2_2; unsigned short x_3_2_3; unsigned int x_3_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_3_2_5; unsigned int x_3_2_6; } x_2_1_3; } x2; }*)arg1;

@end
