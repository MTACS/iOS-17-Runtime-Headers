
@interface STTelephonyStatusDomainSIMInfo : NSObject <BSDebugDescriptionProviding, NSSecureCoding, STStatusDomainData, STStatusDomainDataDifferencing> {
    bool  _SIMPresent;
    bool  _bootstrap;
    bool  _callForwardingEnabled;
    unsigned long long  _cellularServiceState;
    unsigned long long  _dataNetworkType;
    NSString * _label;
    unsigned long long  _maxSignalStrengthBars;
    bool  _preferredForDataConnections;
    bool  _providingDataConnection;
    bool  _registeredWithoutCellular;
    NSString * _secondaryServiceDescription;
    NSString * _serviceDescription;
    unsigned long long  _serviceState;
    NSString * _shortLabel;
    unsigned long long  _signalStrengthBars;
}

@property (getter=isSIMPresent, nonatomic, readonly) bool SIMPresent;
@property (getter=isBootstrap, nonatomic, readonly) bool bootstrap;
@property (getter=isCallForwardingEnabled, nonatomic, readonly) bool callForwardingEnabled;
@property (nonatomic, readonly) unsigned long long cellularServiceState;
@property (nonatomic, readonly) unsigned long long dataNetworkType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long maxSignalStrengthBars;
@property (getter=isPreferredForDataConnections, nonatomic, readonly) bool preferredForDataConnections;
@property (getter=isProvidingDataConnection, nonatomic, readonly) bool providingDataConnection;
@property (getter=isRegisteredWithoutCellular, nonatomic, readonly) bool registeredWithoutCellular;
@property (nonatomic, readonly, copy) NSString *secondaryServiceDescription;
@property (nonatomic, readonly, copy) NSString *serviceDescription;
@property (nonatomic, readonly) unsigned long long serviceState;
@property (nonatomic, readonly, copy) NSString *shortLabel;
@property (nonatomic, readonly) unsigned long long signalStrengthBars;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)cellularServiceState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataByApplyingDiff:(id)arg1;
- (unsigned long long)dataNetworkType;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isBootstrap;
- (bool)isCallForwardingEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isPreferredForDataConnections;
- (bool)isProvidingDataConnection;
- (bool)isRegisteredWithoutCellular;
- (bool)isSIMPresent;
- (id)label;
- (unsigned long long)maxSignalStrengthBars;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)secondaryServiceDescription;
- (id)serviceDescription;
- (unsigned long long)serviceState;
- (id)shortLabel;
- (unsigned long long)signalStrengthBars;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
