
@interface SSRecentResultsManager : NSObject

+ (void)cacheResult:(id)arg1 searchString:(id)arg2;
+ (void)cacheSearchString:(id)arg1;
+ (void)deleteAllRecents;
+ (void)deleteResult:(id)arg1;
+ (bool)isValidSearchString:(id)arg1;
+ (void)preheat;
+ (void)sendRefreshNotification;
+ (id)updateResult:(id)arg1 topic:(id)arg2 queryContext:(id)arg3;

@end
