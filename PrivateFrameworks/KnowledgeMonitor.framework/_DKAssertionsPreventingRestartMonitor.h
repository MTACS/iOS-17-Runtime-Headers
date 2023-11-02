
@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor {
    bool  _lastPreventingRestartAssertionsStatus;
    int  _preventIdleSleepAssertionsToken;
    int  _restartPreventerAssertionsToken;
    int  _systemAssertionsToken;
    int  _userspaceAssertionsToken;
}

@property (nonatomic) bool lastPreventingRestartAssertionsStatus;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int userspaceAssertionsToken;

+ (id)entitlements;
+ (id)eventStream;

- (bool)areAssertionsPreventingRestart;
- (void)deactivate;
- (void)dealloc;
- (bool)lastPreventingRestartAssertionsStatus;
- (id)loadState;
- (int)preventIdleSleepAssertionsToken;
- (int)restartPreventerAssertionsToken;
- (void)saveState;
- (void)setLastPreventingRestartAssertionsStatus:(bool)arg1;
- (void)setPreventIdleSleepAssertionsToken:(int)arg1;
- (void)setRestartPreventerAssertionsToken:(int)arg1;
- (void)setSystemAssertionsToken:(int)arg1;
- (void)setUserspaceAssertionsToken:(int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (int)systemAssertionsToken;
- (int)userspaceAssertionsToken;

@end
