
@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView * _flight;
    unsigned long long  _style;
}

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)flightInfoView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)loadView;
- (void)setStyle:(unsigned long long)arg1;

@end
