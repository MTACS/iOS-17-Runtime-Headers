
@interface ICQUsageMediaCollection : NSObject {
    bool  _grouped;
    NSMutableArray * _itemSizes;
    NSMutableArray * _items;
    float  _totalSize;
}

@property (getter=isGrouped, nonatomic) bool grouped;
@property (nonatomic, copy) NSArray *itemSizes;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) float totalSize;

- (void).cxx_destruct;
- (bool)isGrouped;
- (id)itemSizes;
- (id)items;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setItemSizes:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTotalSize:(float)arg1;
- (void)sortItemsByMediaKey:(id)arg1;
- (float)totalSize;

@end
