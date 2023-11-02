
@interface HDSSetupSession : NSObject <AVAudioPlayerDelegate, FMFSessionDelegate, SignpostProviding> {
    bool  _acceptedMusicTerms;
    bool  _activateCalled;
    double  _activationSecs;
    int  _activeDeviceSelectionState;
    double  _addDeviceSecs;
    NSDictionary * _additionalMetrics;
    int  _amsActivationState;
    double  _amsOptimizationSecs;
    unsigned long long  _amsOptimizationStartTicks;
    bool  _apcEnabled;
    bool  _apcInitDone;
    APCListener * _apcListener;
    bool  _apcListening;
    bool  _apcMetricsLogged;
    NSString * _apcPasscode;
    bool  _apcPlayAgain;
    bool  _apcPlaying;
    bool  _apcSecured;
    bool  _apcSkip;
    bool  _apcStartDone;
    unsigned long long  _apcStartTicks;
    bool  _apcStartedPairSetup;
    int  _apcState;
    unsigned int  _apcTimeoutCount;
    NSObject<OS_dispatch_source> * _apcTimer;
    bool  _apcTryingPasscode;
    NSString * _appleIDPassword;
    bool  _appleMusicEnabled;
    bool  _appleMusicForce;
    int  _appleMusicState;
    NSObject<OS_dispatch_source> * _appleMusicTimeoutTimer;
    int  _appleStoreMode;
    double  _assignRoomSecs;
    id /* block */  _audioPlayerCompletion;
    AVAudioPlayer * _audioPlayerStart;
    AVAudioPlayer * _audioPlayerStep;
    bool  _audioProgress;
    AVAudioSession * _audioSession;
    int  _authKitTrustState;
    int  _automaticSoftwareUpdateAgreed;
    int  _automaticSoftwareUpdateState;
    bool  _automaticUpdatesEnabled;
    NSArray * _availableHomes;
    double  _basicConfigSecs;
    unsigned long long  _basicConfigStartTicks;
    int  _basicConfigState;
    int  _bgActivationState;
    HDSBonjourTest * _bonjourTestOperation;
    int  _bonjourTestState;
    SFDeviceOperationCNJSetup * _captiveJoin;
    int  _captiveJoinState;
    bool  _cdpEnabled;
    SFDeviceOperationCDPSetup * _cdpSetupOperation;
    double  _cdpSetupSecs;
    int  _cdpState;
    RPCompanionLinkClient * _companionLinkClient;
    NSString * _companionSiriLanguageCode;
    unsigned long long  _configureStartTicks;
    double  _configureTimeSecs;
    bool  _delayForOdeonStereoPair;
    int  _delayForOdeonStereoPairSeconds;
    NSString * _deviceBuildVersion;
    id /* block */  _deviceColorFoundHandler;
    NSString * _deviceGUID;
    NSString * _deviceModel;
    NSString * _deviceSerialNumber;
    bool  _didShowCaptiveSheet;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMAccessory * _existingHomepodInSelectedRoom;
    double  _finishSecs;
    unsigned long long  _finishStartTicks;
    int  _finishState;
    bool  _forceSoftwareUpdate;
    bool  _forceSoftwareUpdateForADP;
    NSString * _forcedCLIPasscode;
    NSString * _forcedPasscode;
    bool  _hasExistingHomePod;
    bool  _hasExistingHomePodInAccount;
    bool  _hasExistingHomePodInSelectedRoom;
    bool  _hasMultipleUsers;
    HDSFileTransfer * _hdsFileTransferSession;
    double  _homeKitHDSMs;
    NSString * _homeKitSelectedRoomName;
    int  _homeKitSetupModeState;
    HDSDeviceOperationHomeKitSetup * _homeKitSetupOperation;
    double  _homeKitSetupSecs;
    int  _homeKitSetupState;
    unsigned long long  _homeKitStartTicks;
    int  _homeKitUserInputState;
    bool  _homePodCanSUNoSetup;
    bool  _homePodCapableOfJS;
    bool  _homePodIsCallbellCapable;
    bool  _homePodIsSUNoSetup;
    int  _homePodJSCheckState;
    bool  _homePodNeedsSU;
    int  _homePodProductVersion;
    NSString * _homePodProductVersionString;
    bool  _homePodReceivedSUResponse;
    bool  _homePodRecievedProductVersionResponse;
    double  _homePodSUNoSetupEstTime;
    int  _homePodSUNoSetupState;
    int  _homePodSUState;
    bool  _homePodSaysNeedsSUNoSetup;
    bool  _homePodSoftwareUpdateAckNonSetupEnabled;
    int  _homePodSoftwareUpdateAckNonSetupState;
    bool  _homePodSoftwareUpdateCancelled;
    int  _homePodSoftwareUpdateNonSetupCancelled;
    int  _homePodSoftwareUpdateNonSetupCompletedState;
    bool  _homePodSoftwareUpdateNonSetupWasCompleted;
    int  _homePodSoftwareUpdateStateNonSetup;
    bool  _homePodSoftwareUpdateSucceeded;
    bool  _homePodSoftwareUpdateUpdateInstalled;
    bool  _homeSafetySecurityEnabled;
    bool  _homeiCloudEnabled;
    int  _homepodSoftwareUpdateState;
    ACAccount * _iCloudAccount;
    int  _iCloudAccountState;
    ACAccountStore * _iCloudAccountStore;
    double  _iCloudAuthMs;
    NSString * _iCloudUserID;
    SSAccount * _iTunesAccount;
    double  _iTunesAuthMs;
    bool  _iTunesSignInSkip;
    NSString * _iTunesUserID;
    double  _iTunesWaitSecs;
    bool  _invalidateCalled;
    bool  _isCLIMode;
    bool  _isHPApp;
    bool  _liveOn;
    bool  _locationDecided;
    bool  _locationEnabled;
    int  _locationSelectionState;
    bool  _logMetricsCalled;
    bool  _lpcAligned;
    int  _lpcAlignmentState;
    bool  _lpcPlayAgain;
    bool  _lpcSkip;
    double  _mediaSystemWaitSecs;
    int  _multiUserEnableState;
    int  _multiUserEnableStepState;
    double  _nonUserWaitSecs;
    unsigned long long  _numberOfHomePodsInAccount;
    unsigned long long  _numberOfHomePodsInHome;
    unsigned long long  _numberOfHomes;
    double  _odeonSecs;
    int  _odeonState;
    unsigned int  _pairSetupFlags;
    double  _pairSetupSecs;
    int  _pairSetupState;
    bool  _pauseAfterPreAuth;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    bool  _peerSupportsCaptiveNetworks;
    double  _personalRequestSecs;
    int  _personalRequestsChoice;
    int  _personalRequestsSelectionState;
    int  _personalRequestsSkipCardState;
    int  _personalRequestsState;
    NSArray * _potentialStereoCounterparts;
    NSArray * _potentialTVs;
    id /* block */  _preAuthHandler;
    NSDictionary * _preAuthResponse;
    bool  _preAuthStartedProgress;
    int  _preAuthState;
    bool  _preShareSettingsAgreed;
    int  _preShareSettingsState;
    bool  _prefBonjourTest;
    bool  _prefForceSiriGreeting;
    bool  _prefLEDPasscodeEnabled;
    bool  _prefMultiUser;
    bool  _prefPrototypeForceUpdate;
    bool  _prefStereoPairEnabled;
    bool  _prefStereoWait;
    bool  _prefTVAudioEnabled;
    int  _preflightAppleMusicState;
    int  _preflightCDPState;
    bool  _preflightEnabled;
    int  _preflightMiscState;
    int  _preflightTrustedDeviceState;
    int  _preflightWiFiState;
    int  _preflightiCloudState;
    int  _preflightiTunesState;
    UIViewController * _presentingViewController;
    bool  _preventAppleWiFi;
    id /* block */  _progressHandler;
    id /* block */  _promptForAppleMusicHandler;
    id /* block */  _promptForAutomaticSoftwareUpdateHandler;
    id /* block */  _promptForCaptiveNetworkHandler;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForHomePodSoftwareUpdateNonSetupAck;
    id /* block */  _promptForHomePodSoftwareUpdateNonSetupCancelled;
    id /* block */  _promptForHomePodSoftwareUpdateNonSetupCompleted;
    id /* block */  _promptForHomeiCloudHandler;
    id /* block */  _promptForLocationEnableHandler;
    id /* block */  _promptForPINHandler;
    id /* block */  _promptForPersonalRequestsHandler;
    id /* block */  _promptForRoomHandlerDetailed;
    id /* block */  _promptForSetupCompletionHandler;
    id /* block */  _promptForSetupPSGHandler;
    id /* block */  _promptForSiriEnableHandler;
    id /* block */  _promptForSiriLanguageHandler;
    id /* block */  _promptForSiriVoiceSelectionHandler;
    id /* block */  _promptForSoftwareUpdateHandler;
    id /* block */  _promptForSoundRecognitionHandler;
    id /* block */  _promptForStereoMultipleHandler;
    id /* block */  _promptForStereoRoleHandler;
    id /* block */  _promptForTVAudioHandler;
    id /* block */  _promptForTermsHandler;
    id /* block */  _promptForiTunesSignInHandler;
    id /* block */  _promptToInstallHomeAppHandler;
    id /* block */  _promptToShareSettingsHandler;
    int  _proxSetupActiveToken;
    bool  _psgEnabled;
    HDSPSGHelper * _psgHelper;
    bool  _psgSelected;
    int  _psgState;
    NSSet * _psgsInSelectedRoom;
    double  _reachabilitySecs;
    int  _recognizeVoiceEnabled;
    int  _recognizeVoiceState;
    int  _recognizeVoiceStepState;
    int  _rmvSelectionState;
    NSSet * _roomsInPSG;
    bool  _selectedRoomHasOdeon;
    long long  _selectedRoomHomePodAndStereoPairCount;
    NSString * _selectedSiriLanguageCode;
    AFVoiceInfo * _selectedSiriVoice;
    NSString * _sessionID;
    double  _setupDeviceSecs;
    SFSession * _sfSession;
    bool  _sfSessionSecured;
    int  _sfSessionState;
    bool  _shareSettingsAgreed;
    int  _shareSettingsState;
    bool  _shouldShowCardForPRCounts;
    int  _siriDataSharing;
    bool  _siriEnabled;
    AFEnablementConfiguration * _siriEnablementConfiguration;
    AFEnablementFlowConfigurationProvider * _siriEnablementConfigurationProvider;
    int  _siriEnablementConfigurationState;
    unsigned int  _siriFlags;
    bool  _siriForEveryoneAnswered;
    int  _siriForEveryoneState;
    NSArray * _siriLanguageCodes;
    bool  _siriLanguagePicked;
    int  _siriLanguageState;
    bool  _siriPasscodeEnabled;
    bool  _siriPasscodeInitDone;
    bool  _siriPasscodeSecured;
    int  _siriPasscodeState;
    int  _siriSettingState;
    int  _siriVoiceProfileState;
    int  _softwareUpdateAgreed;
    HMAccessorySoftwareUpdateControllerV2 * _softwareUpdateController;
    int  _softwareUpdateState;
    bool  _soundRecognitionAndDropInAgreed;
    bool  _soundRecognitionAndDropInSelected;
    int  _soundRecognitionAndDropInState;
    bool  _soundRecognitionOptedIn;
    int  _soundRecognitionSelectionState;
    unsigned long long  _startTicks;
    HMAccessory * _stereoCounterpartAccessory;
    unsigned char  _stereoCounterpartColor;
    int  _stereoPairRole;
    int  _stereoPairUserInputState;
    bool  _termsAgreed;
    int  _termsState;
    unsigned long long  _testFlags;
    double  _totalSecs;
    bool  _touchRemoteEnabled;
    int  _trActivationState;
    double  _trAuthenticationSecs;
    unsigned long long  _trAuthenticationStartTicks;
    int  _trAuthenticationState;
    bool  _trAuthenticationStateReset;
    double  _trAuthenticationTotalSecs;
    bool  _trNeedsNetwork;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    double  _trSetupConfigurationSecs;
    unsigned long long  _trSetupConfigurationStartTicks;
    int  _trSetupConfigurationState;
    NSSet * _trUnauthServices;
    bool  _trUseAIDA;
    bool  _tvAudioEnabled;
    HMAccessory * _tvAudioInput;
    bool  _tvAudioInputAvailable;
    int  _tvAudioUserInputState;
    double  _ulhNonUserWaitSecs;
    bool  _userOptedToHH2;
    unsigned long long  _userWaitStartTicks;
    double  _userWaitTimeSecs;
    double  _wifiBonjourTestSecs;
    bool  _wifiIsCaptive;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
    double  _wifiSetupStepSecs;
}

