
@interface IDSSessionEndedMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSNumber * _callDuration;
    unsigned int  _conferenceMiscError;
    NSNumber * _connectDuration;
    unsigned int  _connectionType;
    NSNumber * _currentNATType;
    NSNumber * _dataRate;
    unsigned int  _endedReason;
    unsigned int  _gameKitError;
    unsigned int  _genericError;
    NSNumber * _gksError;
    NSNumber * _gksReturnCode;
    NSString * _guid;
    bool  _isInitiator;
    NSNumber * _linkQuality;
    unsigned int  _localNetworkConnection;
    unsigned int  _networkCheckResult;
    NSNumber * _relayConnectDuration;
    NSNumber * _remoteNATType;
    unsigned int  _remoteNetworkConnection;
    bool  _usesRelay;
}

@property (nonatomic, readonly) NSNumber *callDuration;
@property (nonatomic, readonly) unsigned int conferenceMiscError;
@property (nonatomic, readonly) NSNumber *connectDuration;
@property (nonatomic, readonly) unsigned int connectionType;
@property (nonatomic, readonly) NSNumber *currentNATType;
@property (nonatomic, readonly) NSNumber *dataRate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned int endedReason;
@property (nonatomic, readonly) unsigned int gameKitError;
@property (nonatomic, readonly) unsigned int genericError;
@property (nonatomic, readonly) NSNumber *gksError;
@property (nonatomic, readonly) NSNumber *gksReturnCode;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInitiator;
@property (nonatomic, readonly) NSNumber *linkQuality;
@property (nonatomic, readonly) unsigned int localNetworkConnection;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned int networkCheckResult;
@property (nonatomic, readonly) NSNumber *relayConnectDuration;
@property (nonatomic, readonly) NSNumber *remoteNATType;
@property (nonatomic, readonly) unsigned int remoteNetworkConnection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesRelay;

- (void).cxx_destruct;
- (id)callDuration;
- (unsigned int)conferenceMiscError;
- (id)connectDuration;
- (unsigned int)connectionType;
- (id)currentNATType;
- (id)dataRate;
- (id)dictionaryRepresentation;
- (unsigned int)endedReason;
- (unsigned int)gameKitError;
- (unsigned int)genericError;
- (id)gksError;
- (id)gksReturnCode;
- (id)guid;
- (id)initWithGuid:(id)arg1 endedReason:(unsigned int)arg2 genericError:(unsigned int)arg3 gameKitError:(unsigned int)arg4 conferenceMiscError:(unsigned int)arg5 callDuration:(id)arg6 networkCheckResult:(unsigned int)arg7 dataRate:(id)arg8 gksError:(id)arg9 connectDuration:(id)arg10 remoteNetworkConnection:(unsigned int)arg11 localNetworkConnection:(unsigned int)arg12 connectionType:(unsigned int)arg13 usesRelay:(bool)arg14 currentNATType:(id)arg15 remoteNATType:(id)arg16 relayConnectDuration:(id)arg17 isInitiator:(bool)arg18 linkQuality:(id)arg19 gksReturnCode:(id)arg20;
- (bool)isInitiator;
- (id)linkQuality;
- (unsigned int)localNetworkConnection;
- (id)name;
- (unsigned int)networkCheckResult;
- (id)relayConnectDuration;
- (id)remoteNATType;
- (unsigned int)remoteNetworkConnection;
- (bool)usesRelay;

@end
