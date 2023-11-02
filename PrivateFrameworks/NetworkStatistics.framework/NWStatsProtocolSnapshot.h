
@interface NWStatsProtocolSnapshot : NWStatsSnapshot {
    struct accumulator_bytes { 
        unsigned long long rxCellularBytes; 
        unsigned long long rxWiFiBytes; 
        unsigned long long rxWiredBytes; 
        unsigned long long txCellularBytes; 
        unsigned long long txWiFiBytes; 
        unsigned long long txWiredBytes; 
    }  _adjustment_bytes;
    unsigned long long  _cumulativeAccountingRxCellularBytes;
    unsigned long long  _cumulativeAccountingTxCellularBytes;
    bool  _failedFlowswitchValuesLookup;
    bool  _failedRouteValuesLookup;
    bool  _failedSkywalkAction;
    unsigned int  _flags;
    double  _flowDuration;
    double  _flowSnapshotTimeIntervalSince1970;
    double  _flowSnapshotTimeIntervalSinceReferenceDate;
    NSDate * _flowSnapshotTimestamp;
    unsigned long long  _flowStartContinuousTime;
    double  _flowStartTimeIntervalSince1970;
    double  _flowStartTimeIntervalSinceReferenceDate;
    NSDate * _flowStartTimestamp;
    bool  _flowUsesChannels;
    NSUUID * _flowuuid;
    bool  _hasLocalDestination;
    bool  _hasNonLocalDestination;
    bool  _interfaceAWDL;
    bool  _interfaceCellular;
    bool  _interfaceCellularViaAnyFallback;
    bool  _interfaceCellularViaFallback;
    bool  _interfaceCellularViaFastFallback;
    bool  _interfaceCellularViaIndependentFallback;
    bool  _interfaceCellularViaPreferredFallback;
    bool  _interfaceCellularViaSlowFallback;
    bool  _interfaceCompanionLink;
    bool  _interfaceConstrained;
    bool  _interfaceExpensive;
    unsigned int  _interfaceIndex;
    bool  _interfaceLLW;
    bool  _interfaceLoopback;
    bool  _interfaceUnknown;
    bool  _interfaceWiFi;
    bool  _interfaceWired;
    bool  _isKnownInbound;
    bool  _isKnownListener;
    bool  _isKnownOutbound;
    bool  _isKnownVPNClient;
    bool  _isKnownVPNProvider;
    NSData * _localAddress;
    unsigned short  _localPort;
    unsigned long long  _networkActivityMapPart1;
    unsigned long long  _networkActivityMapPart2;
    unsigned long long  _networkActivityMapStartTime;
    struct nstat_msg_src_update_convenient { 
        struct nstat_msg_src_update_hdr { 
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
        } hdr; 
        union { 
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
            } tcp; 
            struct nstat_udp_descriptor { 
                unsigned long long upid; 
                unsigned long long eupid; 
                unsigned long long start_timestamp; 
                unsigned long long timestamp; 
                struct activity_bitmap { 
                    unsigned long long start; 
                    unsigned long long bitmap[2]; 
                } activity_bitmap; 
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
                unsigned int ifindex; 
                unsigned int rcvbufsize; 
                unsigned int rcvbufused; 
                unsigned int traffic_class; 
                unsigned int pid; 
                BOOL pname[64]; 
                unsigned int epid; 
                unsigned char uuid[16]; 
                unsigned char euuid[16]; 
                unsigned char vuuid[16]; 
                unsigned char fuuid[16]; 
                unsigned int persona_id; 
                unsigned int uid; 
                unsigned int ifnet_properties; 
                unsigned char fallback_mode; 
                unsigned char reserved[3]; 
            } udp; 
            struct nstat_route_descriptor { 
                unsigned long long id; 
                unsigned long long parent_id; 
                unsigned long long gateway_id; 
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
                    struct sockaddr { 
                        unsigned char sa_len; 
                        unsigned char sa_family; 
                        BOOL sa_data[14]; 
                    } sa; 
                } dst; 
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
                    struct sockaddr { 
                        unsigned char sa_len; 
                        unsigned char sa_family; 
                        BOOL sa_data[14]; 
                    } sa; 
                } mask; 
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
                    struct sockaddr { 
                        unsigned char sa_len; 
                        unsigned char sa_family; 
                        BOOL sa_data[14]; 
                    } sa; 
                } gateway; 
                unsigned int ifindex; 
                unsigned int flags; 
                unsigned char reserved[4]; 
            } route; 
            struct nstat_ifnet_descriptor { 
                unsigned long long threshold; 
                unsigned int ifindex; 
                struct nstat_ifnet_desc_link_status { 
                    unsigned int link_status_type; 
                    union { 
                        struct nstat_ifnet_desc_cellular_status { 
                            unsigned int valid_bitmask; 
                            unsigned int link_quality_metric; 
                            unsigned int ul_effective_bandwidth; 
                            unsigned int ul_max_bandwidth; 
                            unsigned int ul_min_latency; 
                            unsigned int ul_effective_latency; 
                            unsigned int ul_max_latency; 
                            unsigned int ul_retxt_level; 
                            unsigned int ul_bytes_lost; 
                            unsigned int ul_min_queue_size; 
                            unsigned int ul_avg_queue_size; 
                            unsigned int ul_max_queue_size; 
                            unsigned int dl_effective_bandwidth; 
                            unsigned int dl_max_bandwidth; 
                            unsigned int config_inactivity_time; 
                            unsigned int config_backoff_time; 
                            unsigned short mss_recommended; 
                            unsigned char reserved[2]; 
                        } cellular; 
                        struct nstat_ifnet_desc_wifi_status { 
                            unsigned int valid_bitmask; 
                            unsigned int link_quality_metric; 
                            unsigned int ul_effective_bandwidth; 
                            unsigned int ul_max_bandwidth; 
                            unsigned int ul_min_latency; 
                            unsigned int ul_effective_latency; 
                            unsigned int ul_max_latency; 
                            unsigned int ul_retxt_level; 
                            unsigned int ul_bytes_lost; 
                            unsigned int ul_error_rate; 
                            unsigned int dl_effective_bandwidth; 
                            unsigned int dl_max_bandwidth; 
                            unsigned int dl_min_latency; 
                            unsigned int dl_effective_latency; 
                            unsigned int dl_max_latency; 
                            unsigned int dl_error_rate; 
                            unsigned int config_frequency; 
                            unsigned int config_multicast_rate; 
                            unsigned int scan_count; 
                            unsigned int scan_duration; 
                        } wifi; 
                    } u; 
                } link_status; 
                unsigned int type; 
                BOOL description[128]; 
                BOOL name[17]; 
                unsigned char reserved[3]; 
            } ifnet; 
            struct nstat_sysinfo_descriptor { 
                unsigned int flags; 
            } sysinfo; 
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
            } quic; 
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
            } conn; 
        } ; 
    }  _nstat_update;
    struct update_subset_for_deltas { 
        unsigned long long savedRxPackets; 
        unsigned long long savedRxBytes; 
        unsigned long long savedTxPackets; 
        unsigned long long savedTxBytes; 
        unsigned long long savedRxCellularBytes; 
        unsigned long long savedRxWiFiBytes; 
        unsigned long long savedRxWiredBytes; 
        unsigned long long savedTxCellularBytes; 
        unsigned long long savedTxWiFiBytes; 
        unsigned long long savedTxWiredBytes; 
        unsigned int savedRxDuplicateBytes; 
        unsigned int savedRxOutOfOrderBytes; 
        unsigned int savedTxRetransmittedBytes; 
    }  _prev_items;
    unsigned int  _receiveBufferSize;
    unsigned int  _receiveBufferUsed;
    NSData * _remoteAddress;
    unsigned short  _remotePort;
    unsigned int  _trafficClass;
    bool  _uiBackgroundAudioCapable;
    NSUUID * _vuuid;
}

