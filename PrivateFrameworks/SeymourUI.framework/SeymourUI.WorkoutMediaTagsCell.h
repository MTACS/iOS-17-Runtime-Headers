
@interface SeymourUI.WorkoutMediaTagsCell : UICollectionViewCell {
    void accessibilityMediaTags;
    void delegate;
    void downloadButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void tagsLabel;
    void tagsLabelTopLayoutConstraint;
    void trainerButton;
}

@property (nonatomic, copy) NSArray *accessibilityMediaTags;
@property (nonatomic, readonly) UILabel *tagsLabel;

- (void).cxx_destruct;
- (id)accessibilityMediaTags;
- (void)handleDownloadButtonTapped:(id)arg1;
- (void)handleTrainerButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setAccessibilityMediaTags:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tagsLabel;

@end
