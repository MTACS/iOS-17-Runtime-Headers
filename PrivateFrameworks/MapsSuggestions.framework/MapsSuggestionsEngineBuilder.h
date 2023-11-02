
@interface MapsSuggestionsEngineBuilder : NSObject <MapsSuggestionsObject> {
    NSMutableArray * _excludeDedupers;
    NSMutableArray * _excludeImprovers;
    NSMutableSet * _excludePostFilters;
    NSMutableSet * _excludePreFilters;
    bool  _hasTracker;
    NSMutableArray * _includeDedupers;
    NSMutableArray * _includeImprovers;
    NSMutableSet * _includePostFilters;
    NSMutableSet * _includePreFilters;
    <MapsSuggestionsLocationUpdater> * _locationUpdater;
    <MapsSuggestionsFullResourceDepot> * _resourceDepot;
    NSMutableArray * _sourceClasses;
    <MapsSuggestionsStrategy> * _strategy;
    NSMutableDictionary * _titleFormatters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *excludeDedupers;
@property (nonatomic, retain) NSMutableArray *excludeImprovers;
@property (nonatomic, retain) NSMutableSet *excludePostFilters;
@property (nonatomic, retain) NSMutableSet *excludePreFilters;
@property (nonatomic) bool hasTracker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *includeDedupers;
@property (nonatomic, retain) NSMutableArray *includeImprovers;
@property (nonatomic, retain) NSMutableSet *includePostFilters;
@property (nonatomic, retain) NSMutableSet *includePreFilters;
@property (nonatomic, retain) <MapsSuggestionsLocationUpdater> *locationUpdater;
@property (nonatomic, retain) <MapsSuggestionsFullResourceDepot> *resourceDepot;
@property (nonatomic, retain) NSMutableArray *sourceClasses;
@property (nonatomic, retain) <MapsSuggestionsStrategy> *strategy;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *titleFormatters;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)forDevice;
+ (id)simpleStrategy;

- (void).cxx_destruct;
- (id)build;
- (id)excludeDedupers;
- (id)excludeImprovers;
- (id)excludePostFilters;
- (id)excludePreFilters;
- (bool)hasTracker;
- (id)includeDedupers;
- (id)includeImprovers;
- (id)includePostFilters;
- (id)includePreFilters;
- (id)init;
- (id)locationUpdater;
- (id)resourceDepot;
- (void)setExcludeDedupers:(id)arg1;
- (void)setExcludeImprovers:(id)arg1;
- (void)setExcludePostFilters:(id)arg1;
- (void)setExcludePreFilters:(id)arg1;
- (void)setHasTracker:(bool)arg1;
- (void)setIncludeDedupers:(id)arg1;
- (void)setIncludeImprovers:(id)arg1;
- (void)setIncludePostFilters:(id)arg1;
- (void)setIncludePreFilters:(id)arg1;
- (void)setLocationUpdater:(id)arg1;
- (void)setResourceDepot:(id)arg1;
- (void)setSourceClasses:(id)arg1;
- (void)setStrategy:(id)arg1;
- (void)setTitleFormatters:(id)arg1;
- (id)sourceClasses;
- (id)strategy;
- (id)titleFormatters;
- (id)uniqueName;
- (id)withDedupers:(id)arg1;
- (id)withFavorites;
- (id)withImprovers:(id)arg1;
- (id)withLocationUpdater:(id)arg1;
- (id)withPostFilters:(id)arg1;
- (id)withPreFilters:(id)arg1;
- (id)withResourceDepot:(id)arg1;
- (id)withSourceClasses:(id)arg1;
- (id)withTitleFormatter:(id)arg1 forType:(long long)arg2;
- (id)withoutPreFilters:(id)arg1;
- (id)withoutTracker;

@end
