
@interface CloudTabsForYouDataSource : WBSForYouCloudTabsDataSource {
    WBSCloudTabStore * _cloudTabStore;
}

- (void).cxx_destruct;
- (void)_cloudTabsDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithTabStore:(id)arg1;

@end
