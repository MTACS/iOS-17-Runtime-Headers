
@interface HMDWakePacketConfigurationTLV : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _wakeDestinationAddress;
    HAPTLVUnsignedNumberValue * _wakeDestinationPort;
    HMDSleepConfigurationWakePacketTypeWrapper * _wakePacketType;
    NSData * _wakePattern;
    HMDSleepConfigurationWakeUpTypeWrapper * _wakeType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *wakeDestinationAddress;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *wakeDestinationPort;
@property (nonatomic, retain) HMDSleepConfigurationWakePacketTypeWrapper *wakePacketType;
@property (nonatomic, retain) NSData *wakePattern;
@property (nonatomic, retain) HMDSleepConfigurationWakeUpTypeWrapper *wakeType;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithWakePacketType:(id)arg1 wakeDestinationPort:(id)arg2 wakeDestinationAddress:(id)arg3 wakeType:(id)arg4 wakePattern:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setWakeDestinationAddress:(id)arg1;
- (void)setWakeDestinationPort:(id)arg1;
- (void)setWakePacketType:(id)arg1;
- (void)setWakePattern:(id)arg1;
- (void)setWakeType:(id)arg1;
- (id)wakeDestinationAddress;
- (id)wakeDestinationPort;
- (id)wakePacketType;
- (id)wakePattern;
- (id)wakeType;

@end
