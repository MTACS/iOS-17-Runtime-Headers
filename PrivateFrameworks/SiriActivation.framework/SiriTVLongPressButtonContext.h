
@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext {
    NSString * _activeDeviceBluetoothIdentifier;
    bool  _isListening;
    bool  _isSourcePTTEligible;
    unsigned long long  _remoteType;
}

@property (nonatomic, copy) NSString *activeDeviceBluetoothIdentifier;
@property (nonatomic) bool isListening;
@property (nonatomic) bool isSourcePTTEligible;
@property (nonatomic) unsigned long long remoteType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDeviceBluetoothIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isListening;
- (bool)isPTTEligible;
- (bool)isSourcePTTEligible;
- (unsigned long long)remoteType;
- (void)setActiveDeviceBluetoothIdentifier:(id)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setIsSourcePTTEligible:(bool)arg1;
- (void)setRemoteType:(unsigned long long)arg1;
- (void)setSourcePTTEligibility:(bool)arg1;

@end
