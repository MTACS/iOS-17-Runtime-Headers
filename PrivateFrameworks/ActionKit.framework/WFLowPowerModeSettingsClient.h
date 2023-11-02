
@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFReversibleBooleanStateSetting> {
    _PMLowPowerMode * _lowPowerMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _PMLowPowerMode *lowPowerMode;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;
+ (id)energyModeStream;
+ (void)getBookmarkForCurrentStateWithCompletionHandler:(id /* block */)arg1;
+ (void)getReversalStateWithBookmark:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)reversalArbiter;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithLowPowerMode:(id)arg1;
- (id)lowPowerMode;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
