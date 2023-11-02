
@interface SeymourUI.ProgramMediaTagsCell : UICollectionViewCell {
    void accessibilityMediaTags;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void tagsTextLabel;
}

@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UILabel *tagsTextLabel;

- (void).cxx_destruct;
- (id)accessibilityMediaTags;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAccessibilityMediaTags:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tagsTextLabel;

@end
