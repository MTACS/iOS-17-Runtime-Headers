
@interface HUCCMosaicLayout : NSObject {
    NSMutableArray * _accessories;
    unsigned long long  _accessoriesNeeded;
    NSMutableArray * _fillers;
    <HUCCMosaicOrderable> * _homeItem;
    NSString * _layoutDescription;
    unsigned long long  _layoutType;
    unsigned long long  _numberOfFilledItems;
    unsigned long long  _numberOfMisses;
    unsigned long long  _priority;
    NSMutableArray * _scenes;
    unsigned long long  _scenesNeeded;
}

@property (nonatomic, retain) NSMutableArray *accessories;
@property (nonatomic) unsigned long long accessoriesNeeded;
@property (nonatomic, readonly) NSArray *arrangedItems;
@property (nonatomic, retain) NSMutableArray *fillers;
@property (nonatomic, retain) <HUCCMosaicOrderable> *homeItem;
@property (nonatomic, readonly) bool isComplete;
@property (nonatomic, retain) NSString *layoutDescription;
@property (nonatomic, readonly) unsigned long long layoutType;
@property (nonatomic, readonly) unsigned long long numberOfFilledItems;
@property (nonatomic) unsigned long long numberOfMisses;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, retain) NSMutableArray *scenes;
@property (nonatomic) unsigned long long scenesNeeded;

+ (id)allLandscapeLayouts;
+ (id)allPortraitLayouts;
+ (unsigned long long)maxItemsNeededForLandscape;
+ (unsigned long long)maxItemsNeededForPortrait;
+ (id)sortDescriptors;

- (void).cxx_destruct;
- (void)_addAccessoryItem:(id)arg1;
- (void)_addFillerItem:(id)arg1;
- (void)_addSceneItem:(id)arg1;
- (void)_registerPossibleMiss;
- (void)_sizeAllItems;
- (id)accessories;
- (unsigned long long)accessoriesNeeded;
- (void)addItem:(id)arg1;
- (id)arrangedItems;
- (id)description;
- (id)fillers;
- (id)homeItem;
- (id)initWithLayoutType:(unsigned long long)arg1;
- (bool)isComplete;
- (id)layoutDescription;
- (unsigned long long)layoutType;
- (unsigned long long)numberOfFilledItems;
- (unsigned long long)numberOfMisses;
- (unsigned long long)priority;
- (id)scenes;
- (unsigned long long)scenesNeeded;
- (void)setAccessories:(id)arg1;
- (void)setAccessoriesNeeded:(unsigned long long)arg1;
- (void)setFillers:(id)arg1;
- (void)setHomeItem:(id)arg1;
- (void)setLayoutDescription:(id)arg1;
- (void)setNumberOfMisses:(unsigned long long)arg1;
- (void)setScenes:(id)arg1;
- (void)setScenesNeeded:(unsigned long long)arg1;

@end
