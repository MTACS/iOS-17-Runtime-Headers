
@interface _DKBacklightMonitor : _DKMonitor {
    BMSource * _source;
    int  notifyToken;
}

+ (id)_eventWithState:(id)arg1;
+ (id)entitlements;
+ (id)eventStream;
+ (bool)indicatesScreenOnWithNotificationState:(id)arg1;
+ (void)setIsBacklit:(bool)arg1;
+ (bool)shouldMergeUnchangedEvents;

- (void).cxx_destruct;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (void)obtainCurrentValue;
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
