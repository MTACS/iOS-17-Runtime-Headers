
@interface SCROBrailleClient : NSObject {
    NSData * _aggregatedStatusCache;
    NSData * _aggregatedStatusPending;
    NSData * _brailleMapCache;
    SCROConnection * _connection;
    SCRCTargetSelectorTimer * _deathTimer;
    id  _delegate;
    bool  _delegateWantsKeypresses;
    bool  _delegateWantsReplaceTextRange;
    bool  _displayDescriptorCallbackEnabled;
    bool  _isReady;
    bool  _keepConnectionAlive;
    NSLock * _lock;
    NSMutableAttributedString * _mainStringCache;
    NSMutableAttributedString * _mainStringPending;
    bool  _needsDisplay;
    bool  _wantsDisconnectMessage;
    bool  _wantsDisplayConfigurationChanged;
    bool  _wantsReconnectMessage;
}

@property (nonatomic) double autoAdvanceDuration;
@property (nonatomic) bool autoAdvanceEnabled;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) bool inputEightDotBraille;
@property (nonatomic) bool panWithTextCursorEnabled;
@property (nonatomic) bool wordWrapEnabled;

+ (void)logBrailleRequests:(bool)arg1;
+ (id)statusAttributeDotText;

- (void).cxx_destruct;
- (void)_deathTimerHandler;
- (void)_deviceConnected:(id)arg1;
- (id)_getWorkingString;
- (id)_lazyConnection;
- (void)_refreshAfterReconnect;
- (void)_registerDelegate;
- (void)_setMutableAttributedAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)_setupDeviceDetection;
- (id)aggregatedStatus;
- (bool)alwaysUsesNemethCodeForTechnicalText;
- (double)autoAdvanceDuration;
- (bool)autoAdvanceEnabled;
- (bool)automaticBrailleTranslationEnabled;
- (void)cancelCandidateSelection;
- (void)clearTimeoutAlert;
- (Class)connectionClass;
- (int)contractionMode;
- (void)dealloc;
- (id)delegate;
- (void)display;
- (bool)displayDescriptorCallbackEnabled;
- (void)displayIfNeeded;
- (int)displayMode;
- (id)driverConfiguration;
- (void)exitCurrentDisplayMode;
- (void)handleCallback:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (int)inputContractionMode;
- (bool)inputEightDotBraille;
- (bool)isCandidateSelectionOn;
- (bool)isConfigured;
- (bool)isConnected;
- (bool)isWordDescriptionOn;
- (bool)keepConnectionAlive;
- (void)loadDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)loadTactileGraphicsDisplayWithBLEIdentifier:(id)arg1;
- (id)mainAttributedString;
- (long long)masterStatusCellIndex;
- (bool)needsDisplay;
- (void)panDisplayBeginning:(int)arg1;
- (void)panDisplayEnd:(int)arg1;
- (void)panDisplayLeft:(int)arg1;
- (void)panDisplayRight:(int)arg1;
- (bool)panWithTextCursorEnabled;
- (id)pendingAggregatedStatus;
- (id)pendingMainAttributedString;
- (unsigned int)persistentKeyModifiers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfCellRepresentingCharacterAtIndex:(long long)arg1;
- (void)removeDisplayWithBluetoothDeviceAddress:(id)arg1;
- (void)resetEditingManager;
- (void)selectAllForToken:(long long)arg1;
- (void)setAggregatedStatus:(id)arg1;
- (void)setAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAlwaysUsesNemethCodeForTechnicalText:(bool)arg1;
- (void)setAnnouncementString:(id)arg1;
- (void)setAnnouncementsDisplayMode;
- (void)setAttributedAlertString:(id)arg1 timeout:(double)arg2 priority:(int)arg3;
- (void)setAttributedAnnouncementString:(id)arg1;
- (void)setAutoAdvanceDuration:(double)arg1;
- (void)setAutoAdvanceEnabled:(bool)arg1;
- (void)setAutomaticBrailleTranslationEnabled:(bool)arg1;
- (void)setBrailleChordDebounceTimeout:(double)arg1;
- (void)setBrailleMap:(id)arg1;
- (void)setContractionMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayDescriptorCallbackEnabled:(bool)arg1;
- (void)setExpandedStatusDisplayModeWithStatus:(id)arg1;
- (void)setFocused:(bool)arg1 forToken:(long long)arg2;
- (void)setInputContractionMode:(int)arg1;
- (void)setInputEightDotBraille:(bool)arg1;
- (void)setKeepConnectionAlive:(bool)arg1;
- (void)setLastUserInteractionTime:(double)arg1;
- (void)setMainAttributedString:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setPanWithTextCursorEnabled:(bool)arg1;
- (void)setPersistentKeyModifiers:(unsigned int)arg1;
- (void)setPrepareToMemorizeNextKey:(bool)arg1 immediate:(bool)arg2 forDisplayWithToken:(int)arg3;
- (void)setPrimaryBrailleDisplay:(int)arg1;
- (void)setSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forToken:(long long)arg2;
- (void)setShowDotsSevenAndEight:(bool)arg1;
- (void)setShowEightDotBraille:(bool)arg1;
- (void)setSingleLetterInputIsOn:(bool)arg1;
- (void)setTableIdentifier:(id)arg1;
- (void)setTactileGraphicsImageData:(id)arg1;
- (void)setTextSearchModeIsOn:(bool)arg1;
- (void)setVirtualStatusAlignment:(int)arg1;
- (void)setWordWrapEnabled:(bool)arg1;
- (bool)showDotsSevenAndEight;
- (bool)showEightDotBraille;
- (void)showNextAnnouncement;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousAnnouncement;
- (void)showPreviousCandidate;
- (void)showPreviousWordDescription;
- (void)simulateKeypress:(id)arg1;
- (id)tokenArray;
- (long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4;
- (void)translateBrailleToClipboard;
- (void)unselectAllForToken:(long long)arg1;
- (int)virtualStatusAlignment;
- (bool)wordWrapEnabled;

@end