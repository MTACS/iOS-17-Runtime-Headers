
@interface CWFAWDLPeerTrafficRegistration : NSObject <NSCopying, NSSecureCoding> {
    bool  _active;
    unsigned long long  _desiredBandwidth;
    unsigned long long  _desiredLatency;
    NSArray * _peerContextList;
    unsigned long long  _preferredChannel;
    unsigned long long  _secondaryPreferredChannel;
    NSString * _serviceName;
    int  _sessionFlags;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) unsigned long long desiredBandwidth;
@property (nonatomic) unsigned long long desiredLatency;
@property (nonatomic, copy) NSArray *peerContextList;
@property (nonatomic) unsigned long long preferredChannel;
@property (nonatomic) unsigned long long secondaryPreferredChannel;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic) int sessionFlags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)desiredBandwidth;
- (unsigned long long)desiredLatency;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAWDLPeerTrafficRegistration:(id)arg1;
- (id)peerContextList;
- (unsigned long long)preferredChannel;
- (unsigned long long)secondaryPreferredChannel;
- (id)serializedRegistrationInfo;
- (id)serviceName;
- (int)sessionFlags;
- (void)setActive:(bool)arg1;
- (void)setDesiredBandwidth:(unsigned long long)arg1;
- (void)setDesiredLatency:(unsigned long long)arg1;
- (void)setPeerContextList:(id)arg1;
- (void)setPreferredChannel:(unsigned long long)arg1;
- (void)setSecondaryPreferredChannel:(unsigned long long)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSessionFlags:(int)arg1;

@end
