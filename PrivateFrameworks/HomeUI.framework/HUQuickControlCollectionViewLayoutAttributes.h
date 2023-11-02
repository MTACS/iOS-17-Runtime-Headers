
@interface HUQuickControlCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    unsigned long long  _itemSize;
    unsigned long long  _titlePosition;
}

@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) unsigned long long titlePosition;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)itemSize;
- (void)setItemSize:(unsigned long long)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (unsigned long long)titlePosition;

@end
