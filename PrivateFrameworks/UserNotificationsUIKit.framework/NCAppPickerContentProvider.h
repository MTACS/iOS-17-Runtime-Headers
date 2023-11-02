
@interface NCAppPickerContentProvider : NSObject {
    bool  _ableToSortByAvgNumberOfNotifications;
    NSArray * _appsSortedByAvgNumberOfNotificationsDescending;
    NSArray * _appsSortedByNameAscending;
    NSString * _longestAppName;
    unsigned long long  _maxAvgNumberOfNotifications;
    NSMutableSet * _selectedApps;
    bool  _sortedByAvgNumberOfNotifications;
}

@property (getter=isAbleToSortByAvgNumberOfNotifications, nonatomic, readonly) bool ableToSortByAvgNumberOfNotifications;
@property (nonatomic, readonly, copy) NSString *longestAppName;
@property (nonatomic, readonly) unsigned long long maxAvgNumberOfNotifications;
@property (nonatomic, readonly, copy) NSArray *selectedBundleIdentifiers;
@property (nonatomic, readonly) unsigned long long selectedCount;
@property (getter=isSortedByAvgNumberOfNotifications, nonatomic, readonly) bool sortedByAvgNumberOfNotifications;
@property (nonatomic, readonly) unsigned long long totalCount;

+ (void)providerWithPreviousBundleIdentifiersSelection:(id)arg1 numDaysForAverageNotificationCount:(id)arg2 onMainQueue:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_appForIndex:(unsigned long long)arg1;
- (id)_initWithATXDigestSetupEntities:(id)arg1 containsMessageAndTimeSensitiveData:(bool)arg2 numberOfDays:(unsigned long long)arg3 previousBundleIdentifiersSelection:(id)arg4;
- (unsigned long long)avgNumberOfNotificationsForIndex:(unsigned long long)arg1;
- (id)bundleIdentifierForIndex:(unsigned long long)arg1;
- (id)imageForIndex:(unsigned long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)isAbleToSortByAvgNumberOfNotifications;
- (bool)isSelectedForIndex:(unsigned long long)arg1;
- (bool)isSortedByAvgNumberOfNotifications;
- (id)longestAppName;
- (unsigned long long)maxAvgNumberOfNotifications;
- (id)nameForIndex:(unsigned long long)arg1;
- (id)selectedBundleIdentifiers;
- (unsigned long long)selectedCount;
- (void)sortByAvgNumberOfNotifications;
- (void)sortByName;
- (void)toggleSelectedForIndex:(unsigned long long)arg1;
- (unsigned long long)totalCount;

@end
