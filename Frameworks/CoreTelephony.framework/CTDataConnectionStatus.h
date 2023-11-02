
@interface CTDataConnectionStatus : NSObject <NSCopying, NSSecureCoding> {
    NSString * _apnName;
    int  _contextType;
    NSString * _interfaceName;
    int  _ipFamily;
    NSNumber * _pdp;
    bool  _publicNetAllowed;
    NSArray * _qosFlows;
    int  _state;
    bool  _suspended;
    NSArray * _trafficDescriptors;
    int  _transportType;
    unsigned int  _wirelessTechnologyMask;
}

@property (nonatomic, retain) NSString *apnName;
@property (nonatomic) int contextType;
@property (nonatomic, retain) NSString *interfaceName;
@property (nonatomic) int ipFamily;
@property (nonatomic, retain) NSNumber *pdp;
@property (nonatomic) bool publicNetAllowed;
@property (nonatomic, retain) NSArray *qosFlows;
@property (nonatomic) int state;
@property (nonatomic) bool suspended;
@property (nonatomic, retain) NSArray *trafficDescriptors;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int wirelessTechnologyMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)apnName;
- (int)contextType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (int)ipFamily;
- (id)pdp;
- (bool)publicNetAllowed;
- (id)qosFlows;
- (void)setApnName:(id)arg1;
- (void)setContextType:(int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpFamily:(int)arg1;
- (void)setPdp:(id)arg1;
- (void)setPublicNetAllowed:(bool)arg1;
- (void)setQosFlows:(id)arg1;
- (void)setState:(int)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTrafficDescriptors:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setWirelessTechnologyMask:(unsigned int)arg1;
- (int)state;
- (bool)suspended;
- (id)trafficDescriptors;
- (int)transportType;
- (unsigned int)wirelessTechnologyMask;

@end
