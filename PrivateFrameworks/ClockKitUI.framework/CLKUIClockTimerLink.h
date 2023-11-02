
@interface CLKUIClockTimerLink : CLKUIRenderFrequencyLink {
    CLKClockTimerToken * _timerToken;
    id /* block */  _updateHandler;
}

@property (nonatomic, copy) id /* block */ updateHandler;

- (void).cxx_destruct;
- (long long)_updateFrequencyForFPS:(long long)arg1;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)invalidate;
- (void)setUpdateHandler:(id /* block */)arg1;
- (void)updateCoordinator;
- (id /* block */)updateHandler;

@end
