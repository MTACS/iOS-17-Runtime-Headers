
@interface W5AWDLStatus : NSObject <NSCopying, NSSecureCoding> {
    long long  _airDropDiscoverableMode;
    NSData * _awdlElectionParameters;
    NSData * _awdlMasterChannel;
    NSData * _awdlOpMode;
    NSData * _awdlPeerDatabase;
    NSData * _awdlSecondaryMasterChannel;
    NSData * _awdlSidecarDiagnostics;
    NSData * _awdlStrategy;
    NSData * _awdlSyncChannelSequence;
    NSData * _awdlSyncEnabled;
    NSData * _awdlSyncParameters;
    NSData * _awdlSyncState;
    NSString * _interfaceName;
    NSArray * _ipv6Addresses;
    bool  _isAWDLRealTimeMode;
    bool  _power;
}

@property (nonatomic) long long airDropDiscoverableMode;
@property (nonatomic, copy) NSData *awdlElectionParameters;
@property (nonatomic, readonly) NSString *awdlElectionParametersString;
@property (nonatomic, copy) NSData *awdlMasterChannel;
@property (nonatomic, readonly) NSString *awdlMasterChannelString;
@property (nonatomic, copy) NSData *awdlOpMode;
@property (nonatomic, readonly) NSString *awdlOpModeString;
@property (nonatomic, copy) NSData *awdlPeerDatabase;
@property (nonatomic, readonly) NSString *awdlScheduleString;
@property (nonatomic, copy) NSData *awdlSecondaryMasterChannel;
@property (nonatomic, readonly) NSString *awdlSecondaryMasterChannelString;
@property (nonatomic, copy) NSData *awdlSidecarDiagnostics;
@property (nonatomic, copy) NSData *awdlStrategy;
@property (nonatomic, copy) NSData *awdlSyncChannelSequence;
@property (nonatomic, readonly) NSString *awdlSyncChannelSequenceString;
@property (nonatomic, copy) NSData *awdlSyncEnabled;
@property (nonatomic, copy) NSData *awdlSyncParameters;
@property (nonatomic, copy) NSData *awdlSyncState;
@property (nonatomic, readonly) NSString *awdlSyncStateString;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) NSArray *ipv6Addresses;
@property (nonatomic) bool isAWDLRealTimeMode;
@property (nonatomic) bool power;

// Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity

+ (bool)supportsSecureCoding;

- (long long)airDropDiscoverableMode;
- (id)awdlElectionParameters;
- (id)awdlMasterChannel;
- (id)awdlOpMode;
- (id)awdlPeerDatabase;
- (id)awdlSecondaryMasterChannel;
- (id)awdlSidecarDiagnostics;
- (id)awdlStrategy;
- (id)awdlSyncChannelSequence;
- (id)awdlSyncEnabled;
- (id)awdlSyncParameters;
- (id)awdlSyncState;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceName;
- (id)ipv6Addresses;
- (bool)isAWDLRealTimeMode;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAWDLStatus:(id)arg1;
- (bool)power;
- (void)setAirDropDiscoverableMode:(long long)arg1;
- (void)setAwdlElectionParameters:(id)arg1;
- (void)setAwdlMasterChannel:(id)arg1;
- (void)setAwdlOpMode:(id)arg1;
- (void)setAwdlPeerDatabase:(id)arg1;
- (void)setAwdlSecondaryMasterChannel:(id)arg1;
- (void)setAwdlSidecarDiagnostics:(id)arg1;
- (void)setAwdlStrategy:(id)arg1;
- (void)setAwdlSyncChannelSequence:(id)arg1;
- (void)setAwdlSyncEnabled:(id)arg1;
- (void)setAwdlSyncParameters:(id)arg1;
- (void)setAwdlSyncState:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpv6Addresses:(id)arg1;
- (void)setIsAWDLRealTimeMode:(bool)arg1;
- (void)setPower:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)awdlElectionParametersString;
- (id)awdlMasterChannelString;
- (id)awdlOpModeString;
- (id)awdlScheduleString;
- (id)awdlSecondaryMasterChannelString;
- (id)awdlSyncChannelSequenceString;
- (id)awdlSyncStateString;
- (id)dictionary;

@end
