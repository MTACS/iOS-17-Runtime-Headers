
@interface TSPRXDeviceUnlockViewController : PRXCardContentViewController <TSSetupFlowItem> {
    PRXAction * _action;
    <TSSIMSetupFlowDelegate> * _delegate;
    UIImageView * _radioImageView;
    CUSystemMonitor * _systemMonitor;
    int  springBoardLockStateNotifyToken;
}

@property (retain) PRXAction *action;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) UIImageView *radioImageView;
@property (readonly) Class superclass;
@property (retain) CUSystemMonitor *systemMonitor;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)_handleLockState:(int)arg1;
- (void)_registerLockState;
- (void)_screenStateChanged;
- (void)_startSystemMonitor;
- (void)_stopSystemMonitor;
- (void)_unlockScreen;
- (void)_unregisterLockState;
- (id)action;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)radioImageView;
- (void)setAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRadioImageView:(id)arg1;
- (void)setSystemMonitor:(id)arg1;
- (id)systemMonitor;
- (void)viewDidLoad;

@end
