
@interface WhiteTabsTestRunner : ReplayPagesTestRunner {
    unsigned long long  _runCount;
    unsigned long long  _totalHibernatedTabs;
    unsigned long long  _totalLiveTabs;
}

- (void)collectPPTResults;
- (void)finishedTestPage:(id)arg1;
- (id)init;

@end
