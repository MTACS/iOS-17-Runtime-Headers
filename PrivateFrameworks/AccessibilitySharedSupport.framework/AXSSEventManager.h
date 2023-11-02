
@interface AXSSEventManager : NSObject {
    NSDictionary * __commandInfos;
    AXSSKeyboardCommandInfo * __lastDownAndUpCommandInfo;
    double  __lastTabPressTime;
    bool  __performedActionWhileTabComboPressed;
    bool  __tabKeyPressed;
    AXSSActionManager * _actionManager;
    AXSSKeyboardCommandMap * _commandMap;
    <AXSSKeyFilterDelegate> * _filterDelegate;
    double  _minimumDelayUntilRepeat;
    bool  _passthroughModeEnabled;
    unsigned long long  _searchType;
    bool  _shouldSuppressCommands;
}

@property (nonatomic, readonly) NSDictionary *_commandInfos;
@property (nonatomic, retain) AXSSKeyboardCommandInfo *_lastDownAndUpCommandInfo;
@property (nonatomic) double _lastTabPressTime;
@property (nonatomic) bool _performedActionWhileTabComboPressed;
@property (nonatomic) bool _tabKeyPressed;
@property (nonatomic, retain) AXSSActionManager *actionManager;
@property (nonatomic, retain) AXSSKeyboardCommandMap *commandMap;
@property (nonatomic) <AXSSKeyFilterDelegate> *filterDelegate;
@property (nonatomic) double minimumDelayUntilRepeat;
@property (getter=isPassthroughModeEnabled, nonatomic) bool passthroughModeEnabled;
@property (nonatomic) unsigned long long searchType;
@property (nonatomic) bool shouldSuppressCommands;

- (void).cxx_destruct;
- (id)_commandInfos;
- (bool)_handleCommand:(id)arg1 event:(id)arg2;
- (bool)_handleEvent:(id)arg1 forCaptureOnly:(bool)arg2;
- (void)_handleTabComboEvent:(id)arg1;
- (void)_handleTabEvent:(id)arg1;
- (void)_handleTabRepeatOrUpWithCommand:(id)arg1;
- (id)_lastDownAndUpCommandInfo;
- (double)_lastTabPressTime;
- (void)_performDownActionForCommand:(id)arg1 info:(id)arg2;
- (bool)_performedActionWhileTabComboPressed;
- (bool)_tabKeyPressed;
- (id)_tabbedKeyChordForKeyChord:(id)arg1;
- (id)actionManager;
- (id)commandMap;
- (id)filterDelegate;
- (void)handleFKAEvent:(id)arg1;
- (id)initWithActionManager:(id)arg1;
- (id)initWithActionManager:(id)arg1 commandMap:(id)arg2;
- (bool)isPassthroughModeEnabled;
- (double)minimumDelayUntilRepeat;
- (bool)processKeyboardCommand:(id)arg1;
- (bool)processKeyboardEvent:(id)arg1;
- (unsigned long long)searchType;
- (void)setActionManager:(id)arg1;
- (void)setCommandMap:(id)arg1;
- (void)setFilterDelegate:(id)arg1;
- (void)setMinimumDelayUntilRepeat:(double)arg1;
- (void)setPassthroughModeEnabled:(bool)arg1;
- (void)setSearchType:(unsigned long long)arg1;
- (void)setShouldSuppressCommands:(bool)arg1;
- (void)set_lastDownAndUpCommandInfo:(id)arg1;
- (void)set_lastTabPressTime:(double)arg1;
- (void)set_performedActionWhileTabComboPressed:(bool)arg1;
- (void)set_tabKeyPressed:(bool)arg1;
- (bool)shouldCaptureEvent:(id)arg1;
- (bool)shouldSuppressCommands;

@end
