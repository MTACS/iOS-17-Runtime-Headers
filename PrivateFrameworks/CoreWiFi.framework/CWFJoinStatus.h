
@interface CWFJoinStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding> {
    int  _EAP8021XClientStatus;
    unsigned int  _EAP8021XControlMode;
    unsigned int  _EAP8021XControlState;
    unsigned int  _EAP8021XSupplicantState;
    NSDate * _IPv4AssignedAt;
    NSDate * _IPv4PrimaryAt;
    NSDate * _IPv6AssignedAt;
    NSDate * _IPv6PrimaryAt;
    NSUUID * _UUID;
    NSDate * _associationEndedAt;
    NSDate * _authenticationEndedAt;
    bool  _autoJoin;
    NSDate * _endedAt;
    NSError * _error;
    NSString * _interfaceName;
    CWFNetworkProfile * _knownNetworkProfile;
    CWFScanResult * _scanResult;
    NSDate * _startedAt;
}

@property (nonatomic) int EAP8021XClientStatus;
@property (nonatomic) unsigned int EAP8021XControlMode;
@property (nonatomic) unsigned int EAP8021XControlState;
@property (nonatomic) unsigned int EAP8021XSupplicantState;
@property (nonatomic, copy) NSDate *IPv4AssignedAt;
@property (nonatomic, copy) NSDate *IPv4PrimaryAt;
@property (nonatomic, copy) NSDate *IPv6AssignedAt;
@property (nonatomic, copy) NSDate *IPv6PrimaryAt;
@property (nonatomic, copy) NSUUID *UUID;
@property (nonatomic, copy) NSDate *associationEndedAt;
@property (nonatomic, copy) NSDate *authenticationEndedAt;
@property (getter=isAutoJoin, nonatomic) bool autoJoin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (readonly) double duration;
@property (readonly) double durationUntilAssociationEnded;
@property (readonly) double durationUntilAuthenticationEnded;
@property (readonly) double durationUntilIPv4Assigned;
@property (readonly) double durationUntilIPv4Primary;
@property (readonly) double durationUntilIPv6Assigned;
@property (readonly) double durationUntilIPv6Primary;
@property (nonatomic, copy) NSDate *endedAt;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) CWFNetworkProfile *knownNetworkProfile;
@property (nonatomic, copy) CWFScanResult *scanResult;
@property (nonatomic, copy) NSDate *startedAt;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)EAP8021XClientStatus;
- (unsigned int)EAP8021XControlMode;
- (unsigned int)EAP8021XControlState;
- (unsigned int)EAP8021XSupplicantState;
- (id)IPv4AssignedAt;
- (id)IPv4PrimaryAt;
- (id)IPv6AssignedAt;
- (id)IPv6PrimaryAt;
- (id)JSONCompatibleKeyValueMap;
- (id)UUID;
- (id)associationEndedAt;
- (id)authenticationEndedAt;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionForEAP8021XControlState;
- (id)descriptionForEAPOLClientStatus;
- (id)descriptionForEAPOLControlMode;
- (double)duration;
- (double)durationUntilAssociationEnded;
- (double)durationUntilAuthenticationEnded;
- (double)durationUntilIPv4Assigned;
- (double)durationUntilIPv4Primary;
- (double)durationUntilIPv6Assigned;
- (double)durationUntilIPv6Primary;
- (void)encodeWithCoder:(id)arg1;
- (id)endedAt;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (bool)isAutoJoin;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToJoinStatus:(id)arg1;
- (id)knownNetworkProfile;
- (id)scanResult;
- (void)setAssociationEndedAt:(id)arg1;
- (void)setAuthenticationEndedAt:(id)arg1;
- (void)setAutoJoin:(bool)arg1;
- (void)setEAP8021XClientStatus:(int)arg1;
- (void)setEAP8021XControlMode:(unsigned int)arg1;
- (void)setEAP8021XControlState:(unsigned int)arg1;
- (void)setEAP8021XSupplicantState:(unsigned int)arg1;
- (void)setEndedAt:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIPv4AssignedAt:(id)arg1;
- (void)setIPv4PrimaryAt:(id)arg1;
- (void)setIPv6AssignedAt:(id)arg1;
- (void)setIPv6PrimaryAt:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setKnownNetworkProfile:(id)arg1;
- (void)setScanResult:(id)arg1;
- (void)setStartedAt:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)startedAt;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dictionary;

@end
