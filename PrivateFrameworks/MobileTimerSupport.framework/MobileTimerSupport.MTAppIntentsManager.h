
@interface MobileTimerSupport.MTAppIntentsManager : NSObject {
    void delegate;
}

@property (nonatomic) <_TtP18MobileTimerSupport27MTAppIntentsManagerDelegate_> *delegate;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)delegate;
- (void)didLapStopwatch;
- (void)didResetStopwatch;
- (void)didSelectTabWithTab:(long long)arg1;
- (void)didStartStopwatch;
- (void)didStopStopwatch;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
