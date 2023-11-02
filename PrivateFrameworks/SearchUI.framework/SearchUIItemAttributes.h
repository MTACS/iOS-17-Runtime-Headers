
@interface SearchUIItemAttributes : UICollectionViewLayoutAttributes {
    bool  _isForcingHeight;
}

@property (nonatomic) bool isForcingHeight;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForcingHeight;
- (void)setIsForcingHeight:(bool)arg1;

@end
