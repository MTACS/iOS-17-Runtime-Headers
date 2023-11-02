
@interface MTConfig : MTObject {
    NSDictionary * _debugSource;
    <MTConfigDelegate> * _delegate;
    long long  _eventDataTimeout;
}

@property (nonatomic, retain) NSDictionary *debugSource;
@property (nonatomic) <MTConfigDelegate> *delegate;
@property (nonatomic) long long eventDataTimeout;

- (void).cxx_destruct;
- (bool)_isEventDataTimeoutUnset;
- (void)applyDeRes:(id)arg1 sources:(id)arg2;
- (id)blacklistedEventsForSources:(id)arg1;
- (id)blacklistedFieldsForSources:(id)arg1;
- (id)computeWithConfigSources:(id /* block */)arg1;
- (id)configValueForKeyPath:(id)arg1 default:(id)arg2;
- (id)configValueForKeyPath:(id)arg1 sources:(id)arg2;
- (id)deResFieldsForSources:(id)arg1;
- (id)debugSource;
- (id)delegate;
- (id)denylistedEventsForSources:(id)arg1;
- (id)denylistedFieldsForSources:(id)arg1;
- (bool)disabledForSources:(id)arg1;
- (long long)eventDataTimeout;
- (id)injectedSource;
- (bool)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2;
- (bool)metricsDisabledOrDenylistedEvent:(id)arg1 sources:(id)arg2;
- (void)removeBlacklistedFields:(id)arg1 sources:(id)arg2;
- (void)removeDenylistedFields:(id)arg1 sources:(id)arg2;
- (void)setDebugSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEventDataTimeout:(long long)arg1;
- (id)sources;

@end