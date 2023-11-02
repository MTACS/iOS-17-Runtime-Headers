
@interface CFXFilterPickerCollectionView : JTCollectionView {
    bool  _enableInfiniteHorizontalScrolling;
}

@property (nonatomic) bool enableInfiniteHorizontalScrolling;

- (bool)enableInfiniteHorizontalScrolling;
- (void)layoutSubviews;
- (void)setEnableInfiniteHorizontalScrolling:(bool)arg1;

@end
