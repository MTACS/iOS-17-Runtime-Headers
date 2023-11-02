
@interface DropInCore.DropInManager : NSObject <DICHomeManagerDelegate> {
    void callCenterManager;
    void deviceManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dropInSessionAnalyticEvent;
    void dropInStateSubscriber;
    void homeManagerProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void messageCenter;
    void sessionManager;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  signposter;
    void stateManager;
    void transactionManager;
    void xpcClientDataSource;
}

- (void).cxx_destruct;
- (void)accessoryDidUpdateName:(id)arg1;
- (void)accessoryDidUpdateSupportedCapabilities:(id)arg1;
- (void)dealloc;
- (void)didAddHome:(id)arg1;
- (void)didRemoveHome:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateAccessControlForUser:(id)arg2;
- (id)init;

@end
