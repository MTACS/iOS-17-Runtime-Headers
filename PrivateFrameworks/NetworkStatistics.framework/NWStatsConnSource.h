
@interface NWStatsConnSource : NWStatsSource {
    NWStatsConnProperties * _ancestralProperties;
    NWStatsConnProperties * _currentProperties;
    int  _epid;
    NSUUID * _euuid;
    NSDictionary * _lookupResults;
    struct nstat_msg_src_update_conn { 
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
        struct nstat_connection_descriptor { 
            unsigned long long start_timestamp; 
            unsigned long long timestamp; 
            unsigned long long upid; 
            unsigned long long eupid; 
            unsigned int pid; 
            unsigned int epid; 
            unsigned int ifnet_properties; 
            BOOL pname[64]; 
            unsigned char uuid[16]; 
            unsigned char euuid[16]; 
            unsigned char cuuid[16]; 
            unsigned char puuid[16]; 
            unsigned char fuuid[16]; 
            unsigned int persona_id; 
            unsigned int uid; 
            unsigned char reserved[4]; 
        } conn_desc; 
    }  _nstatConnUpdate;
}

@property int epid;
@property (nonatomic, retain) NSUUID *euuid;

- (void).cxx_destruct;
- (id)createSnapshot:(int)arg1 firstOccurrence:(bool)arg2;
- (void)deriveAttribution:(id)arg1;
- (id)description;
- (int)epid;
- (id)euuid;
- (id)initWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)arg1 length:(long long)arg2 monitor:(id)arg3;
- (void)populateConnProperties:(id)arg1 fromDomainInfo:(struct nstat_domain_info { BOOL x1[256]; BOOL x2[256]; BOOL x3[256]; BOOL x4[256]; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_5_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_5_1_2; } x5; bool x6; bool x7; bool x8; unsigned char x9[1]; }*)arg2;
- (bool)processExtendedUpdate:(struct nstat_msg_src_extended_item_hdr { unsigned int x1; unsigned int x2; }*)arg1 length:(long long)arg2;
- (void)setEpid:(int)arg1;
- (void)setEuuid:(id)arg1;
- (void)significantMetadataChange:(struct nstat_connection_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; BOOL x8[64]; unsigned char x9[16]; unsigned char x10[16]; unsigned char x11[16]; unsigned char x12[16]; unsigned char x13[16]; unsigned int x14; unsigned int x15; unsigned char x16[4]; }*)arg1 monitor:(id)arg2;
- (bool)updateWithUpdate:(struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)arg1 length:(long long)arg2 monitor:(id)arg3;

@end
