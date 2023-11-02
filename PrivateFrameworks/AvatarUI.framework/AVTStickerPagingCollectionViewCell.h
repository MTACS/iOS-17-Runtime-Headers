
@interface AVTStickerPagingCollectionViewCell : UICollectionViewCell {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _additionalContentInsets;
    UIView * _pageContentView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalContentInsets;
@property (nonatomic, retain) UIView *pageContentView;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalContentInsets;
- (void)layoutSubviews;
- (id)pageContentView;
- (void)prepareForReuse;
- (void)setAdditionalContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageContentView:(id)arg1;

@end
