
@interface SafariClearBrowsingDataController : NSObject <SFClearHistoryViewControllerDelegate> {
    NSArray * _availableIntervals;
}

@property (readonly) NSArray *availableIntervals;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_analyticsClearBrowsingIntervalForDate:(id)arg1;
- (void)_clearBrowsingDataAddedAfterDate:(id)arg1 profileIdentifiers:(id)arg2 closeAllTabs:(bool)arg3;
- (id)availableIntervals;
- (void)clearDataAddedAfterDate:(id)arg1 beforeDate:(id)arg2 profileIdentifier:(id)arg3 clearAllProfiles:(bool)arg4 closeTabs:(bool)arg5;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 profileIdentifier:(id)arg3 clearAllProfiles:(bool)arg4 closeAllTabs:(bool)arg5;
- (id)init;
- (void)showClearHistoryMenuFromViewController:(id)arg1;

@end
