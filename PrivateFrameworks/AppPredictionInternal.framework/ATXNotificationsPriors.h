
@interface ATXNotificationsPriors : NSObject {
    ATXApp2VecMapping * _appFeatures;
    double  _defaultPrior;
    NSDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)getAppBiasForBundleId:(id)arg1;
- (double)getPriorForAppId:(id)arg1;
- (id)init;
- (id)initWithAssetClass:(Class)arg1 andPathToAppFeatures:(id)arg2;

@end
