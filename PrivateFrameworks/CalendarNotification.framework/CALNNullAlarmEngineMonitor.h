
@interface CALNNullAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;
- (void)removeAlarmsFiredObserver:(id)arg1;

@end
