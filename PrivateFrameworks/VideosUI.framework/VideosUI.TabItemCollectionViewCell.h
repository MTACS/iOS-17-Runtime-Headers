
@interface VideosUI.TabItemCollectionViewCell : UICollectionViewCell {
    void cardItemLayout;
    void debugName;
    void imageView;
    void numberOfTabs;
    void titleView;
}

@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic) bool scalesLargeContentImage;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)largeContentImage;
- (id)largeContentTitle;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (bool)scalesLargeContentImage;
- (void)setLargeContentImage:(id)arg1;
- (void)setLargeContentTitle:(id)arg1;
- (void)setScalesLargeContentImage:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
