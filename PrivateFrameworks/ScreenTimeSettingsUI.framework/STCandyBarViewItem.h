
@interface STCandyBarViewItem : NSObject {
    UIImageView * _sectionView;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) UIImageView *sectionView;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

- (void).cxx_destruct;
- (id)init;
- (id)sectionView;
- (void)setSectionView:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (id)widthConstraint;

@end
