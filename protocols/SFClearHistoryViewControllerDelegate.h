
@protocol SFClearHistoryViewControllerDelegate <NSObject>

@required

- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 profileIdentifier:(NSString *)arg3 clearAllProfiles:(bool)arg4 closeAllTabs:(bool)arg5;

@end
