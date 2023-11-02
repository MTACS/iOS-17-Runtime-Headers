
@interface SlowNetworkUtil : NSObject {
    NSData * _profileData;
    NSNumber * dnsDelayValue;
    NSNumber * downlinkBandwidth;
    NSNumber * downlinkDelay;
    NSNumber * downlinkPacketLossRatio;
    NSNumber * excludeLoopback;
    struct { 
        int version; 
        int msg_type; 
        struct { 
            int flags; 
            struct { 
                unsigned int family; 
                unsigned int exclude_loopback; 
                BOOL ifname[16]; 
            } net_config; 
            struct { 
                unsigned int bandwidth; 
                int bw_unit; 
                float plr; 
                unsigned int latency; 
                unsigned int qsize; 
                int qsize_unit; 
                unsigned int protocol; 
                unsigned int dst_port; 
                unsigned int src_port; 
            } uplink_config; 
            struct { 
                unsigned int bandwidth; 
                int bw_unit; 
                float plr; 
                unsigned int latency; 
                unsigned int qsize; 
                int qsize_unit; 
                unsigned int protocol; 
                unsigned int dst_port; 
                unsigned int src_port; 
            } downlink_config; 
        } nlc_conditions[2]; 
    }  nlcCommand;
    NSString * profileName;
    struct { 
        unsigned int server_local_port; 
        int cookie; 
    }  sessionCookie;
    NSNumber * uplinkBandwidth;
    NSNumber * uplinkDelay;
    NSNumber * uplinkPacketLossRatio;
}

@property (nonatomic, readonly) NSNumber *dnsDelayValue;
@property (nonatomic, readonly) NSNumber *downlinkBandwidth;
@property (nonatomic, readonly) NSNumber *downlinkDelay;
@property (nonatomic, readonly) NSNumber *downlinkPacketLossRatio;
@property (nonatomic, readonly) NSNumber *excludeLoopback;
@property (nonatomic, retain) NSData *profileData;
@property (nonatomic, readonly) NSString *profileName;
@property (nonatomic, readonly) NSNumber *uplinkBandwidth;
@property (nonatomic, readonly) NSNumber *uplinkDelay;
@property (nonatomic, readonly) NSNumber *uplinkPacketLossRatio;

+ (id)loadNetworkProfilesData;

- (void).cxx_destruct;
- (id)dnsDelayValue;
- (id)downlinkBandwidth;
- (id)downlinkDelay;
- (id)downlinkPacketLossRatio;
- (id)excludeLoopback;
- (void)extractProfileSetting:(id)arg1;
- (id)init;
- (void)loadProfile:(id)arg1;
- (id)profileData;
- (id)profileName;
- (id)readInProfile:(id)arg1;
- (void)setProfileData:(id)arg1;
- (void)startNLC;
- (void)stopNLC;
- (id)uplinkBandwidth;
- (id)uplinkDelay;
- (id)uplinkPacketLossRatio;

@end
