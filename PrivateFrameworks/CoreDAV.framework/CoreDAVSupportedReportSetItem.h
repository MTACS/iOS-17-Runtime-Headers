
@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
    NSMutableSet * _supportedReports;
}

@property (nonatomic, retain) NSMutableSet *supportedReports;

+ (id)copyParseRules;

- (void).cxx_destruct;
- (void)addSupportedReport:(id)arg1;
- (id)description;
- (id)init;
- (void)setSupportedReports:(id)arg1;
- (id)supportedReports;
- (bool)supportsReportWithNameSpace:(id)arg1 andName:(id)arg2;

@end
