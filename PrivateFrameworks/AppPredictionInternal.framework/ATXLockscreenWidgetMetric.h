
@interface ATXLockscreenWidgetMetric : _ATXCoreAnalyticsMetric {
    NSString * _extensionBundleId;
    unsigned long long  _family;
    bool  _isLandscape;
    NSString * _kind;
    NSString * _lockscreenId;
    unsigned long long  _source;
}

@property (nonatomic, copy) NSString *extensionBundleId;
@property (nonatomic) unsigned long long family;
@property (nonatomic) bool isLandscape;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSString *lockscreenId;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)coreAnalyticsDictionary;
- (id)extensionBundleId;
- (unsigned long long)family;
- (bool)isLandscape;
- (id)kind;
- (id)lockscreenId;
- (id)metricName;
- (void)setExtensionBundleId:(id)arg1;
- (void)setFamily:(unsigned long long)arg1;
- (void)setIsLandscape:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setLockscreenId:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end
