
@interface IDSCellularLinkMonitor : NSObject <CoreTelephonyClientDataDelegate> {
    NSString * _cellularDataInterfaceName;
    NSHashTable * _cellularLinkDelegates;
    unsigned int  _cellularMTU;
    CoreTelephonyClient * _ctClient;
    <CoreTelephonyClientDataDelegate> * _ctClientDataDelegate;
    struct __CTServerConnection { } * _ctServerConnection;
    CTXPCServiceSubscriptionContext * _currentDataSubscriptionContextSync;
    NSString * _dataIndicator;
    unsigned int  _dataSoMaskBits;
    bool  _dataUsable;
    NSMutableDictionary * _notificationRegInfo;
    unsigned int  _radioAccessTechnology;
    unsigned int  _remoteDeviceVersion;
}

@property (nonatomic, retain) CoreTelephonyClient *_ctClient;
@property (nonatomic) struct __CTServerConnection { }*_ctServerConnection;
@property (readonly) NSString *cellularDataInterfaceName;
@property (readonly) unsigned int cellularMTU;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *currentDataSubscriptionContextSync;
@property (readonly) unsigned int dataSoMaskBits;
@property (readonly) bool dataUsable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int radioAccessTechnology;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_ctClient;
- (struct __CTServerConnection { }*)_ctServerConnection;
- (bool)_dataContextUsable:(id)arg1 dataStatus:(id)arg2;
- (id)_getCTXPCServiceSubscriptionContext;
- (id)_getCurrentDataSimContext:(id)arg1 inContextArray:(id)arg2;
- (id)_getDataStatus;
- (void)_notifyClientDataBearerSoMask:(id)arg1;
- (void)_setupCTServerConnection;
- (bool)_updateCellularDataInterface:(bool)arg1;
- (bool)_updateCellularDataInterfaceNameByConnectionState:(int)arg1 isStateActiveRequired:(bool)arg2 interfaceName:(id)arg3;
- (bool)_updateCellularMTU;
- (bool)_updateDataBearerSoMask;
- (bool)_updateDataBearerSoMaskWithCTDataStatus:(id)arg1;
- (void)_updateDataStatus;
- (bool)_updateRadioAccessTechnology;
- (bool)_updateRadioAccessTechnologyWithCTDataStatus:(id)arg1;
- (void)addCellularLinkDelegate:(id)arg1;
- (id)cellularDataInterfaceName;
- (unsigned int)cellularMTU;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)currentCellularSignalStrength:(int*)arg1 signalStrength:(int*)arg2 signalGrade:(int*)arg3;
- (id)currentDataSubscriptionContextSync;
- (unsigned int)dataSoMaskBits;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (bool)dataUsable;
- (void)dealloc;
- (bool)dropIPPackets:(id)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 remoteAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg3 isRelay:(bool)arg4 channelNumberMSB:(unsigned char)arg5;
- (id)init;
- (void)preferredDataSimChanged:(id)arg1;
- (void)processCTConnectionStateChangeNotification:(id)arg1 connectionStatus:(id)arg2;
- (unsigned int)radioAccessTechnology;
- (void)registerCellularDataStatusNotification:(bool)arg1;
- (void)removeCellularLinkDelegate:(id)arg1;
- (void)removePacketNotificationFilter;
- (void)reset;
- (bool)setPacketNotificationFilter:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 remote:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2 uniqueTag:(unsigned int)arg3 callType:(unsigned char)arg4;
- (void)setRemoteDeviceVersion:(unsigned int)arg1;
- (void)set_ctClient:(id)arg1;
- (void)set_ctServerConnection:(struct __CTServerConnection { }*)arg1;
- (void)updateProtocolQualityOfService:(bool)arg1 localAddress:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg2;

@end
