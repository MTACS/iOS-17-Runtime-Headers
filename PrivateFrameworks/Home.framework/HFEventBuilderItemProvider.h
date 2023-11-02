
@interface HFEventBuilderItemProvider : HFItemProvider {
    NSMutableSet * _eventBuilderItems;
    NSSet * _eventBuilders;
    HMHome * _home;
    NSSet * _lastUpdateEventBuilders;
    NSSet * _lastUpdateEventGroups;
    HFTriggerNaturalLanguageOptions * _naturalLanguageOptions;
    HFEventTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, retain) NSMutableSet *eventBuilderItems;
@property (nonatomic, retain) NSSet *eventBuilders;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSSet *lastUpdateEventBuilders;
@property (nonatomic, retain) NSSet *lastUpdateEventGroups;
@property (nonatomic) unsigned long long nameType;
@property (nonatomic, retain) HFTriggerNaturalLanguageOptions *naturalLanguageOptions;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_reloadItems;
- (id)eventBuilderGroupsForEventBuilders:(id)arg1;
- (id)eventBuilderItems;
- (id)eventBuilders;
- (id)home;
- (id)initWithEventBuilders:(id)arg1 inHome:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1;
- (id)items;
- (id)lastUpdateEventBuilders;
- (id)lastUpdateEventGroups;
- (unsigned long long)nameType;
- (id)naturalLanguageOptions;
- (id)reloadBuilderGroups;
- (id)reloadItems;
- (void)setEventBuilderItems:(id)arg1;
- (void)setEventBuilders:(id)arg1;
- (void)setLastUpdateEventBuilders:(id)arg1;
- (void)setLastUpdateEventGroups:(id)arg1;
- (void)setNameType:(unsigned long long)arg1;
- (void)setNaturalLanguageOptions:(id)arg1;
- (id)triggerBuilder;

@end
