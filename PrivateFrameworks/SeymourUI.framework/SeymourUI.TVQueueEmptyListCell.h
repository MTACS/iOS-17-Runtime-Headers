
@interface SeymourUI.TVQueueEmptyListCell : UICollectionViewCell {
    void actionButton;
    void actionButtonTextView;
    void delegate;
    void focusGuide;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void primaryLabel;
    void secondaryLabel;
    void separator;
}

@property (nonatomic, readonly) bool canBecomeFocused;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)handleActionButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
