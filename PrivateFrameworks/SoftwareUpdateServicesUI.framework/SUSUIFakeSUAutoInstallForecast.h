
@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast {
    double  _now;
}

- (double)_now;
- (id)firstUnlock;
- (long long)scheduleType;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockEndDate;
- (id)unlockStartDate;

@end
