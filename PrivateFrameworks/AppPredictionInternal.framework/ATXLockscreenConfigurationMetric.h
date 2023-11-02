
@interface ATXLockscreenConfigurationMetric : _ATXCoreAnalyticsMetric {
    NSString * _color;
    NSString * _extensionBundleId;
    NSString * _font;
    bool  _hasCustomInlineComplication;
    bool  _isSelected;
    NSString * _lockscreenId;
    unsigned long long  _numLandscapeWidgets;
    unsigned long long  _numWidgets;
    NSString * _numberingSystem;
    NSString * _relatedFocus;
    unsigned long long  _source;
}

@property (nonatomic, copy) NSString *color;
@property (nonatomic, copy) NSString *extensionBundleId;
@property (nonatomic, copy) NSString *font;
@property (nonatomic) bool hasCustomInlineComplication;
@property (nonatomic) bool isSelected;
@property (nonatomic, copy) NSString *lockscreenId;
@property (nonatomic) unsigned long long numLandscapeWidgets;
@property (nonatomic) unsigned long long numWidgets;
@property (nonatomic, copy) NSString *numberingSystem;
@property (nonatomic, copy) NSString *relatedFocus;
@property (nonatomic) unsigned long long source;

- (void).cxx_destruct;
- (id)color;
- (id)coreAnalyticsDictionary;
- (id)extensionBundleId;
- (id)font;
- (bool)hasCustomInlineComplication;
- (bool)isSelected;
- (id)lockscreenId;
- (id)metricName;
- (unsigned long long)numLandscapeWidgets;
- (unsigned long long)numWidgets;
- (id)numberingSystem;
- (id)relatedFocus;
- (void)setColor:(id)arg1;
- (void)setExtensionBundleId:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHasCustomInlineComplication:(bool)arg1;
- (void)setIsSelected:(bool)arg1;
- (void)setLockscreenId:(id)arg1;
- (void)setNumLandscapeWidgets:(unsigned long long)arg1;
- (void)setNumWidgets:(unsigned long long)arg1;
- (void)setNumberingSystem:(id)arg1;
- (void)setRelatedFocus:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (unsigned long long)source;

@end
