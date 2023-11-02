
@interface ATXHomeScreenConfigurationComponentsDiffer : NSObject {
    NSOrderedCollectionDifference * _appsDifference;
    NSArray * _deletedPreviousSuggestedWidgets;
    NSOrderedCollectionDifference * _pinnedWidgetsDifference;
    NSOrderedCollectionDifference * _stacksDifference;
    NSArray * _userAddedPreviousSuggestedWidgets;
    NSArray * _userAddedStackedWidgets;
    NSArray * _userDeletedStackedWidgets;
}

@property (nonatomic, readonly) NSArray *addedApps;
@property (nonatomic, readonly) NSArray *addedPinnedWidgets;
@property (nonatomic, readonly) NSArray *addedStacks;
@property (nonatomic, readonly) NSArray *deletedPinnedWidgets;
@property (nonatomic, readonly) NSArray *deletedPreviousSuggestedWidgets;
@property (nonatomic, readonly) NSArray *deletedStacks;
@property (nonatomic, readonly) NSArray *removedApps;
@property (nonatomic, readonly) NSArray *userAddedPreviousSuggestedWidgets;
@property (nonatomic, readonly) NSArray *userAddedStackedWidgets;
@property (nonatomic, readonly) NSArray *userDeletedStackedWidgets;

- (void).cxx_destruct;
- (id)_widgetsByWidgetUniqueIds:(id)arg1;
- (id)addedApps;
- (id)addedPinnedWidgets;
- (id)addedStacks;
- (id)deletedPinnedWidgets;
- (id)deletedPreviousSuggestedWidgets;
- (id)deletedStacks;
- (id)initWithPreviousComponents:(id)arg1 currentComponents:(id)arg2;
- (id)removedApps;
- (id)userAddedPreviousSuggestedWidgets;
- (id)userAddedStackedWidgets;
- (id)userDeletedStackedWidgets;

@end
