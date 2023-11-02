
@protocol HUCCMosaicOrderable

@required

- (double)itemPriority;
- (unsigned long long)itemSize;
- (unsigned long long)itemType;
- (void)setItemPriority:(double)arg1;
- (void)setItemSize:(unsigned long long)arg1;

@end
