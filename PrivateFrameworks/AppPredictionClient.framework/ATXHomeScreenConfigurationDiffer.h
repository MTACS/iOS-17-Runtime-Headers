
@interface ATXHomeScreenConfigurationDiffer : NSObject {
    NSArray * _addedPinnedWidgets;
    ATXHomeScreenConfigurationComponentsDiffer * _componentsDiffer;
    NSArray * _configuredPinnedWidgets;
    NSArray * _configuredStackedWidgets;
    ATXHomeScreenConfigurationComponents * _currentComponents;
    NSArray * _deletedPinnedWidgets;
    ATXHomeScreenConfigurationComponents * _previousComponents;
    NSArray * _widgetsAddedToStacksByUser;
    NSArray * _widgetsDeletedFromStacksByUser;
}

@property (nonatomic, readonly) NSArray *addedApps;
@property (nonatomic, readonly) NSArray *addedPinnedWidgets;
@property (nonatomic, readonly) NSArray *addedStacks;
@property (nonatomic, readonly) NSArray *configuredWidgets;
@property (nonatomic, readonly) NSArray *deletedPinnedWidgets;
@property (nonatomic, readonly) NSArray *deletedStacks;
@property (nonatomic, readonly) NSArray *removedApps;
@property (nonatomic, readonly) NSArray *suggestedWidgetsAddedPermanentlyByUser;
@property (nonatomic, readonly) NSArray *suggestedWidgetsRemoved;
@property (nonatomic, readonly) NSArray *widgetsAddedToStacksByUser;
@property (nonatomic, readonly) NSArray *widgetsDeletedFromStacksByUser;

+ (bool)_widget:(id)arg1 hasSamePersonalityAsOtherWidget:(id)arg2;

- (void).cxx_destruct;
- (void)_calculatePinnedWidgetChanges;
- (void)_calculateStackedWidgetChanges;
- (id)addedApps;
- (id)addedPinnedWidgets;
- (id)addedStacks;
- (id)configuredWidgets;
- (bool)currentConfigContainsWidgetWithBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3;
- (id)deletedPinnedWidgets;
- (id)deletedStacks;
- (id)init;
- (id)initWithPreviousConfigurations:(id)arg1 currentConfigurations:(id)arg2;
- (id)removedApps;
- (id)stackInCurrentConfigurationsForStackedWidget:(id)arg1;
- (id)stackInPreviousConfigurationsForStackedWidget:(id)arg1;
- (id)suggestedWidgetsAddedPermanentlyByUser;
- (id)suggestedWidgetsRemoved;
- (id)widgetsAddedToStacksByUser;
- (id)widgetsDeletedFromStacksByUser;

@end
