
@interface SFRemoteHotspotTrafficFilterParams : NSObject <NSSecureCoding> {
    NSString * _destIPAddress;
    unsigned short  _destPort;
    unsigned int  _idleTimeout;
    unsigned short  _ipProtocol;
    unsigned int  _ipVersion;
    NSString * _srcIPAddress;
    unsigned short  _srcPort;
    NSString * _trafficClass;
}

@property (nonatomic, copy) NSString *destIPAddress;
@property (nonatomic) unsigned short destPort;
@property (nonatomic) unsigned int idleTimeout;
@property (nonatomic) unsigned short ipProtocol;
@property (nonatomic) unsigned int ipVersion;
@property (nonatomic, copy) NSString *srcIPAddress;
@property (nonatomic) unsigned short srcPort;
@property (nonatomic, copy) NSString *trafficClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destIPAddress;
- (unsigned short)destPort;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)idleTimeout;
- (id)initWithCoder:(id)arg1;
- (unsigned short)ipProtocol;
- (unsigned int)ipVersion;
- (void)setDestIPAddress:(id)arg1;
- (void)setDestPort:(unsigned short)arg1;
- (void)setIdleTimeout:(unsigned int)arg1;
- (void)setIpProtocol:(unsigned short)arg1;
- (void)setIpVersion:(unsigned int)arg1;
- (void)setSrcIPAddress:(id)arg1;
- (void)setSrcPort:(unsigned short)arg1;
- (void)setTrafficClass:(id)arg1;
- (id)srcIPAddress;
- (unsigned short)srcPort;
- (id)trafficClass;

@end
