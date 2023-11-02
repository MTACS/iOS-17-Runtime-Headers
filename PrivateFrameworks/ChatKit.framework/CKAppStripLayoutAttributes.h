
@interface CKAppStripLayoutAttributes : UICollectionViewLayoutAttributes {
    long long  _appStripSize;
    bool  _showsBorder;
}

@property (nonatomic) long long appStripSize;
@property (nonatomic) bool showsBorder;

- (long long)appStripSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAppStripSize:(long long)arg1;
- (void)setShowsBorder:(bool)arg1;
- (bool)showsBorder;

@end
