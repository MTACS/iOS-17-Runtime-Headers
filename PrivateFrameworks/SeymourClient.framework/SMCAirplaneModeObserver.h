
@interface SMCAirplaneModeObserver : NSObject <RadiosPreferencesDelegate> {
    <SMCAirplaneModeObserverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    RadiosPreferences * _radiosPreferences;
}

@property (nonatomic) <SMCAirplaneModeObserverDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) RadiosPreferences *radiosPreferences;

- (void).cxx_destruct;
- (void)airplaneModeChanged;
- (id)delegate;
- (bool)enabled;
- (id)initWithQueue:(id)arg1;
- (id)queue;
- (id)radiosPreferences;
- (void)setDelegate:(id)arg1;

@end