@property (nonatomic) bool acceptedMusicTerms;
@property (nonatomic, copy) NSDictionary *additionalMetrics;
@property (nonatomic, retain) NSString *appleIDPassword;
@property (nonatomic, copy) NSArray *availableHomes;
@property (nonatomic, readonly) int bonjourTestState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delayForOdeonStereoPair;
@property (nonatomic) int delayForOdeonStereoPairSeconds;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ deviceColorFoundHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool forceSoftwareUpdateForADP;
@property (nonatomic) bool hasExistingHomePod;
@property (nonatomic) bool hasExistingHomePodInAccount;
@property (nonatomic, readonly) bool hasMultipleUsers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool homePodCanSUNoSetup;
@property (nonatomic) bool homePodIsSUNoSetup;
@property (nonatomic) int homePodProductVersion;
@property (nonatomic) double homePodSUNoSetupEstTime;
@property (nonatomic) int homePodSUNoSetupState;
@property (nonatomic) int homePodSUState;
@property (nonatomic) bool homePodSaysNeedsSUNoSetup;
@property (nonatomic) bool homePodSoftwareUpdateNonSetupWasCompleted;
@property (nonatomic) bool isCLIMode;
@property (nonatomic) bool isHPApp;
@property (nonatomic) bool liveOn;
@property (nonatomic) bool pauseAfterPreAuth;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (nonatomic, copy) id /* block */ preAuthHandler;
@property (nonatomic, readonly) NSDictionary *preAuthResponse;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForAppleMusicHandler;
@property (nonatomic, copy) id /* block */ promptForAutomaticSoftwareUpdateHandler;
@property (nonatomic, copy) id /* block */ promptForCaptiveNetworkHandler;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForHomePodSoftwareUpdateNonSetupAck;
@property (nonatomic, copy) id /* block */ promptForHomePodSoftwareUpdateNonSetupCancelled;
@property (nonatomic, copy) id /* block */ promptForHomePodSoftwareUpdateNonSetupCompleted;
@property (nonatomic, copy) id /* block */ promptForHomeiCloudHandler;
@property (nonatomic, copy) id /* block */ promptForLocationEnableHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ promptForPersonalRequestsHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandlerDetailed;
@property (nonatomic, copy) id /* block */ promptForSetupCompletionHandler;
@property (nonatomic, copy) id /* block */ promptForSetupPSGHandler;
@property (nonatomic, copy) id /* block */ promptForSiriEnableHandler;
@property (nonatomic, copy) id /* block */ promptForSiriLanguageHandler;
@property (nonatomic, copy) id /* block */ promptForSiriVoiceSelectionHandler;
@property (nonatomic, copy) id /* block */ promptForSoftwareUpdateHandler;
@property (nonatomic, copy) id /* block */ promptForSoundRecognitionHandler;
@property (nonatomic, copy) id /* block */ promptForStereoMultipleHandler;
@property (nonatomic, copy) id /* block */ promptForStereoRoleHandler;
@property (nonatomic, copy) id /* block */ promptForTVAudioHandler;
@property (nonatomic, copy) id /* block */ promptForTermsHandler;
@property (nonatomic, copy) id /* block */ promptForiTunesSignInHandler;
@property (nonatomic, copy) id /* block */ promptToInstallHomeAppHandler;
@property (nonatomic, copy) id /* block */ promptToShareSettingsHandler;
@property (nonatomic, readonly) HMHome *selectedHome;
@property (nonatomic, readonly) bool selectedRoomHasHomePods;
@property (nonatomic, readonly) NSString *selectedSiriLanguageCode;
@property (readonly) unsigned long long signpostID;
@property (nonatomic, readonly) bool siriDataSharingEnabled;
@property (nonatomic, readonly) unsigned char stereoCounterpartColor;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long testFlags;
@property (nonatomic) bool touchRemoteEnabled;
@property (nonatomic) bool userOptedToHH2;

