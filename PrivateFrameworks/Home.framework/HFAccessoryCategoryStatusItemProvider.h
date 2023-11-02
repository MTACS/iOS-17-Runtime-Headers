
@interface HFAccessoryCategoryStatusItemProvider : HFStaticItemProvider {
    HMHome * _home;
    HMRoom * _room;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)_categoryStatusItemClasses;
+ (id)categorySortOrder;

- (void).cxx_destruct;
- (id)_buildStatusItemWithClass:(Class)arg1 home:(id)arg2 room:(id)arg3 valueSource:(id)arg4;
- (void)_buildStatusItemsForGroupedStatusItem:(id)arg1;
- (id)_createStatusItemsForHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithHome:(id)arg1 room:(id)arg2 overrideValueSource:(id)arg3;
- (id)initWithItems:(id)arg1;
- (id)room;
- (id)valueSource;

@end
