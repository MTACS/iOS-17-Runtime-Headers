
@interface EXBDisplayAssertion : NSObject {
    _EXBDisplayAssertionStack * _assertionStack;
    unsigned long long  _deactivationReasonsWhenActive;
    <EXBDisplayAssertionDelegate> * _delegate;
    bool  _hasControlOfDisplay;
    bool  _invalidated;
    bool  _invalidatedByClient;
    unsigned long long  _level;
    unsigned long long  _receivedDeactivationReasons;
    FBSDisplayIdentity * _rootDisplayIdentity;
}

@property (nonatomic, readonly) unsigned long long deactivationReasonsWhenActive;
@property (nonatomic, readonly) bool hasControlOfDisplay;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) FBSDisplayIdentity *rootDisplayIdentity;

- (void).cxx_destruct;
- (void)_didGainControlOfDisplay;
- (void)_didInvalidateForDisplayDisconnect;
- (void)_didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg1;
- (void)_didReceiveNewDeactivationReasons:(unsigned long long)arg1;
- (id)_initWithPhysicalDisplay:(id)arg1 level:(unsigned long long)arg2 deactivationReasons:(unsigned long long)arg3 assertionStack:(id)arg4 delegate:(id)arg5;
- (unsigned long long)deactivationReasonsWhenActive;
- (void)dealloc;
- (id)description;
- (bool)hasControlOfDisplay;
- (void)invalidate;
- (bool)isEqual:(id)arg1;
- (unsigned long long)level;
- (id)rootDisplayIdentity;
- (void)updateWithPreferences:(id)arg1;

@end
