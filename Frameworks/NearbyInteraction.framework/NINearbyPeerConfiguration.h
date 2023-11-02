
@interface NINearbyPeerConfiguration : NIConfiguration {
    long long  _backgroundMode;
    bool  _cameraAssistanceEnabled;
    NSDictionary * _debugParameters;
    bool  _extendedDistanceMeasurementEnabled;
    bool  _longRangeEnabled;
    NIDiscoveryToken * _peerDiscoveryToken;
}

@property (nonatomic) long long backgroundMode;
@property (getter=isCameraAssistanceEnabled, nonatomic) bool cameraAssistanceEnabled;
@property (copy) NSDictionary *debugParameters;
@property (getter=isExtendedDistanceMeasurementEnabled, nonatomic) bool extendedDistanceMeasurementEnabled;
@property (getter=isLongRangeEnabled, nonatomic) bool longRangeEnabled;
@property (nonatomic, copy) NIDiscoveryToken *peerDiscoveryToken;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_internalIsCameraAssistanceEnabled;
- (bool)_internalIsExtendedDistanceMeasurementEnabled;
- (long long)backgroundMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugParameters;
- (id)description;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeerToken:(id)arg1;
- (bool)isCameraAssistanceEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isExtendedDistanceMeasurementEnabled;
- (bool)isLongRangeEnabled;
- (id)peerDiscoveryToken;
- (void)setBackgroundMode:(long long)arg1;
- (void)setCameraAssistanceEnabled:(bool)arg1;
- (void)setDebugParameters:(id)arg1;
- (void)setExtendedDistanceMeasurementEnabled:(bool)arg1;
- (void)setLongRangeEnabled:(bool)arg1;
- (void)setPeerDiscoveryToken:(id)arg1;

@end
