
@interface SFUnifiedTabBarItemArrangement : NSObject <NSCopying> {
    SFUnifiedBarItem * _activeItem;
    unsigned long long  _activeItemIndex;
    bool  _activeItemIsExpanded;
    long long  _activeItemSquishState;
    bool  _allowsScrollingPinnedItems;
    NSArray * _items;
    NSArray * _overflowPinnedItems;
    unsigned long long  _pinnedItemLimit;
    NSArray * _pinnedItems;
    NSArray * _unpinnedItems;
}

@property (nonatomic, readonly) SFUnifiedBarItem *activeItem;
@property (nonatomic, readonly) unsigned long long activeItemIndex;
@property (nonatomic, readonly) bool activeItemIsExpanded;
@property (nonatomic, readonly) long long activeItemSquishState;
@property (nonatomic, readonly, copy) NSIndexSet *allItemIndexes;
@property (nonatomic, readonly) bool allowsScrollingPinnedItems;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSArray *overflowPinnedItems;
@property (nonatomic, readonly) unsigned long long pinnedItemLimit;
@property (nonatomic, readonly, copy) NSArray *pinnedItems;
@property (nonatomic, readonly) bool revealsSquishedActiveItem;
@property (nonatomic, readonly, copy) NSArray *unpinnedItems;

- (void).cxx_destruct;
- (id)_initWithItems:(id)arg1 activeItem:(id)arg2 activeItemIsExpanded:(bool)arg3 allowPinning:(bool)arg4 allowsScrollingPinnedItems:(bool)arg5;
- (id)activeItem;
- (unsigned long long)activeItemIndex;
- (bool)activeItemIsExpanded;
- (long long)activeItemSquishState;
- (id)allItemIndexes;
- (bool)allowsScrollingPinnedItems;
- (id)arrangementWithActiveItem:(id)arg1;
- (id)arrangementWithActiveItemIsExpanded:(bool)arg1;
- (id)arrangementWithActiveItemSquishState:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)determineActiveItemSquishStateIfNeeded:(bool)arg1;
- (id)init;
- (id)initWithItem:(id)arg1 activeItemIsExpanded:(bool)arg2;
- (id)initWithItems:(id)arg1 activeItem:(id)arg2;
- (id)initWithItems:(id)arg1 activeItem:(id)arg2 activeItemIsExpanded:(bool)arg3 allowsScrollingPinnedItems:(bool)arg4;
- (bool)isEqualToArrangement:(id)arg1;
- (id)items;
- (id)overflowPinnedItems;
- (unsigned long long)pinnedItemLimit;
- (id)pinnedItems;
- (id)resolvedArrangementWithPinnedItemLimit:(unsigned long long)arg1 overflowItem:(id)arg2;
- (bool)revealsSquishedActiveItem;
- (id)unpinnedItems;

@end
