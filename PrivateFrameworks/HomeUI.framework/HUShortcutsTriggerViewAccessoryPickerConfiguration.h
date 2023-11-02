
@interface HUShortcutsTriggerViewAccessoryPickerConfiguration : NSObject {
    unsigned long long  _accessoryPool;
    <HFAccessoryLikeObjectContainer> * _customAccessoryContainer;
    id /* block */  _filterBlock;
    unsigned long long  _objectLevel;
    unsigned long long  _sectionGroupingStyle;
    bool  _servicesOnly;
}

@property (nonatomic) unsigned long long accessoryPool;
@property (nonatomic, retain) <HFAccessoryLikeObjectContainer> *customAccessoryContainer;
@property (nonatomic, copy) id /* block */ filterBlock;
@property (nonatomic) unsigned long long objectLevel;
@property (nonatomic) unsigned long long sectionGroupingStyle;
@property (nonatomic) bool servicesOnly;

- (void).cxx_destruct;
- (unsigned long long)accessoryPool;
- (id)customAccessoryContainer;
- (id /* block */)filterBlock;
- (id)init;
- (unsigned long long)objectLevel;
- (unsigned long long)sectionGroupingStyle;
- (bool)servicesOnly;
- (void)setAccessoryPool:(unsigned long long)arg1;
- (void)setCustomAccessoryContainer:(id)arg1;
- (void)setFilterBlock:(id /* block */)arg1;
- (void)setObjectLevel:(unsigned long long)arg1;
- (void)setSectionGroupingStyle:(unsigned long long)arg1;
- (void)setServicesOnly:(bool)arg1;

@end
