
@interface STTelephonySubscriptionInfo : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _SIMLabel;
    NSString * _SIMStatus;
    bool  _bootstrap;
    unsigned long long  _callForwardingIndicator;
    unsigned long long  _cellularRegistrationStatus;
    unsigned long long  _dataConnectionType;
    bool  _hiddenSIM;
    NSString * _identifier;
    NSString * _lastKnownNetworkCountryCode;
    unsigned long long  _maxSignalStrengthBars;
    bool  _networkReselectionNeeded;
    NSString * _operatorName;
    bool  _preferredForDataConnections;
    bool  _providingDataConnection;
    bool  _registeredWithoutCellular;
    long long  _registrationRejectionCauseCode;
    unsigned long long  _registrationStatus;
    NSString * _shortSIMLabel;
    unsigned long long  _signalStrengthBars;
}

@property (nonatomic, readonly, copy) NSString *SIMLabel;
@property (nonatomic, readonly, copy) NSString *SIMStatus;
@property (getter=isBootstrap, nonatomic, readonly) bool bootstrap;
@property (nonatomic, readonly) unsigned long long callForwardingIndicator;
@property (nonatomic, readonly) unsigned long long cellularRegistrationStatus;
@property (nonatomic, readonly) unsigned long long dataConnectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHiddenSIM, nonatomic, readonly) bool hiddenSIM;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *lastKnownNetworkCountryCode;
@property (nonatomic, readonly) unsigned long long maxSignalStrengthBars;
@property (getter=isNetworkReselectionNeeded, nonatomic, readonly) bool networkReselectionNeeded;
@property (nonatomic, readonly, copy) NSString *operatorName;
@property (getter=isPreferredForDataConnections, nonatomic, readonly) bool preferredForDataConnections;
@property (getter=isProvidingDataConnection, nonatomic, readonly) bool providingDataConnection;
@property (getter=isRegisteredWithoutCellular, nonatomic, readonly) bool registeredWithoutCellular;
@property (nonatomic, readonly) long long registrationRejectionCauseCode;
@property (nonatomic, readonly) unsigned long long registrationStatus;
@property (nonatomic, readonly, copy) NSString *shortSIMLabel;
@property (nonatomic, readonly) unsigned long long signalStrengthBars;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)SIMLabel;
- (id)SIMStatus;
- (unsigned long long)callForwardingIndicator;
- (unsigned long long)cellularRegistrationStatus;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)dataConnectionType;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (bool)isBootstrap;
- (bool)isHiddenSIM;
- (bool)isNetworkReselectionNeeded;
- (bool)isPreferredForDataConnections;
- (bool)isProvidingDataConnection;
- (bool)isRegisteredWithoutCellular;
- (id)lastKnownNetworkCountryCode;
- (unsigned long long)maxSignalStrengthBars;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)operatorName;
- (long long)registrationRejectionCauseCode;
- (unsigned long long)registrationStatus;
- (id)shortSIMLabel;
- (unsigned long long)signalStrengthBars;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
