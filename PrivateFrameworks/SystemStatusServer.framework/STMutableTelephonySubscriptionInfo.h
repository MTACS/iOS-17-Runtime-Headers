
@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo

@property (nonatomic, copy) NSString *SIMLabel;
@property (nonatomic, copy) NSString *SIMStatus;
@property (getter=isBootstrap, nonatomic) bool bootstrap;
@property (nonatomic) unsigned long long callForwardingIndicator;
@property (nonatomic) unsigned long long cellularRegistrationStatus;
@property (nonatomic) unsigned long long dataConnectionType;
@property (getter=isHiddenSIM, nonatomic) bool hiddenSIM;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *lastKnownNetworkCountryCode;
@property (nonatomic) unsigned long long maxSignalStrengthBars;
@property (getter=isNetworkReselectionNeeded, nonatomic) bool networkReselectionNeeded;
@property (nonatomic, copy) NSString *operatorName;
@property (getter=isPreferredForDataConnections, nonatomic) bool preferredForDataConnections;
@property (getter=isProvidingDataConnection, nonatomic) bool providingDataConnection;
@property (getter=isRegisteredWithoutCellular, nonatomic) bool registeredWithoutCellular;
@property (nonatomic) long long registrationRejectionCauseCode;
@property (nonatomic) unsigned long long registrationStatus;
@property (nonatomic, copy) NSString *shortSIMLabel;
@property (nonatomic) unsigned long long signalStrengthBars;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBootstrap:(bool)arg1;
- (void)setCallForwardingIndicator:(unsigned long long)arg1;
- (void)setCellularRegistrationStatus:(unsigned long long)arg1;
- (void)setDataConnectionType:(unsigned long long)arg1;
- (void)setHiddenSIM:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastKnownNetworkCountryCode:(id)arg1;
- (void)setMaxSignalStrengthBars:(unsigned long long)arg1;
- (void)setNetworkReselectionNeeded:(bool)arg1;
- (void)setOperatorName:(id)arg1;
- (void)setPreferredForDataConnections:(bool)arg1;
- (void)setProvidingDataConnection:(bool)arg1;
- (void)setRegisteredWithoutCellular:(bool)arg1;
- (void)setRegistrationRejectionCauseCode:(long long)arg1;
- (void)setRegistrationStatus:(unsigned long long)arg1;
- (void)setSIMLabel:(id)arg1;
- (void)setSIMStatus:(id)arg1;
- (void)setShortSIMLabel:(id)arg1;
- (void)setSignalStrengthBars:(unsigned long long)arg1;

@end
