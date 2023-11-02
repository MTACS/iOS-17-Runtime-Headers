
@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol> {
    bool  _clockManagerAvailable;
    NSMutableArray * _clockManagerMatchNotificationsArray;
    NSObject<OS_dispatch_queue> * _clockManagerNotifications;
    NSMutableArray * _clockManagerTerminateNotificationsArray;
    bool  _inited;
    bool  _ptpManagerAvailable;
    NSMutableArray * _ptpManagerMatchNotificationsArray;
    NSObject<OS_dispatch_queue> * _ptpManagerNotifications;
    NSMutableArray * _ptpManagerTerminateNotificationsArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientProtocol;
+ (id)serverProtocol;
+ (id)serviceName;
+ (id)sharedExpositorClient;

- (void).cxx_destruct;
- (id)clockManagerDaemonClassNameForClockIdentifier:(unsigned long long)arg1;
- (id)clockManagerDiagnosticInfo;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)arg1;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)arg1 daemonClassName:(id*)arg2;
- (void)clockManagerIsAvailable;
- (void)clockManagerIsUnavailable;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:(id /* block */)arg1;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:(id /* block */)arg1;
- (id)clockNameForClockIdentifier:(unsigned long long)arg1;
- (id)exportedObject;
- (id)gPTPManagerDiagnosticInfo;
- (void)gPTPManagerIsAvailable;
- (void)gPTPManagerIsUnavailable;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id /* block */)arg1;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id /* block */)arg1;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(unsigned long long)arg1 andPortNumber:(unsigned short)arg2;
- (id)init;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (id)kernelClockAvailableKernelClockIdentifiers;

@end
