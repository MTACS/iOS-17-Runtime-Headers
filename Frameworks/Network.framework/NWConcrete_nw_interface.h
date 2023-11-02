
@interface NWConcrete_nw_interface : NSObject <OS_nw_interface> {
    unsigned int  delegate_index;
    struct nw_interface_details { 
        struct nw_interface_signature { 
            unsigned char signature[20]; 
            unsigned char signature_len; 
            unsigned char ___pad[3]; 
        } ipv4_signature; 
        struct nw_interface_signature { 
            unsigned char signature[20]; 
            unsigned char signature_len; 
            unsigned char ___pad[3]; 
        } ipv6_signature; 
        unsigned int mtu; 
        unsigned int tso_max_segment_size_v4; 
        unsigned int tso_max_segment_size_v6; 
        unsigned int ipv4_netmask; 
        unsigned int ipv4_broadcast; 
        unsigned int hwcsum_flags; 
        unsigned char radio_type; 
        unsigned int expensive : 1; 
        unsigned int constrained : 1; 
        unsigned int tx_start : 1; 
        unsigned int ack_priority : 1; 
        unsigned int carrier_aggregation : 1; 
        unsigned int multilayer_packet_logging : 1; 
        unsigned int has_netmask : 1; 
        unsigned int has_broadcast : 1; 
        unsigned int supports_multicast : 1; 
        unsigned int has_dns : 1; 
        unsigned int has_nat64 : 1; 
        unsigned int ipv4_routable : 1; 
        unsigned int ipv6_routable : 1; 
        unsigned int __pad_bits : 3; 
        unsigned char ___pad[1]; 
    }  details;
    unsigned int  generation;
    unsigned int  index;
    BOOL  name;
    int  subtype;
    int  type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)init;

@end
