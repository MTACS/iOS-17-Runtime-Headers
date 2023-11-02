
@interface VideosUI.StackCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes <ForcedSizeLayoutAttributes> {
    void forcedSize;
}

@property (nonatomic) bool forcedSize;

- (id)copyWithZone:(void*)arg1;
- (bool)forcedSize;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setForcedSize:(bool)arg1;

@end
