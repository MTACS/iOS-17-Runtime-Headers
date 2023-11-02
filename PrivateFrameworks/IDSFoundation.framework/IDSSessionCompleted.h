
@interface IDSSessionCompleted : NSObject <CUTCoreAnalyticsMetric> {
    unsigned int  _clientType;
    unsigned int  _destinationType;
    NSNumber * _durationOfSession;
    NSNumber * _durationToConnect;
    unsigned int  _endedReason;
    NSString * _guid;
    bool  _isCellularInterfaceDisallowed;
    bool  _isInitiator;
    bool  _isQREnabled;
    bool  _isScreenSharingSessionType;
    bool  _isUsingQRDirectly;
    bool  _isWifiInterfaceDisallowed;
    bool  _isWithDefaultPairedDevice;
    unsigned int  _linkProtocol;
    unsigned int  _linkType;
    NSNumber * _protocolVersionNumber;
    NSString * _serviceName;
    unsigned int  _transportType;
}

@property (nonatomic, readonly) unsigned int clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int destinationType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSNumber *durationOfSession;
@property (nonatomic, readonly) NSNumber *durationToConnect;
@property (nonatomic, readonly) unsigned int endedReason;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCellularInterfaceDisallowed;
@property (nonatomic, readonly) bool isInitiator;
@property (nonatomic, readonly) bool isQREnabled;
@property (nonatomic, readonly) bool isScreenSharingSessionType;
@property (nonatomic, readonly) bool isUsingQRDirectly;
@property (nonatomic, readonly) bool isWifiInterfaceDisallowed;
@property (nonatomic, readonly) bool isWithDefaultPairedDevice;
@property (nonatomic, readonly) unsigned int linkProtocol;
@property (nonatomic, readonly) unsigned int linkType;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *protocolVersionNumber;
@property (nonatomic, readonly) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int transportType;

- (void).cxx_destruct;
- (unsigned int)clientType;
- (unsigned int)destinationType;
- (id)dictionaryRepresentation;
- (id)durationOfSession;
- (id)durationToConnect;
- (unsigned int)endedReason;
- (id)guid;
- (id)initWithGuid:(id)arg1 protocolVersionNumber:(id)arg2 serviceName:(id)arg3 clientType:(unsigned int)arg4 isQREnabled:(bool)arg5 isUsingQRDirectly:(bool)arg6 isInitiator:(bool)arg7 isScreenSharingSessionType:(bool)arg8 isWithDefaultPairedDevice:(bool)arg9 transportType:(unsigned int)arg10 linkType:(unsigned int)arg11 linkProtocol:(unsigned int)arg12 endedReason:(unsigned int)arg13 destinationType:(unsigned int)arg14 durationOfSession:(id)arg15 durationToConnect:(id)arg16 isWifiInterfaceDisallowed:(bool)arg17 isCellularInterfaceDisallowed:(bool)arg18;
- (bool)isCellularInterfaceDisallowed;
- (bool)isInitiator;
- (bool)isQREnabled;
- (bool)isScreenSharingSessionType;
- (bool)isUsingQRDirectly;
- (bool)isWifiInterfaceDisallowed;
- (bool)isWithDefaultPairedDevice;
- (unsigned int)linkProtocol;
- (unsigned int)linkType;
- (id)name;
- (id)protocolVersionNumber;
- (id)serviceName;
- (unsigned int)transportType;

@end
