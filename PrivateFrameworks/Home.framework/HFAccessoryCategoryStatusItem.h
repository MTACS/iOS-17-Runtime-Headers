
@interface HFAccessoryCategoryStatusItem : HFStatusItem <HFReorderableItemListItemProtocol, HUTintColorProviding> {
    NSArray * _statusItems;
    NSString * _uuidString;
}

@property (nonatomic, readonly) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) NSArray *statusItems;
@property (nonatomic, readonly, copy) NSString *uuidString;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)statusItemClasses;

- (void).cxx_destruct;
- (id)_statusItemOfClass:(Class)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessoryTypeGroup;
- (id /* block */)accessoryTypeGroupFilter;
- (void)applyInflectionToDescriptions:(id)arg1;
- (bool)hidesWithNoAccessories;
- (id)initWithHome:(id)arg1 room:(id)arg2 valueSource:(id)arg3;
- (id)sortedActionSetItemsWithProvider:(id)arg1;
- (id)statusItems;
- (id)uuidString;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
