
@interface NWStatsTCPSource : NWStatsProtocolSource {
    NSDictionary * _lookupResults;
    struct nstat_msg_src_update_tcp { 
        struct nstat_msg_hdr { 
            unsigned long long context; 
            unsigned int type; 
            unsigned short length; 
            unsigned short flags; 
        } hdr; 
        unsigned long long srcref; 
        unsigned long long event_flags; 
        struct nstat_counts { 
            unsigned long long nstat_rxpackets; 
            unsigned long long nstat_rxbytes; 
            unsigned long long nstat_txpackets; 
            unsigned long long nstat_txbytes; 
            unsigned long long nstat_cell_rxbytes; 
            unsigned long long nstat_cell_txbytes; 
            unsigned long long nstat_wifi_rxbytes; 
            unsigned long long nstat_wifi_txbytes; 
            unsigned long long nstat_wired_rxbytes; 
            unsigned long long nstat_wired_txbytes; 
            unsigned int nstat_rxduplicatebytes; 
            unsigned int nstat_rxoutoforderbytes; 
            unsigned int nstat_txretransmit; 
            unsigned int nstat_connectattempts; 
            unsigned int nstat_connectsuccesses; 
            unsigned int nstat_min_rtt; 
            unsigned int nstat_avg_rtt; 
            unsigned int nstat_var_rtt; 
        } counts; 
        unsigned int provider; 
        unsigned char reserved[4]; 
        struct nstat_tcp_descriptor { 
            unsigned long long upid; 
            unsigned long long eupid; 
            unsigned long long start_timestamp; 
            unsigned long long timestamp; 
            unsigned long long rx_transfer_size; 
            unsigned long long tx_transfer_size; 
            struct activity_bitmap { 
                unsigned long long start; 
                unsigned long long bitmap[2]; 
            } activity_bitmap; 
            unsigned int ifindex; 
            unsigned int state; 
            unsigned int sndbufsize; 
            unsigned int sndbufused; 
            unsigned int rcvbufsize; 
            unsigned int rcvbufused; 
            unsigned int txunacked; 
            unsigned int txwindow; 
            unsigned int txcwindow; 
            unsigned int traffic_class; 
            unsigned int traffic_mgt_flags; 
            unsigned int pid; 
            unsigned int epid; 
            union { 
                struct sockaddr_in { 
                    unsigned char sin_len; 
                    unsigned char sin_family; 
                    unsigned short sin_port; 
                    struct in_addr { 
                        unsigned int s_addr; 
                    } sin_addr; 
                    BOOL sin_zero[8]; 
                } v4; 
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
                } v6; 
            } local; 
            union { 
                struct sockaddr_in { 
                    unsigned char sin_len; 
                    unsigned char sin_family; 
                    unsigned short sin_port; 
                    struct in_addr { 
                        unsigned int s_addr; 
                    } sin_addr; 
                    BOOL sin_zero[8]; 
                } v4; 
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
                } v6; 
            } remote; 
            BOOL cc_algo[16]; 
            BOOL pname[64]; 
            unsigned char uuid[16]; 
            unsigned char euuid[16]; 
            unsigned char vuuid[16]; 
            unsigned char fuuid[16]; 
            unsigned int persona_id; 
            unsigned int uid; 
            union { 
                struct tcp_conn_status { 
                    union { 
                        struct { 
                            unsigned int probe_activated : 1; 
                            unsigned int write_probe_failed : 1; 
                            unsigned int read_probe_failed : 1; 
                            unsigned int conn_probe_failed : 1; 
                        } ; 
                        unsigned int pad_field; 
                    } ; 
                } connstatus; 
                unsigned char __pad_connstatus[4]; 
            } ; 
            unsigned int ifnet_properties; 
            unsigned char fallback_mode; 
            unsigned char reserved[3]; 
        } tcp_desc; 
    }  _nstatTCPUpdate;
}

- (void).cxx_destruct;
- (id)createSnapshot:(int)arg1 firstOccurrence:(bool)arg2;
- (void)deriveAttribution:(id)arg1;
- (id)description;
- (id)initWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)arg1 length:(long long)arg2 monitor:(id)arg3;
- (void)significantMetadataChange:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct activity_bitmap { unsigned long long x_7_1_1; unsigned long long x_7_1_2[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_21_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_21_1_2; } x21; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_22_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_22_1_2; } x22; }*)arg1 monitor:(id)arg2;
- (bool)updateWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)arg1 length:(long long)arg2 monitor:(id)arg3;

@end
