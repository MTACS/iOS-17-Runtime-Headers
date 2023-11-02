
@interface PLMonthGroupingRule : NSObject <PLHighlightItemClustererRule, PLHighlightItemPromoterRule> {
    NSCalendar * _calendar;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calendar;
- (id)dominantMonthDateComponentForStartDateComponents:(id)arg1 endDateComponents:(id)arg2 numberOfDaysInMonthOfStartDate:(long long)arg3;
- (id)fallbackHighlightItemFromAllHighlightItems:(id)arg1 withSharingConsideration:(long long)arg2;
- (bool)highlightItem:(id)arg1 belongsToHighlightItemList:(id)arg2;
- (bool)highlightItemHasMinimumRequirementToBePromoted:(id)arg1 withSharingConsideration:(long long)arg2;
- (bool)highlightItemList:(id)arg1 canBeMergedWithOtherHighlightItemList:(id)arg2;
- (id)highlightItemsSortedByImportance:(id)arg1 withSharingConsideration:(long long)arg2;
- (id)init;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 forceUpdateLocale:(bool)arg3 resultBlock:(id /* block */)arg4;
- (void)titlesForHighlightItemList:(id)arg1 dateRangeTitleGenerator:(id)arg2 resultBlock:(id /* block */)arg3;

@end
