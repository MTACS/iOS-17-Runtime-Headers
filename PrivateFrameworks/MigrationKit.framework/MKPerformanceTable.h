
@interface MKPerformanceTable : MKTable {
    MKAnalytics * _analytics;
    NSString * _basePath;
}

@property (nonatomic, retain) MKAnalytics *analytics;
@property (nonatomic, copy) NSString *basePath;

- (void).cxx_destruct;
- (id)analytics;
- (id)basePath;
- (id)createNumberFormatterWithLocale:(id)arg1;
- (id)createSizeFormatter;
- (id)createThroughputFormatter;
- (id)createTimeFormatterWithLocale:(id)arg1;
- (id)displayNamesByDataClass;
- (void)generateTableFromJSONFile:(id)arg1;
- (id)importTimesByDataClass;
- (id)initWithJSONFile:(id)arg1 analytics:(id)arg2;
- (void)setAnalytics:(id)arg1;
- (void)setBasePath:(id)arg1;
- (void)writeToDisk;

@end
