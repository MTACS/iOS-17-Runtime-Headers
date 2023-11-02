
@interface _MNArrivalUpdaterState_None : _MNArrivalUpdaterState {
    unsigned long long  _departureReason;
}

- (id)init;
- (id)initWithDepartureReason:(unsigned long long)arg1;
- (void)onEnterState:(id)arg1;
- (long long)state;
- (void)updateForLocation;

@end
