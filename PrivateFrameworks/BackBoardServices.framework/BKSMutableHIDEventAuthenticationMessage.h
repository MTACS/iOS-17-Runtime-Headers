
@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned int eventType;
@property (nonatomic, retain) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent;
@property (nonatomic, retain) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent;
@property (nonatomic) unsigned long long originIdentifier;
@property (nonatomic) bool registrantEntitled;
@property (nonatomic) long long secureNameStatus;
@property (nonatomic) unsigned int targetContextID;
@property (nonatomic) unsigned int targetSlotID;
@property (nonatomic) long long versionedPID;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDestinationAuditToken:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHitTestInformationFromEndEvent:(id)arg1;
- (void)setHitTestInformationFromStartEvent:(id)arg1;
- (void)setOriginIdentifier:(unsigned long long)arg1;
- (void)setRegistrantEntitled:(bool)arg1;
- (void)setSecureNameStatus:(long long)arg1;
- (void)setTargetContextID:(unsigned int)arg1;
- (void)setTargetSlotID:(unsigned int)arg1;
- (void)setVersionedPID:(long long)arg1;

@end
