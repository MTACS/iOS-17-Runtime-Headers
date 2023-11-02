
@interface MTRThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject <NSCopying> {
    NSNumber * _activeTimestampPresent;
    NSNumber * _channelMaskPresent;
    NSNumber * _channelPresent;
    NSNumber * _delayPresent;
    NSNumber * _extendedPanIdPresent;
    NSNumber * _masterKeyPresent;
    NSNumber * _meshLocalPrefixPresent;
    NSNumber * _networkNamePresent;
    NSNumber * _panIdPresent;
    NSNumber * _pendingTimestampPresent;
    NSNumber * _pskcPresent;
    NSNumber * _securityPolicyPresent;
}

@property (nonatomic, copy) NSNumber *activeTimestampPresent;
@property (nonatomic, copy) NSNumber *channelMaskPresent;
@property (nonatomic, copy) NSNumber *channelPresent;
@property (nonatomic, copy) NSNumber *delayPresent;
@property (nonatomic, copy) NSNumber *extendedPanIdPresent;
@property (nonatomic, copy) NSNumber *masterKeyPresent;
@property (nonatomic, copy) NSNumber *meshLocalPrefixPresent;
@property (nonatomic, copy) NSNumber *networkNamePresent;
@property (nonatomic, copy) NSNumber *panIdPresent;
@property (nonatomic, copy) NSNumber *pendingTimestampPresent;
@property (nonatomic, copy) NSNumber *pskcPresent;
@property (nonatomic, copy) NSNumber *securityPolicyPresent;

- (void).cxx_destruct;
- (id)activeTimestampPresent;
- (id)channelMaskPresent;
- (id)channelPresent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delayPresent;
- (id)description;
- (id)extendedPanIdPresent;
- (id)init;
- (id)masterKeyPresent;
- (id)meshLocalPrefixPresent;
- (id)networkNamePresent;
- (id)panIdPresent;
- (id)pendingTimestampPresent;
- (id)pskcPresent;
- (id)securityPolicyPresent;
- (void)setActiveTimestampPresent:(id)arg1;
- (void)setChannelMaskPresent:(id)arg1;
- (void)setChannelPresent:(id)arg1;
- (void)setDelayPresent:(id)arg1;
- (void)setExtendedPanIdPresent:(id)arg1;
- (void)setMasterKeyPresent:(id)arg1;
- (void)setMeshLocalPrefixPresent:(id)arg1;
- (void)setNetworkNamePresent:(id)arg1;
- (void)setPanIdPresent:(id)arg1;
- (void)setPendingTimestampPresent:(id)arg1;
- (void)setPskcPresent:(id)arg1;
- (void)setSecurityPolicyPresent:(id)arg1;

@end
