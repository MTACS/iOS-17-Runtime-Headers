
@interface PRComplicationGalleryApplicationCell : UICollectionViewCell {
    UIView * _separatorView;
    bool  _separatorVisible;
    PRComplicationGalleryApplicationTitleView * _titleView;
}

@property (nonatomic, retain) UIView *separatorView;
@property (getter=isSeparatorVisible, nonatomic) bool separatorVisible;
@property (nonatomic, readonly) PRComplicationGalleryApplicationTitleView *titleView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSeparatorVisible;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void)setSeparatorVisible:(bool)arg1;
- (id)titleView;

@end
