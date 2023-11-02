
@interface DOCTagsCollectionViewTagCell : UICollectionViewCell {
    DOCTagsCollectionItemContentView * _tagView;
}

@property (nonatomic, readonly) DOCTagsCollectionItemContentView *tagView;

- (void).cxx_destruct;
- (id)doc_tagsCollectionCellMenuTarget;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)maxTagWidth;
- (id)tagView;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
