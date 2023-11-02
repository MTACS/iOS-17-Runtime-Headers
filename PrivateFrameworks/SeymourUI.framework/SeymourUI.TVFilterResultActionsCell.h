
@interface SeymourUI.TVFilterResultActionsCell : UICollectionViewCell {
    void bottomFocusGuide;
    void delegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void sortButton;
    void titleLabel;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)clearButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)sortButtonTapped;

@end
