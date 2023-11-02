
@interface SBProactiveHomeScreenSuggestionProvider : NSObject <ATXHomeScreenSuggestionClientObserver> {
    ATXHomeScreenPrediction * _currentPrediction;
    SBIconController * _iconController;
    NSHashTable * _observers;
}

@property (nonatomic, retain) ATXHomeScreenPrediction *currentPrediction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIconController *iconController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_iconDataSourceInIcon:(id)arg1 withUniqueIdentifier:(id)arg2 extensionBundleIdentifier:(id)arg3 widgetKind:(id)arg4 suggestionSource:(long long)arg5;
- (id)_makeDataSourceForAtxWidget:(id)arg1;
- (id)_supportedElementClasses;
- (void)addObserver:(id)arg1;
- (id)currentPrediction;
- (id)iconController;
- (id)iconModel;
- (id)initWithIconController:(id)arg1;
- (void)processUpdatedPredictions:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)rootFolder;
- (void)setCurrentPrediction:(id)arg1;
- (void)suggestionClientDidRefreshSuggestions:(id)arg1;
- (void)updatePredictions;

@end
