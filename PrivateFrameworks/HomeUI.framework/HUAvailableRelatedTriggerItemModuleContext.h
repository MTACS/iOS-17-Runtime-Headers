
@interface HUAvailableRelatedTriggerItemModuleContext : NSObject <HUAvailableRelatedTriggerItemModuleContextProviding> {
    NSString * _analyticsPresentationContext;
    bool  _commitsAutomatically;
    NSNumber * _defaultActiveValue;
    unsigned long long  _engineOptions;
    unsigned long long  _errorHandlingStrategy;
    bool  _hidesAddAutomationItem;
    bool  _hidesCustomTriggers;
    bool  _itemsAreEditable;
    bool  _showNaturalLightingItem;
    bool  _showsIcons;
}

@property (nonatomic, retain) NSString *analyticsPresentationContext;
@property (nonatomic) bool commitsAutomatically;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSNumber *defaultActiveValue;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long engineOptions;
@property (nonatomic) unsigned long long errorHandlingStrategy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesAddAutomationItem;
@property (nonatomic) bool hidesCustomTriggers;
@property (nonatomic) bool itemsAreEditable;
@property (nonatomic) bool showNaturalLightingItem;
@property (nonatomic) bool showsIcons;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyticsPresentationContext;
- (bool)commitsAutomatically;
- (id)defaultActiveValue;
- (unsigned long long)engineOptions;
- (unsigned long long)errorHandlingStrategy;
- (bool)hidesAddAutomationItem;
- (bool)hidesCustomTriggers;
- (id)init;
- (id)initWithContext:(id)arg1;
- (bool)itemsAreEditable;
- (void)setAnalyticsPresentationContext:(id)arg1;
- (void)setCommitsAutomatically:(bool)arg1;
- (void)setDefaultActiveValue:(id)arg1;
- (void)setEngineOptions:(unsigned long long)arg1;
- (void)setErrorHandlingStrategy:(unsigned long long)arg1;
- (void)setHidesAddAutomationItem:(bool)arg1;
- (void)setHidesCustomTriggers:(bool)arg1;
- (void)setItemsAreEditable:(bool)arg1;
- (void)setShowNaturalLightingItem:(bool)arg1;
- (void)setShowsIcons:(bool)arg1;
- (bool)showNaturalLightingItem;
- (bool)showsIcons;

@end
