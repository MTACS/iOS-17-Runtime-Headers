
@protocol WFStandaloneModuleSummaryPresenterDelegate <NSObject>

@required

- (void)moduleSummaryPresenter:(WFStandaloneModuleSummaryPresenter *)arg1 didCommitParameterState:(id <WFParameterState>)arg2;
- (void)moduleSummaryPresenterDidFinish:(WFStandaloneModuleSummaryPresenter *)arg1;

@optional

- (void)moduleSummaryPresenter:(WFStandaloneModuleSummaryPresenter *)arg1 didStageParameterState:(id <WFParameterState>)arg2;

@end
