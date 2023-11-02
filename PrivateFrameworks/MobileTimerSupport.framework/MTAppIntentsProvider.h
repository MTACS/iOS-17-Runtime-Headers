
@interface MTAppIntentsProvider : NSObject <MobileTimerSupport.MTAppIntentsManagerDelegate> {
    <MTAppIntentsProviderDelegate> * _delegate;
    _TtC18MobileTimerSupport19MTAppIntentsManager * _manager;
}

@property (nonatomic) <MTAppIntentsProviderDelegate> *delegate;
@property (nonatomic, retain) _TtC18MobileTimerSupport19MTAppIntentsManager *manager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)delegate;
- (void)didLapStopwatchWithManager:(id)arg1;
- (void)didResetStopwatchWithManager:(id)arg1;
- (void)didSelectTabWithManager:(id)arg1 tab:(long long)arg2;
- (void)didStartStopwatchWithManager:(id)arg1;
- (void)didStopStopwatchWithManager:(id)arg1;
- (id)init;
- (id)manager;
- (void)setDelegate:(id)arg1;
- (void)setManager:(id)arg1;

@end
