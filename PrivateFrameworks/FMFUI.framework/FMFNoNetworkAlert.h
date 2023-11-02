
@interface FMFNoNetworkAlert : NSObject {
    bool  _globalCellularEnabled;
}

@property (getter=isGlobalCellularEnabled, nonatomic) bool globalCellularEnabled;

+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1;
+ (bool)isAirplaneModeEnabled;
+ (bool)isGlobalCellularEnabled;
+ (id)newAlertController;
+ (unsigned long long)reasonForNoInternet;

- (bool)isGlobalCellularEnabled;
- (void)setGlobalCellularEnabled:(bool)arg1;

@end
