
@interface WFCellularOutrankIssue : WFHealthIssue {
    NSString * _issueShortTitle;
    NSString * _issueTitle;
    bool  _subtitleOnlyIssue;
    NSString * _typeString;
}

+ (id)cellularOutrankDownload;
+ (id)cellularOutrankPerformance;
+ (id)cellularOutrankPrivateNetwork;
+ (id)cellularOutrankSecurity;

- (void).cxx_destruct;
- (id)_cellularOutrankSubTypeToString:(unsigned long long)arg1;
- (id)_titleForSubType:(unsigned long long)arg1;
- (id)initWithSubType:(unsigned long long)arg1;
- (id)issueShortTitle;
- (id)issueTitle;
- (bool)subtitleOnlyIssue;
- (id)typeString;

@end
