
@interface NewsArticles.LegacyReportConcernCommand : FCCommand {
    void comments;
    void concern;
    void headline;
}

- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
