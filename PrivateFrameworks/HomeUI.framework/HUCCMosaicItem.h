
@interface HUCCMosaicItem : NSObject <HUCCMosaicOrderable> {
    HFItem<HFHomeKitItemProtocol> * _baseItem;
    double  _itemPriority;
    unsigned long long  _itemSize;
    unsigned long long  _itemType;
}

@property (nonatomic, retain) HFItem<HFHomeKitItemProtocol> *baseItem;
@property (nonatomic) double itemPriority;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long itemType;

- (void).cxx_destruct;
- (id)baseItem;
- (id)init;
- (id)initWithBaseItem:(id)arg1;
- (double)itemPriority;
- (unsigned long long)itemSize;
- (unsigned long long)itemType;
- (void)setBaseItem:(id)arg1;
- (void)setItemPriority:(double)arg1;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setItemType:(unsigned long long)arg1;

@end
