
@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor {
    NSDate * _lifetimeTimerFireDate;
}

+ (Class)lifetimeClass;

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end
