
@interface BRCFPFSFeatureFlag : NSObject {
    NSUserDefaults * _fpfsFeatureDefaults;
}

- (void).cxx_destruct;
- (void)fixFPFSFeatureFlagUserDefaultsIfNeeded;
- (id)init;

@end
