
@interface SPUITestingHelper : NSObject {
    bool  _finishedKeyboardLaunch;
    bool  _finishedTableUpdate;
    SPUISearchViewController * _searchViewController;
    SPUIPPTTypingHelper * _typingHelper;
}

@property (readonly) UIApplication *activeApp;
@property bool finishedKeyboardLaunch;
@property bool finishedTableUpdate;
@property (retain) SPUISearchViewController *searchViewController;
@property (retain) SPUIPPTTypingHelper *typingHelper;

+ (id)indexPathsOfRowsForSectionTitle:(id)arg1 needsCard:(bool)arg2 forTestingViewController:(id)arg3;

- (void).cxx_destruct;
- (id)activeApp;
- (bool)canPerformTest:(id)arg1;
- (void)finishLaunchTestIfNeeded;
- (bool)finishedKeyboardLaunch;
- (bool)finishedTableUpdate;
- (id)initWithSearchViewController:(id)arg1;
- (void)performCardScrollTest:(id)arg1 queryKind:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)performPushPopCardsOnTest:(id)arg1 options:(id)arg2 needsCard:(bool)arg3 sectionHeader:(id)arg4 atDesk:(bool)arg5 queryKind:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void)performScrollOnResultsView:(id)arg1 testName:(id)arg2 completion:(id /* block */)arg3;
- (void)performScrollOnSearchViewWithTestName:(id)arg1 completion:(id /* block */)arg2;
- (void)performTest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)resultViewController:(id)arg1 finishedGettingAllResults:(id /* block */)arg2;
- (void)runPushTest:(id)arg1 sectionHeader:(id)arg2 searchString:(id)arg3 completion:(id /* block */)arg4;
- (void)scrollEntityForTest:(id)arg1 forQuery:(id)arg2 completion:(id /* block */)arg3;
- (void)scrollForSectionHeader:(id)arg1 forSearchString:(id)arg2 testName:(id)arg3 queryKind:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)scrollMainResultsForTest:(id)arg1 forQuery:(id)arg2 queryKind:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)searchForSectionHeader:(id)arg1 testName:(id)arg2 forSearchString:(id)arg3 queryKind:(unsigned long long)arg4 startPushHandler:(id /* block */)arg5 finishHandler:(id /* block */)arg6;
- (void)searchForString:(id)arg1 testName:(id)arg2 event:(unsigned long long)arg3 queryKind:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)searchManyStringsForTestName:(id)arg1 options:(id)arg2 event:(unsigned long long)arg3 queryKind:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)searchString:(id)arg1 andOpenResultsUnderSection:(id)arg2 testName:(id)arg3 needsCard:(bool)arg4 queryKind:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)searchStrings:(id)arg1 andOpenResultsUnderSection:(id)arg2 testName:(id)arg3 needsCard:(bool)arg4 queryKind:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)searchViewController;
- (void)searchViewFinishedGettingAllResultsAndFinishedDrawsWithCompletion:(id /* block */)arg1;
- (void)setDefaultsForSearchVCWithqueryType:(unsigned long long)arg1;
- (void)setFinishedKeyboardLaunch:(bool)arg1;
- (void)setFinishedTableUpdate:(bool)arg1;
- (void)setSearchViewController:(id)arg1;
- (void)setTypingHelper:(id)arg1;
- (void)tapIndexsPathsAndPopViewControllersAfter2Seconds:(id)arg1 completion:(id /* block */)arg2;
- (void)testMapsCardsPushAndScrollForTestName:(id)arg1 string:(id)arg2 queryKind:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)typingHelper;

@end
