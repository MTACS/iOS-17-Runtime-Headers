
@interface SiriTVActivationSource : SiriLongPressButtonSource {
    SiriLongPressButtonContext * _context;
    NSString * _deviceIdentifier;
    double  _longPressInterval;
    unsigned long long  _remoteType;
}

@property (nonatomic, retain) SiriLongPressButtonContext *context;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) double longPressInterval;
@property (nonatomic) unsigned long long remoteType;

+ (id)activationSourceForIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_deviceIdentifier;
- (id)context;
- (id)deviceIdentifier;
- (double)longPressInterval;
- (unsigned long long)remoteType;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setListening:(bool)arg1;
- (void)setLongPressInterval:(double)arg1;
- (void)setPTTEligible:(bool)arg1;
- (void)setRemoteType:(unsigned long long)arg1;

@end
