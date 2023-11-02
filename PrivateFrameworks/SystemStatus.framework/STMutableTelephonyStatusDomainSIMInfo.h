
@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (getter=isSIMPresent, nonatomic) bool SIMPresent;
@property (getter=isBootstrap, nonatomic) bool bootstrap;
@property (getter=isCallForwardingEnabled, nonatomic) bool callForwardingEnabled;
@property (nonatomic) unsigned long long cellularServiceState;
@property (nonatomic) unsigned long long dataNetworkType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned long long maxSignalStrengthBars;
@property (getter=isPreferredForDataConnections, nonatomic) bool preferredForDataConnections;
@property (getter=isProvidingDataConnection, nonatomic) bool providingDataConnection;
@property (getter=isRegisteredWithoutCellular, nonatomic) bool registeredWithoutCellular;
@property (nonatomic, copy) NSString *secondaryServiceDescription;
@property (nonatomic, copy) NSString *serviceDescription;
@property (nonatomic) unsigned long long serviceState;
@property (nonatomic, copy) NSString *shortLabel;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBootstrap:(bool)arg1;
- (void)setCallForwardingEnabled:(bool)arg1;
- (void)setCellularServiceState:(unsigned long long)arg1;
- (void)setDataNetworkType:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxSignalStrengthBars:(unsigned long long)arg1;
- (void)setPreferredForDataConnections:(bool)arg1;
- (void)setProvidingDataConnection:(bool)arg1;
- (void)setRegisteredWithoutCellular:(bool)arg1;
- (void)setSIMPresent:(bool)arg1;
- (void)setSecondaryServiceDescription:(id)arg1;
- (void)setServiceDescription:(id)arg1;
- (void)setServiceState:(unsigned long long)arg1;
- (void)setShortLabel:(id)arg1;
- (void)setSignalStrengthBars:(unsigned long long)arg1;

@end
