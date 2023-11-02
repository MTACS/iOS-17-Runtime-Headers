
@interface HFAbstractGroupedStatusItem : HFStatusItem {
    NSMutableSet * _allItems;
    NSSet * _displayedItems;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, retain) NSSet *displayedItems;
@property (nonatomic, readonly) NSSet *items;

+ (id)sortKey;
+ (id)statusItemClasses;

- (void).cxx_destruct;
- (bool)_hasRequiredStatusItems;
- (id)_statusItemOfClass:(Class)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (void)addItem:(id)arg1;
- (id)allItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayedItems;
- (id)items;
- (void)removeItem:(id)arg1;
- (void)setAllItems:(id)arg1;
- (void)setDisplayedItems:(id)arg1;
- (bool)shouldEncapsulateItem:(id)arg1;

@end