+ (id)signpostLog;

- (void).cxx_destruct;
- (void)_activate;
- (void)_cleanup;
- (void)_cleanupSession;
- (int)_enableSiriForPersonalRequestIfNecessary;
- (void)_getSiriEnablementConfiguration;
- (void)_handlePeerEvent:(id)arg1 flags:(unsigned int)arg2;
- (id)_homeKitFindSettingsWithKeyPath:(id)arg1 group:(id)arg2;
- (void)_homeKitUpdateiCloudSwitchState:(bool)arg1;
- (id)_homePodsInAccount;
- (id)_homePodsInSelectedHome;
- (void)_invalidate;
- (void)_logErrorMetrics:(id)arg1 inLabel:(id)arg2;
- (void)_logHomeKitPerformanceMetrics;
- (void)_logMetrics:(id)arg1;
- (void)_logMetricsForSoftError:(id)arg1 label:(id)arg2;
- (void)_logPerformanceMetrics:(id)arg1;
- (void)_logUsageMetrics:(id)arg1;
- (unsigned long long)_peerDeviceSupportedStereoPairVersions;
- (void)_preflightAppleMusicCompleted:(int)arg1;
- (void)_promptForPINWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;
- (bool)_recognizeVoiceAlreadyEnabled;
- (void)_reportError:(id)arg1 label:(id)arg2;
- (bool)_roomHasOdeonConfig:(id)arg1;
- (void)_run;
- (int)_runAppleMusic;
- (int)_runAudioPasscode;
- (void)_runAudioPasscodeCleanup:(bool)arg1;
- (void)_runAudioPasscodeHandleData:(id)arg1;
- (void)_runAudioPasscodeInitRequest;
- (void)_runAudioPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeLogMetrics;
- (void)_runAudioPasscodeStartRequest;
- (void)_runAudioPasscodeStartResponse:(id)arg1 error:(id)arg2;
- (void)_runAudioPasscodeStopRequest;
- (void)_runAudioPasscodeTimeout;
- (int)_runAuthKitTrustFinish;
- (void)_runAuthKitTrustStartIfNeeded;
- (int)_runAutomaticSoftwareUpdate;
- (void)_runBackgroundActivation;
- (int)_runBasicConfig;
- (void)_runBasicConfigReceiveResponse:(id)arg1 error:(id)arg2;
- (void)_runBasicConfigSendRequest;
- (int)_runBonjourTest;
- (int)_runCDPSetup:(bool)arg1;
- (int)_runCaptiveJoin;
- (int)_runCheckAccount;
- (void)_runFinishRequest;
- (void)_runFinishResponse:(id)arg1 error:(id)arg2;
- (int)_runFinishStart;
- (int)_runForcedHomePodSoftwareUpdateNonSetup;
- (int)_runHomeKitSetup;
- (void)_runHomeKitSetupMode;
- (int)_runHomeKitUserInput;
- (int)_runHomePodSoftwareUpdate;
- (int)_runHomePodSoftwareUpdateNonSetupAcknowledgement;
- (int)_runHomePodSoftwareUpdateNonSetupCancelled;
- (int)_runHomePodSoftwareUpdateNonSetupComplete;
- (int)_runLEDPassCodeAlignment;
- (int)_runMultiUserEnable;
- (void)_runMultiUserEnableEnableSettingStart:(id)arg1 privateSettings:(bool)arg2;
- (void)_runMultiUserEnableHome;
- (int)_runPairSetup;
- (int)_runPersonalRequests;
- (void)_runPersonalRequestsSkipCard;
- (int)_runPreAuth;
- (int)_runPreAuthAlignmentAndSiri;
- (void)_runPreAuthRequest;
- (void)_runPreAuthResponse:(id)arg1 error:(id)arg2;
- (int)_runPreflightCDP;
- (int)_runPreflightJSCheck;
- (int)_runPreflightMisc;
- (int)_runPreflightWiFi;
- (int)_runPreflightiCloud;
- (int)_runPreflightiTunes;
- (int)_runRecognizeVoice;
- (void)_runRecognizeVoiceCheckLanguageResponse:(id)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckLanguageStart;
- (void)_runRecognizeVoiceCheckVoiceProfileResponse:(bool)arg1 error:(id)arg2;
- (void)_runRecognizeVoiceCheckVoiceProfileStart;
- (int)_runSFSessionStart;
- (int)_runSetupPSG;
- (int)_runShareSettings;
- (int)_runSiriEnablementConfigurationFetch;
- (int)_runSiriForEveryone;
- (int)_runSiriLanguage;
- (int)_runSiriPasscode;
- (void)_runSiriPasscodeInitRequest;
- (void)_runSiriPasscodeInitResponse:(id)arg1 error:(id)arg2;
- (void)_runSiriPasscodeStartPairSetup;
- (int)_runSoftwareUpdate;
- (int)_runSoundRecognition;
- (int)_runStereoPairUserInput;
- (void)_runStereoPairUserInputPickColors:(bool)arg1;
- (int)_runTRActivation;
- (int)_runTRAuthentication:(id)arg1;
- (int)_runTROtherAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (int)_runTRiCloudAuthentication;
- (int)_runTVAudioUserInput;
- (int)_runTerms;
- (int)_runTransferVoiceProfile;
- (int)_runWiFiSetup;
- (id)_selectedRoomAllHomePods;
- (id)_selectedRoomAllStereoPairs;
- (id)_selectedRoomHomePod;
- (id)_sessionSetupID;
- (void)_setupAudio;
- (bool)_shouldShowPRCardForHomePodsInRoom;
- (void)_speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)_updateSFSessionErrorHandlerForSUBS;
- (bool)acceptedMusicTerms;
- (void)activate;
- (id)additionalMetrics;
- (id)appleIDPassword;
- (void)appleMusicNext;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(bool)arg2;
- (void)audioSessionInterrupted:(id)arg1;
- (void)automaticSoftwareUpdatesAgreed:(bool)arg1;
- (id)availableHomes;
- (int)bonjourTestState;
- (void)cancelSoftwareUpdateNoSetup;
- (void)captiveConfirmed;
- (void)dealloc;
- (bool)delayForOdeonStereoPair;
- (int)delayForOdeonStereoPairSeconds;
- (id /* block */)deviceColorFoundHandler;
- (void)didDismiss;
- (void)disconnect;
- (id)dispatchQueue;
- (int)exportAMSTokenAndAccountSetup:(id)arg1 ifMissing:(bool)arg2 ifInvalid:(bool)arg3;
- (int)expressSetupState;
- (void)forceCLIPassCode:(id)arg1;
- (void)forcePassCode:(id)arg1;
- (bool)forceSoftwareUpdateForADP;
- (bool)hasExistingHomePod;
- (bool)hasExistingHomePodInAccount;
- (bool)hasMultipleUsers;
- (void)homeAppInstallChoice:(bool)arg1;
- (void)homeKitReselectHome;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (bool)homePodBuildRequiresADPForcedSU;
- (bool)homePodCanSUNoSetup;
- (bool)homePodIsSUNoSetup;
- (bool)homePodNeedsSUBeforeSetup;
- (int)homePodProductVersion;
- (double)homePodSUNoSetupEstTime;
- (int)homePodSUNoSetupState;
- (int)homePodSUState;
- (bool)homePodSaysNeedsSUNoSetup;
- (void)homePodSoftwareUpdateNonSetupAcknowledged;
- (void)homePodSoftwareUpdateNonSetupDidComplete;
- (bool)homePodSoftwareUpdateNonSetupWasCompleted;
- (void)homeiCloudEnable;
- (void)identifyHomePod:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)isCLIMode;
- (bool)isCompanionSiriLanguageSupportedByHomePod;
- (void)isDeviceActiveFetch;
- (bool)isHPApp;
- (int)isHomePodProductVersionParis:(id)arg1;
- (bool)isJSEnabled;
- (void)ledPasscodeMatched;
- (bool)liveOn;
- (void)locationEnable:(bool)arg1;
- (void)logMetricsForDismissal:(id)arg1 dismissType:(int)arg2 cardName:(id)arg3 cardDuration:(unsigned long long)arg4;
- (void)pairSetupTryPIN:(id)arg1;
- (bool)pauseAfterPreAuth;
- (id)peerDevice;
- (unsigned long long)peerFeatureFlags;
- (void)personalRequestsEnabled:(bool)arg1;
- (void)playAudioPasscodeAgain;
- (id /* block */)preAuthHandler;
- (id)preAuthResponse;
- (void)preflight;
- (void)preflightAppleMusic;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (id /* block */)promptForAppleMusicHandler;
- (id /* block */)promptForAutomaticSoftwareUpdateHandler;
- (id /* block */)promptForCaptiveNetworkHandler;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForHomePodSoftwareUpdateNonSetupAck;
- (id /* block */)promptForHomePodSoftwareUpdateNonSetupCancelled;
- (id /* block */)promptForHomePodSoftwareUpdateNonSetupCompleted;
- (id /* block */)promptForHomeiCloudHandler;
- (id /* block */)promptForLocationEnableHandler;
- (id /* block */)promptForPINHandler;
- (id /* block */)promptForPersonalRequestsHandler;
- (id /* block */)promptForRoomHandlerDetailed;
- (id /* block */)promptForSetupCompletionHandler;
- (id /* block */)promptForSetupPSGHandler;
- (id /* block */)promptForSiriEnableHandler;
- (id /* block */)promptForSiriLanguageHandler;
- (id /* block */)promptForSiriVoiceSelectionHandler;
- (id /* block */)promptForSoftwareUpdateHandler;
- (id /* block */)promptForSoundRecognitionHandler;
- (id /* block */)promptForStereoMultipleHandler;
- (id /* block */)promptForStereoRoleHandler;
- (id /* block */)promptForTVAudioHandler;
- (id /* block */)promptForTermsHandler;
- (id /* block */)promptForiTunesSignInHandler;
- (id /* block */)promptToInstallHomeAppHandler;
- (id /* block */)promptToShareSettingsHandler;
- (void)psgSelected:(bool)arg1;
- (void)recognizeVoiceAnswered:(bool)arg1;
- (long long)roomHomePodStereoPairCount;
- (void)runHomeKitSUPreAuthResponse:(id)arg1;
- (void)runPersonalRequestsAgreedCLI:(bool)arg1 makeActiveDevice:(bool)arg2;
- (void)runSUNoSetupPreAuthResponse:(id)arg1;
- (id)selectedHome;
- (id)selectedRoom;
- (bool)selectedRoomHasHomePods;
- (id)selectedSiriLanguageCode;
- (void)setAcceptedMusicTerms:(bool)arg1;
- (void)setAdditionalMetrics:(id)arg1;
- (void)setAppleIDPassword:(id)arg1;
- (void)setAvailableHomes:(id)arg1;
- (void)setDelayForOdeonStereoPair:(bool)arg1;
- (void)setDelayForOdeonStereoPairSeconds:(int)arg1;
- (void)setDeviceColorFoundHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setForceSoftwareUpdateForADP:(bool)arg1;
- (void)setHasExistingHomePod:(bool)arg1;
- (void)setHasExistingHomePodInAccount:(bool)arg1;
- (void)setHomePodCanSUNoSetup:(bool)arg1;
- (void)setHomePodIsSUNoSetup:(bool)arg1;
- (void)setHomePodProductVersion:(int)arg1;
- (void)setHomePodSUNoSetupEstTime:(double)arg1;
- (void)setHomePodSUNoSetupState:(int)arg1;
- (void)setHomePodSUState:(int)arg1;
- (void)setHomePodSaysNeedsSUNoSetup:(bool)arg1;
- (void)setHomePodSoftwareUpdateNonSetupWasCompleted:(bool)arg1;
- (void)setIsCLIMode:(bool)arg1;
- (void)setIsHPApp:(bool)arg1;
- (void)setLiveOn:(bool)arg1;
- (void)setPauseAfterPreAuth:(bool)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPeerFeatureFlags:(unsigned long long)arg1;
- (void)setPreAuthHandler:(id /* block */)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForAppleMusicHandler:(id /* block */)arg1;
- (void)setPromptForAutomaticSoftwareUpdateHandler:(id /* block */)arg1;
- (void)setPromptForCaptiveNetworkHandler:(id /* block */)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForHomePodSoftwareUpdateNonSetupAck:(id /* block */)arg1;
- (void)setPromptForHomePodSoftwareUpdateNonSetupCancelled:(id /* block */)arg1;
- (void)setPromptForHomePodSoftwareUpdateNonSetupCompleted:(id /* block */)arg1;
- (void)setPromptForHomeiCloudHandler:(id /* block */)arg1;
- (void)setPromptForLocationEnableHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setPromptForPersonalRequestsHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandlerDetailed:(id /* block */)arg1;
- (void)setPromptForSetupCompletionHandler:(id /* block */)arg1;
- (void)setPromptForSetupPSGHandler:(id /* block */)arg1;
- (void)setPromptForSiriEnableHandler:(id /* block */)arg1;
- (void)setPromptForSiriLanguageHandler:(id /* block */)arg1;
- (void)setPromptForSiriVoiceSelectionHandler:(id /* block */)arg1;
- (void)setPromptForSoftwareUpdateHandler:(id /* block */)arg1;
- (void)setPromptForSoundRecognitionHandler:(id /* block */)arg1;
- (void)setPromptForStereoMultipleHandler:(id /* block */)arg1;
- (void)setPromptForStereoRoleHandler:(id /* block */)arg1;
- (void)setPromptForTVAudioHandler:(id /* block */)arg1;
- (void)setPromptForTermsHandler:(id /* block */)arg1;
- (void)setPromptForiTunesSignInHandler:(id /* block */)arg1;
- (void)setPromptToInstallHomeAppHandler:(id /* block */)arg1;
- (void)setPromptToShareSettingsHandler:(id /* block */)arg1;
- (void)setTestFlags:(unsigned long long)arg1;
- (void)setTouchRemoteEnabled:(bool)arg1;
- (void)setUserOptedToHH2:(bool)arg1;
- (void)shareSettingsAgreed;
- (bool)shouldShowHomePodSoftwareUpdateAvailable;
- (void)showMeDeviceSwitchWithDevice:(id)arg1 session:(id)arg2 siriEnabled:(bool)arg3 activeDeviceEnabled:(bool)arg4;
- (void)sideloadVoiceProfile:(id)arg1 locale:(id)arg2 withCompletion:(id /* block */)arg3;
- (unsigned long long)signpostID;
- (void)siriCheck:(bool)arg1;
- (bool)siriDataSharingEnabled;
- (void)siriEnable;
- (void)siriForEveryoneAnswered;
- (void)siriForiCloudRecognizeAnswered:(bool)arg1;
- (void)siriLanguagePicked:(id)arg1;
- (void)siriVoicePicked:(id)arg1;
- (void)skipAudioPasscode;
- (void)skipiTunesSignIn;
- (void)softwareUpdateAgreed:(bool)arg1;
- (void)soundRecognitionAgreed:(bool)arg1;
- (void)speakPasscodeWithCompletion:(id /* block */)arg1;
- (void)speakPasscodeWithInstructions:(id)arg1 completion:(id /* block */)arg2;
- (void)speakPasscodeWithInstructions:(id)arg1 languageCode:(id)arg2 completion:(id /* block */)arg3;
- (void)speakPasscodeWithLanguageCode:(id)arg1 completion:(id /* block */)arg2;
- (unsigned char)stereoCounterpartColor;
- (void)stereoMultiplePicked:(id)arg1;
- (void)stereoRolePicked:(int)arg1;
- (void)termsAgreed;
- (unsigned long long)testFlags;
- (bool)touchRemoteEnabled;
- (void)tvAudioEnabled:(bool)arg1;
- (bool)userOptedToHH2;

@end