
@interface SBSceneViewStatusBarAssertion : NSObject <BSInvalidatable> {
    unsigned long long  _level;
    long long  _nubViewHidden;
    NSHashTable * _observers;
    SBStatusBarSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic) long long nubViewHidden;
@property (nonatomic, copy) SBStatusBarSettings *settings;
@property (getter=isStatusBarHidden, nonatomic) bool statusBarHidden;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyObserversDidInvalidate;
- (void)_notifyObserversDidUpdate;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithStatusBarHidden:(bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (id)initWithStatusBarSettings:(id)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (void)invalidate;
- (bool)isStatusBarHidden;
- (unsigned long long)level;
- (long long)nubViewHidden;
- (void)removeObserver:(id)arg1;
- (void)setNubViewHidden:(long long)arg1;
- (void)setSettings:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (id)settings;

@end
