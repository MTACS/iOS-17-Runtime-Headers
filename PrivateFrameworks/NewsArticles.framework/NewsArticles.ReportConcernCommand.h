
@interface NewsArticles.ReportConcernCommand : FCCommand {
    void concern;
    void headline;
    void selectedSubConcern;
}

- (void).cxx_destruct;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