@property (nonatomic, readonly) struct accumulator_bytes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*_update_adjustment_bytes;
@property (nonatomic, readonly) const struct update_subset_for_deltas { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; }*_update_delta_ptr;
@property (nonatomic, readonly) const struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*_update_ptr;
@property (nonatomic, readonly) bool changedAddress;
@property (nonatomic, readonly) bool changedEUUID;
@property (nonatomic, readonly) bool changedEpid;
@property (nonatomic, readonly) bool changedLocalAddress;
@property (nonatomic, readonly) bool changedMetadata;
@property (nonatomic, readonly) bool changedOwnership;
@property (nonatomic, readonly) bool changedPid;
@property (nonatomic, readonly) bool changedProcname;
@property (nonatomic, readonly) bool changedRemoteAddress;
@property (nonatomic, readonly) bool changedUUID;
@property (nonatomic, readonly) NSString *countsDescription;
@property (nonatomic) unsigned long long cumulativeAccountingRxCellularBytes;
@property (nonatomic) unsigned long long cumulativeAccountingTxCellularBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingRxCellularBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingRxWiFiBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingRxWiredBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingTxCellularBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingTxWiFiBytes;
@property (nonatomic, readonly) unsigned long long deltaAccountingTxWiredBytes;
@property (nonatomic, readonly) unsigned long long deltaRxBytes;
@property (nonatomic, readonly) unsigned long long deltaRxCellularBytes;
@property (nonatomic, readonly) unsigned long long deltaRxPackets;
@property (nonatomic, readonly) unsigned long long deltaRxWiFiBytes;
@property (nonatomic, readonly) unsigned long long deltaRxWiredBytes;
@property (nonatomic, readonly) unsigned long long deltaTxBytes;
@property (nonatomic, readonly) unsigned long long deltaTxCellularBytes;
@property (nonatomic, readonly) unsigned long long deltaTxPackets;
@property (nonatomic, readonly) unsigned long long deltaTxWiFiBytes;
@property (nonatomic, readonly) unsigned long long deltaTxWiredBytes;
@property (nonatomic, readonly) NSString *descriptorDescription;
@property (nonatomic, readonly) bool failedConsistencyChecks;
@property (nonatomic, readonly) bool failedFlowswitchValuesLookup;
@property (nonatomic, readonly) bool failedNegativeDeltaCheck;
@property (nonatomic, readonly) bool failedRouteValuesLookup;
@property (nonatomic, readonly) bool failedRxCountCheck;
@property (nonatomic, readonly) bool failedSkywalkAction;
@property (nonatomic, readonly) bool failedTCPMultipleInterfaceCheck;
@property (nonatomic, readonly) double flowDuration;
@property (nonatomic, readonly) double flowSnapshotTimeIntervalSince1970;
@property (nonatomic) double flowSnapshotTimeIntervalSinceReferenceDate;
@property (nonatomic, readonly) NSDate *flowSnapshotTimestamp;
@property (nonatomic, readonly) unsigned long long flowStartContinuousTime;
@property (nonatomic, readonly) double flowStartTimeIntervalSince1970;
@property (nonatomic, readonly) double flowStartTimeIntervalSinceReferenceDate;
@property (nonatomic, readonly) NSDate *flowStartTimestamp;
@property (nonatomic, readonly) NSString *flowType;
@property (nonatomic, readonly) NSString *flowTypeLowerCase;
@property (nonatomic, readonly) bool flowUsesChannels;
@property (nonatomic, readonly) NSUUID *flowuuid;
@property (nonatomic, readonly) bool hasCellTraffic;
@property (nonatomic, readonly) bool hasCellTrafficDelta;
@property (nonatomic, readonly) bool hasLocalDestination;
@property (nonatomic, readonly) bool hasNonLocalDestination;
@property (nonatomic, readonly) bool hasTraffic;
@property (nonatomic, readonly) bool hasTrafficDelta;
@property (nonatomic, readonly) bool hasWiFiTraffic;
@property (nonatomic, readonly) bool hasWiFiTrafficDelta;
@property (nonatomic, readonly) bool hasWiredTraffic;
@property (nonatomic, readonly) bool hasWiredTrafficDelta;
@property (nonatomic, readonly) bool interfaceAWDL;
@property (nonatomic, readonly) bool interfaceCellular;
@property (nonatomic, readonly) bool interfaceCellularViaAnyFallback;
@property (nonatomic, readonly) bool interfaceCellularViaFallback;
@property (nonatomic, readonly) NSString *interfaceCellularViaFallbackString;
@property (nonatomic, readonly) bool interfaceCellularViaFastFallback;
@property (nonatomic, readonly) bool interfaceCellularViaIndependentFallback;
@property (nonatomic, readonly) bool interfaceCellularViaPreferredFallback;
@property (nonatomic, readonly) bool interfaceCellularViaSlowFallback;
@property (nonatomic, readonly) bool interfaceCompanionLink;
@property (nonatomic, readonly) bool interfaceConstrained;
@property (nonatomic, readonly) bool interfaceExpensive;
@property (nonatomic, readonly) unsigned int interfaceIndex;
@property (nonatomic, readonly) bool interfaceLLW;
@property (nonatomic, readonly) bool interfaceLoopback;
@property (nonatomic, readonly) bool interfaceUnknown;
@property (nonatomic, readonly) bool interfaceWiFi;
@property (nonatomic, readonly) bool interfaceWired;
@property (nonatomic, readonly) bool isIPv4;
@property (nonatomic, readonly) bool isIPv6;
@property (nonatomic, readonly) bool isKnownInbound;
@property (nonatomic, readonly) bool isKnownListener;
@property (nonatomic, readonly) bool isKnownOutbound;
@property (nonatomic) bool isKnownVPNClient;
@property (nonatomic) bool isKnownVPNProvider;
@property (nonatomic, readonly) NSData *localAddress;
@property (nonatomic, readonly) unsigned short localPort;
@property (nonatomic, readonly) unsigned long long networkActivityMapPart1;
@property (nonatomic, readonly) unsigned long long networkActivityMapPart2;
@property (nonatomic, readonly) unsigned long long networkActivityMapStartTime;
@property (nonatomic, readonly) unsigned long long rawDeltaRxCellularBytes;
@property (nonatomic, readonly) unsigned long long rawDeltaRxWiFiBytes;
@property (nonatomic, readonly) unsigned long long rawDeltaRxWiredBytes;
@property (nonatomic, readonly) unsigned long long rawDeltaTxCellularBytes;
@property (nonatomic, readonly) unsigned long long rawDeltaTxWiFiBytes;
@property (nonatomic, readonly) unsigned long long rawDeltaTxWiredBytes;
@property (nonatomic, readonly) unsigned long long rawRxCellularBytes;
@property (nonatomic, readonly) unsigned long long rawRxWiFiBytes;
@property (nonatomic, readonly) unsigned long long rawRxWiredBytes;
@property (nonatomic, readonly) unsigned long long rawTxCellularBytes;
@property (nonatomic, readonly) unsigned long long rawTxWiFiBytes;
@property (nonatomic, readonly) unsigned long long rawTxWiredBytes;
@property (nonatomic, readonly) unsigned int receiveBufferSize;
@property (nonatomic, readonly) unsigned int receiveBufferUsed;
@property (nonatomic, readonly) NSData *remoteAddress;
@property (nonatomic, readonly) unsigned short remotePort;
@property (nonatomic, readonly) unsigned long long rxBytes;
@property (nonatomic, readonly) unsigned long long rxCellularBytes;
@property (nonatomic, readonly) unsigned long long rxPackets;
@property (nonatomic, readonly) unsigned long long rxWiFiBytes;
@property (nonatomic, readonly) unsigned long long rxWiredBytes;
@property (nonatomic, readonly) NSString *savedCountsDescription;
@property (nonatomic, readonly) unsigned int trafficClass;
@property (nonatomic, readonly) unsigned long long txBytes;
@property (nonatomic, readonly) unsigned long long txCellularBytes;
@property (nonatomic, readonly) unsigned long long txPackets;
@property (nonatomic, readonly) unsigned long long txWiFiBytes;
@property (nonatomic, readonly) unsigned long long txWiredBytes;
@property (nonatomic) bool uiBackgroundAudioCapable;
@property (nonatomic, readonly) NSString *verboseDescription;
@property (nonatomic, readonly) NSUUID *vuuid;

