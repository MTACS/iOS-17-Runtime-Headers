
@interface APOdmlInstalledAppVectorBuilder : APOdmlVectorBuilder {
    NSMutableDictionary * _bundleIDtoAppInfo;
}

@property (retain) NSMutableDictionary *bundleIDtoAppInfo;

- (void).cxx_destruct;
- (id)_installedStoreAppEnumerator;
- (void)buildBundleIDtoAdamIDCache:(id)arg1;
- (id)bundleIDtoAppInfo;
- (id)eventName;
- (id)eventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3;
- (id)initWithVersion:(id)arg1 lookbackPeriod:(id)arg2 maxQueryElements:(id)arg3 task:(id)arg4 exponentialDecayConstant:(id)arg5 weightByDuration:(id)arg6 isCounterfactual:(bool)arg7;
- (id)retrieveFilteredEvents:(id)arg1;
- (void)setBundleIDtoAppInfo:(id)arg1;
- (double)weightForEvents:(id)arg1;

@end
