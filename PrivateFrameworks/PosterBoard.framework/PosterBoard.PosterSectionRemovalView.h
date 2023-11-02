
@interface PosterBoard.PosterSectionRemovalView : UICollectionReusableView {
    void delegate;
    void deleteButton;
    void deleteButtonDimension;
    void posterID;
}

@property (nonatomic, retain) UIButton *deleteButton;

- (void).cxx_destruct;
- (id)deleteButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDeleteButton:(id)arg1;

@end
