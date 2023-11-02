
@interface PurpleFlowManagedPageLoadTestRunner : PurplePageLoadTestRunner {
    int  _notifyToken;
}

- (void)dealloc;
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;
- (void)startNextPage;

@end