+ (void)_initializeQUICDescriptor:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct activity_bitmap { unsigned long long x_7_1_1; unsigned long long x_7_1_2[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_21_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_21_1_2; } x21; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_22_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_22_1_2; } x22; }*)arg1 fromDictionary:(id)arg2;
+ (void)_initializeTCPDescriptor:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct activity_bitmap { unsigned long long x_7_1_1; unsigned long long x_7_1_2[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_21_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_21_1_2; } x21; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_22_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_22_1_2; } x22; }*)arg1 fromDictionary:(id)arg2;
+ (void)_initializeUDPDescriptor:(struct nstat_udp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct activity_bitmap { unsigned long long x_5_1_1; unsigned long long x_5_1_2[2]; } x5; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_6_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_6_1_2; } x6; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_7_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_7_1_2; } x7; }*)arg1 fromDictionary:(id)arg2;
+ (double)_intervalWithContinuousTime:(unsigned long long)arg1;
+ (double)_referenceIntervalWithContinuousTime:(unsigned long long)arg1;
+ (id)_snapshotWithDictionary:(id)arg1;
+ (void)initialize;
+ (id)snapshotWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_adjustedByteCount:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3;
- (unsigned long long)_byteOverheadForPacketCount:(unsigned long long)arg1;
- (id)_createNSUUIDForBytes:(unsigned char)arg1;
- (unsigned long long)_deltaForCurrentBytes:(unsigned long long)arg1 otherBytes:(unsigned long long)arg2 packets:(unsigned long long)arg3 prevBytes:(unsigned long long)arg4 prevOtherBytes:(unsigned long long)arg5 prevPackets:(unsigned long long)arg6;
- (unsigned int)_deltaRxDuplicateBytes;
- (unsigned int)_deltaRxOutOfOrderBytes;
- (unsigned int)_deltaTxRetransmittedBytes;
- (id)_interfaceCellularViaFallbackConciseString;
- (id)_nstatCountsDictionaryForm:(struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1;
- (id)_quicDescriptorDictionaryForm:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct activity_bitmap { unsigned long long x_7_1_1; unsigned long long x_7_1_2[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_21_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_21_1_2; } x21; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_22_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_22_1_2; } x22; }*)arg1;
- (double)_rttAverage;
- (double)_rttMinimum;
- (double)_rttVariation;
- (unsigned int)_rxDuplicateBytes;
- (unsigned int)_rxOutOfOrderBytes;
- (id)_tcpDescriptorDictionaryForm:(struct nstat_tcp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct activity_bitmap { unsigned long long x_7_1_1; unsigned long long x_7_1_2[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_21_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_21_1_2; } x21; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_22_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_22_1_2; } x22; }*)arg1;
- (unsigned int)_txRetransmittedBytes;
- (id)_udpDescriptorDictionaryForm:(struct nstat_udp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct activity_bitmap { unsigned long long x_5_1_1; unsigned long long x_5_1_2[2]; } x5; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_6_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_6_1_2; } x6; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_7_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_7_1_2; } x7; }*)arg1;
- (struct accumulator_bytes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)_update_adjustment_bytes;
- (const struct update_subset_for_deltas { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)_update_delta_ptr;
- (const struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)_update_ptr;
- (void)applyTrafficAdjustmentFactor:(double)arg1;
- (bool)attributedEntityIsBundleName;
- (bool)attributedEntityIsProcessName;
- (id)attributionReasonString;
- (id)briefDescription;
- (bool)changedAddress;
- (bool)changedEUUID;
- (bool)changedEUUIDFromUUID;
- (bool)changedEpid;
- (bool)changedLocalAddress;
- (bool)changedMetadata;
- (bool)changedOwnership;
- (bool)changedPid;
- (bool)changedProcname;
- (bool)changedRemoteAddress;
- (bool)changedUUID;
- (id)countsDescription;
- (unsigned long long)cumulativeAccountingRxCellularBytes;
- (unsigned long long)cumulativeAccountingTxCellularBytes;
- (unsigned long long)deltaAccountingRxCellularBytes;
- (unsigned long long)deltaAccountingRxWiFiBytes;
- (unsigned long long)deltaAccountingRxWiredBytes;
- (unsigned long long)deltaAccountingTxCellularBytes;
- (unsigned long long)deltaAccountingTxWiFiBytes;
- (unsigned long long)deltaAccountingTxWiredBytes;
- (unsigned long long)deltaRxBytes;
- (unsigned long long)deltaRxCellularBytes;
- (unsigned long long)deltaRxPackets;
- (unsigned long long)deltaRxWiFiBytes;
- (unsigned long long)deltaRxWiredBytes;
- (unsigned long long)deltaTxBytes;
- (unsigned long long)deltaTxCellularBytes;
- (unsigned long long)deltaTxPackets;
- (unsigned long long)deltaTxWiFiBytes;
- (unsigned long long)deltaTxWiredBytes;
- (id)description;
- (id)descriptorDescription;
- (id)dictionaryForm;
- (id)domainDescription;
- (unsigned long long)eventFlags;
- (bool)failedConsistencyChecks;
- (bool)failedFlowswitchValuesLookup;
- (bool)failedNegativeDeltaCheck;
- (bool)failedRouteValuesLookup;
- (bool)failedRxCountCheck;
- (bool)failedSkywalkAction;
- (bool)failedTCPMultipleInterfaceCheck;
- (bool)fixedInterfaceUseExpected:(unsigned int)arg1;
- (double)flowDuration;
- (double)flowSnapshotTimeIntervalSince1970;
- (double)flowSnapshotTimeIntervalSinceReferenceDate;
- (id)flowSnapshotTimestamp;
- (unsigned long long)flowStartContinuousTime;
- (double)flowStartTimeIntervalSince1970;
- (double)flowStartTimeIntervalSinceReferenceDate;
- (id)flowStartTimestamp;
- (id)flowType;
- (id)flowTypeLowerCase;
- (bool)flowUsesChannels;
- (id)flowuuid;
- (bool)hasCellTraffic;
- (bool)hasCellTrafficDelta;
- (bool)hasLocalDestination;
- (bool)hasNonLocalDestination;
- (bool)hasTraffic;
- (bool)hasTrafficDelta;
- (bool)hasWiFiTraffic;
- (bool)hasWiFiTrafficDelta;
- (bool)hasWiredTraffic;
- (bool)hasWiredTrafficDelta;
- (id)initWithUpdate:(const struct nstat_msg_src_update_convenient { struct nstat_msg_src_update_hdr { struct nstat_msg_hdr { unsigned long long x_1_2_1; unsigned int x_1_2_2; unsigned short x_1_2_3; unsigned short x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; struct nstat_counts { unsigned long long x_4_2_1; unsigned long long x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned int x_4_2_11; unsigned int x_4_2_12; unsigned int x_4_2_13; unsigned int x_4_2_14; unsigned int x_4_2_15; unsigned int x_4_2_16; unsigned int x_4_2_17; unsigned int x_4_2_18; } x_1_1_4; unsigned int x_1_1_5; unsigned char x_1_1_6[4]; } x1; union { struct nstat_tcp_descriptor { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; unsigned long long x_1_2_4; unsigned long long x_1_2_5; unsigned long long x_1_2_6; struct activity_bitmap { unsigned long long x_7_3_1; unsigned long long x_7_3_2[2]; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; unsigned int x_1_2_10; unsigned int x_1_2_11; unsigned int x_1_2_12; unsigned int x_1_2_13; unsigned int x_1_2_14; unsigned int x_1_2_15; unsigned int x_1_2_16; unsigned int x_1_2_17; unsigned int x_1_2_18; unsigned int x_1_2_19; unsigned int x_1_2_20; union { struct sockaddr_in { unsigned char x_1_4_1; unsigned char x_1_4_2; unsigned short x_1_4_3; struct in_addr { unsigned int x_4_5_1; } x_1_4_4; BOOL x_1_4_5[8]; } x_21_3_1; struct sockaddr_in6 { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned short x_2_4_3; unsigned int x_2_4_4; struct in6_addr { union { unsigned char x_1_6_1[16]; unsigned short x_1_6_2[8]; unsigned int x_1_6_3[4]; } x_5_5_1; } x_2_4_5; unsigned int x_2_4_6; } x_21_3_2; } x_1_2_21; } x_2_1_1; } x2; }*)arg1 startTime:(double)arg2 flowFlags:(unsigned int)arg3 previously:(struct update_subset_for_deltas { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg4;
- (bool)interfaceAWDL;
- (bool)interfaceCellular;
- (bool)interfaceCellularViaAnyFallback;
- (bool)interfaceCellularViaFallback;
- (id)interfaceCellularViaFallbackString;
- (bool)interfaceCellularViaFastFallback;
- (bool)interfaceCellularViaIndependentFallback;
- (bool)interfaceCellularViaPreferredFallback;
- (bool)interfaceCellularViaSlowFallback;
- (bool)interfaceCompanionLink;
- (bool)interfaceConstrained;
- (bool)interfaceExpensive;
- (unsigned int)interfaceIndex;
- (bool)interfaceLLW;
- (bool)interfaceLoopback;
- (bool)interfaceUnknown;
- (bool)interfaceWiFi;
- (bool)interfaceWired;
- (bool)isIPv4;
- (bool)isIPv6;
- (bool)isKnownInbound;
- (bool)isKnownListener;
- (bool)isKnownOutbound;
- (bool)isKnownVPNClient;
- (bool)isKnownVPNProvider;
- (bool)isSimpleInterface:(unsigned int)arg1;
- (id)localAddress;
- (unsigned short)localPort;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (bool)noBluetoothUseExpected:(unsigned int)arg1;
- (unsigned long long)rawDeltaRxCellularBytes;
- (unsigned long long)rawDeltaRxWiFiBytes;
- (unsigned long long)rawDeltaRxWiredBytes;
- (unsigned long long)rawDeltaTxCellularBytes;
- (unsigned long long)rawDeltaTxWiFiBytes;
- (unsigned long long)rawDeltaTxWiredBytes;
- (unsigned long long)rawRxCellularBytes;
- (unsigned long long)rawRxWiFiBytes;
- (unsigned long long)rawRxWiredBytes;
- (unsigned long long)rawTxCellularBytes;
- (unsigned long long)rawTxWiFiBytes;
- (unsigned long long)rawTxWiredBytes;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (id)remoteAddress;
- (unsigned short)remotePort;
- (void)runConsistencyChecks;
- (unsigned long long)rxBytes;
- (unsigned long long)rxCellularBytes;
- (unsigned long long)rxPackets;
- (unsigned long long)rxWiFiBytes;
- (unsigned long long)rxWiredBytes;
- (id)savedAccumulatorCountsDescription;
- (id)savedCountsDescription;
- (void)setAppStateIsForeground:(bool)arg1 screenStateOn:(bool)arg2 startAppStateIsForeground:(bool)arg3 startScreenStateOn:(bool)arg4;
- (void)setAttribution:(id)arg1 derivation:(int)arg2 delegateName:(id)arg3 extensionName:(id)arg4 isADaemon:(bool)arg5;
- (void)setCumulativeAccountingRxCellularBytes:(unsigned long long)arg1;
- (void)setCumulativeAccountingTxCellularBytes:(unsigned long long)arg1;
- (void)setDomainName:(id)arg1 owner:(id)arg2 context:(id)arg3 attributedBundleId:(id)arg4 isTracker:(bool)arg5 isNonAppInitiated:(bool)arg6 isSilent:(bool)arg7;
- (void)setFlowSnapshotTimeIntervalSinceReferenceDate:(double)arg1;
- (void)setIsKnownVPNClient:(bool)arg1;
- (void)setIsKnownVPNProvider:(bool)arg1;
- (void)setIsUIBackgroundAudioCapable:(bool)arg1;
- (void)setUiBackgroundAudioCapable:(bool)arg1;
- (id)snapshotReasonString;
- (id)snapshotType;
- (id)snapshotTypeLowerCase;
- (unsigned long long)sourceIdentifier;
- (unsigned int)trafficClass;
- (unsigned long long)txBytes;
- (unsigned long long)txCellularBytes;
- (unsigned long long)txPackets;
- (unsigned long long)txWiFiBytes;
- (unsigned long long)txWiredBytes;
- (bool)uiBackgroundAudioCapable;
- (id)verboseDescription;
- (id)vuuid;

@end
