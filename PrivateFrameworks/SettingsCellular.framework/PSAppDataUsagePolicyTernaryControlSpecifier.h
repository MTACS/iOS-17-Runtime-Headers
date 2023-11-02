
@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier {
    NSString * _displayName;
    bool  _fullyInitialized;
}

@property (nonatomic, retain) NSString *displayName;

- (void).cxx_destruct;
- (id)cellularUsagePolicy;
- (id)displayName;
- (void)finishInitializing:(unsigned long long)arg1;
- (id)initWithBundleID:(id)arg1 displayName:(id)arg2 statisticsCache:(id)arg3;
- (void)setCellularUsagePolicy:(id)arg1;
- (void)setDisplayName:(id)arg1;

@end
