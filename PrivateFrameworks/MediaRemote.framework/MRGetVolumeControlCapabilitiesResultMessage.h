
@interface MRGetVolumeControlCapabilitiesResultMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int capabilities;

- (unsigned int)capabilities;
- (id)initWithCapabilities:(unsigned int)arg1;
- (unsigned long long)type;

@end
