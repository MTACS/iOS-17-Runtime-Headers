
@interface HDHRAFibBurdenSevenDayAnalysisBreadcrumbManager : NSObject <HDHRAFibBurdenSevenDayAnalysisBreadcrumbManaging> {
    id /* block */  _dateGenerator;
    HDKeyValueDomain * _keyValueDomain;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)_dateKeyForBreadcrumb:(long long)arg1;
- (void)_queue_dropAnalysisResultBreadcrumbWithContext:(id)arg1 date:(id)arg2;
- (void)_queue_dropBreadcrumb:(long long)arg1 date:(id)arg2;
- (void)dropAnalysisResultBreadcrumbWithContext:(id)arg1;
- (void)dropBreadcrumb:(long long)arg1;
- (id)fetchBreadcrumbsWithError:(id*)arg1;
- (id)initWithKeyValueDomain:(id)arg1 dateGenerator:(id /* block */)arg2 queue:(id)arg3;
- (id)initWithProfile:(id)arg1;

@end
