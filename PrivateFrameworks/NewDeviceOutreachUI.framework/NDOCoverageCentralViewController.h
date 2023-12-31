
@interface NDOCoverageCentralViewController : PSListController <NDOAppleCareAMSUIViewPresenterProtocol> {
    NDOACController * _acController;
    NSMutableArray * _allDevices;
    NDOAppleCareAMSUIViewController * _amsUIVC;
    NSString * _deeplinkParams;
    NDODevice * _defaultDevice;
    NSMutableDictionary * _deviceInfoDict;
    NSMutableDictionary * _deviceSequenceDict;
    NSObject<OS_dispatch_group> * _group;
    bool  _isFromDeeplink;
    bool  _isSignedIn;
    UIContentUnavailableConfiguration * _loadingConfig;
    NDOManager * _ndoManager;
    bool  _openDefaultDeviceDetails;
    NSMutableArray * _pairedDevices;
    NSObject<OS_dispatch_queue> * _policyLookupQueue;
    NSString * _sessionID;
    NSString * _ulSalesURL;
}

@property (nonatomic) NDOACController *acController;
@property (nonatomic, retain) NSMutableArray *allDevices;
@property (nonatomic, retain) NDOAppleCareAMSUIViewController *amsUIVC;
@property (retain) NSString *deeplinkParams;
@property (nonatomic, retain) NDODevice *defaultDevice;
@property (retain) NSMutableDictionary *deviceInfoDict;
@property (retain) NSMutableDictionary *deviceSequenceDict;
@property bool isFromDeeplink;
@property bool isSignedIn;
@property (nonatomic, retain) NDOManager *ndoManager;
@property bool openDefaultDeviceDetails;
@property (nonatomic, retain) NSMutableArray *pairedDevices;
@property (retain) NSString *sessionID;
@property (retain) NSString *ulSalesURL;

- (void).cxx_destruct;
- (id)_errorStateConfig;
- (id)_getDevicePayloadWithParams:(id)arg1;
- (id)_getParamsDictFromPath:(id)arg1;
- (void)_getUpdatedParamsFromPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_noAccountConfig;
- (void)_refresh:(id)arg1;
- (id)acController;
- (void)addFooterLabelToSpecifier:(id)arg1;
- (id)allDevices;
- (id)amsUIVC;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1;
- (void)amsUIViewFinishedWithCompletion:(unsigned long long)arg1 params:(id)arg2;
- (void)completeWithStatus:(unsigned long long)arg1;
- (void)completeWithStatus:(unsigned long long)arg1 params:(id)arg2;
- (id)deeplinkParams;
- (id)defaultDevice;
- (id)deviceInfoDict;
- (id)deviceSequenceDict;
- (void)fetchAllDeviceInfoUsingPolicy:(unsigned long long)arg1 sessionID:(id)arg2 params:(id)arg3 isSales:(bool)arg4 andForcePostFollowup:(bool)arg5 withReply:(id /* block */)arg6;
- (void)fetchAllDevices;
- (void)footerTapped:(id)arg1;
- (void)getAllDeviceInfoUsingPolicy:(unsigned long long)arg1 sessionID:(id)arg2 params:(id)arg3 isSales:(bool)arg4 andForcePostFollowup:(bool)arg5 withReply:(id /* block */)arg6;
- (void)getDeviceInfoForSerialNumber:(id)arg1 usingPolicy:(unsigned long long)arg2 sessionID:(id)arg3 params:(id)arg4 andForcePostFollowup:(bool)arg5 withReply:(id /* block */)arg6;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (bool)isFromDeeplink;
- (bool)isSignedIn;
- (void)loadView;
- (id)ndoManager;
- (void)openAMSUIWithURL:(id)arg1 httpBody:(id)arg2;
- (bool)openDefaultDeviceDetails;
- (void)openURL:(id)arg1;
- (id)pairedDevices;
- (void)resetAll;
- (id)sessionID;
- (void)setAcController:(id)arg1;
- (void)setAllDevices:(id)arg1;
- (void)setAmsUIVC:(id)arg1;
- (void)setDeeplinkParams:(id)arg1;
- (void)setDefaultDevice:(id)arg1;
- (void)setDeviceInfoDict:(id)arg1;
- (void)setDeviceSequenceDict:(id)arg1;
- (void)setIsFromDeeplink:(bool)arg1;
- (void)setIsSignedIn:(bool)arg1;
- (void)setNdoManager:(id)arg1;
- (void)setOpenDefaultDeviceDetails:(bool)arg1;
- (void)setPairedDevices:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setUlSalesURL:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (void)showUI;
- (id)specifiers;
- (id)ulSalesURL;
- (id)updateCells;
- (void)updateDefaultDeviceWithDeviceInfo:(id)arg1;
- (void)updateDeviceInfoForDevice:(id)arg1 usingPolicy:(unsigned long long)arg2 params:(id)arg3 forceUpdateFollowup:(bool)arg4 withReply:(id /* block */)arg5;
- (void)viewDidLoad;

@end
