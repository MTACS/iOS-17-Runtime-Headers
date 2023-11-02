
@interface PLYearGroupingRule : NSObject <PLHighlightItemClustererRule> {
    NSCalendar * _calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendar;
- (unsigned long long)dominantYearForStartDate:(id)arg1 endDate:(id)arg2;
- (bool)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (bool)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (id)init;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(bool)arg3 resultBlock:(id /* block */)arg4;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(id /* block */)arg3;

@end
