
@interface ICInstrumentationUtilities : NSObject

+ (void)addRecentPasswordMode:(id)arg1 forAccount:(id)arg2;
+ (long long)autoSortSelectionChangeCountForState:(bool)arg1;
+ (id)autoSortSelectionCountUserDefaultsKeyForState:(bool)arg1;
+ (void)clearAutoSortSelectionChangeCountForState:(bool)arg1;
+ (void)clearRecentPasswordChangeCountAsReset:(bool)arg1;
+ (void)clearRecentPasswordModesForAccount:(id)arg1;
+ (void)incrementAutoSortSelectionChangeCountForState:(bool)arg1;
+ (void)incrementRecentPasswordChangeCountAsReset:(bool)arg1;
+ (id)passwordChangeCountUserDefaultsKeyAsReset:(bool)arg1;
+ (long long)recentPasswordChangeCountAsReset:(bool)arg1;
+ (id)recentPasswordModesForAccount:(id)arg1;
+ (id)recentPasswordModesKeyForAccount:(id)arg1;

@end
