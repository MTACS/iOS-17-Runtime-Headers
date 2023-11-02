
@interface _DKPluggedInMonitor : _DKMonitor {
    bool  _enabled;
    int  _pluggedInToken;
    BMSource * _source;
}

@property (nonatomic) bool enabled;
@property (nonatomic) int pluggedInToken;

+ (id)_BMEventWithState:(bool)arg1 adapterType:(long long)arg2 isWireless:(bool)arg3;
+ (id)_eventWithState:(bool)arg1 adapterType:(long long)arg2 isWireless:(bool)arg3;
+ (id)entitlements;
+ (id)eventStream;
+ (void)setIsPluggedIn:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (bool)enabled;
- (int)pluggedInToken;
- (void)setCurrentState;
- (void)setEnabled:(bool)arg1;
- (void)setPluggedInToken:(int)arg1;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
