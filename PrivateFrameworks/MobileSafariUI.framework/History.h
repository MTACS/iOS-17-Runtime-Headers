
@interface History : WBUHistory <WKHistoryDelegatePrivate> {
    NSMutableArray * _deferredUpdates;
    _WKVisitedLinkStore * _visitedLinkStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _WKVisitedLinkStore *visitedLinkStore;

+ (id)_localizedStringForTodayWithPartOfDay:(long long)arg1;
+ (id)_localizedStringForWeekday:(long long)arg1 partOfDay:(long long)arg2;
+ (id)dayWithPeriodOfDayStringForDate:(id)arg1;
+ (bool)filterString:(id)arg1 matchesHistoryItemAnywhereInTitleOrURL:(id)arg2;
+ (bool)historyItemTitle:(id)arg1 matchesFilterString:(id)arg2;
+ (bool)historyItemURL:(id)arg1 matchesFilter:(id)arg2;
+ (bool)historyItemURL:(id)arg1 matchesFilterStrings:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })hourRangeFromPartOfDay:(long long)arg1;
+ (void)initialize;
+ (void)localeChanged:(struct __CFLocale { }*)arg1;
+ (id)lowercaseStringTrimmedForHistorySearch:(id)arg1;
+ (long long)partOfDayFromHourOfDay:(long long)arg1;
+ (id)sessionIdentifierFromDate:(id)arg1;
+ (id)sessionIdentifierFromSessionStartDate:(id)arg1;
+ (id)sessionStartDateFromDate:(id)arg1;
+ (id)sharedHistory;
+ (id)titleForHistoryItem:(id)arg1;

- (void).cxx_destruct;
- (void)_addVisitedLinkForItemIfNeeded:(id)arg1 withVisitOrigin:(long long)arg2;
- (Class)_historyItemClass;
- (void)_removeAllVisitedLinks;
- (void)_updateForWKWebView:(id)arg1 browserController:(id)arg2 updates:(id /* block */)arg3;
- (void)_webView:(id)arg1 didNavigateWithNavigationData:(id)arg2;
- (void)_webView:(id)arg1 didPerformClientRedirectFromURL:(id)arg2 toURL:(id)arg3;
- (void)_webView:(id)arg1 didPerformServerRedirectFromURL:(id)arg2 toURL:(id)arg3;
- (void)_webView:(id)arg1 didUpdateHistoryTitle:(id)arg2 forURL:(id)arg3;
- (id)_weekdayMonthDateStringForDate:(id)arg1;
- (void)cancelDeferredUpdates;
- (void)commitDeferredUpdates;
- (void)dealloc;
- (bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)removeItems:(id)arg1 completionHanlder:(id /* block */)arg2;
- (id)titleForDate:(id)arg1;
- (id)visitedLinkStore;

@end
