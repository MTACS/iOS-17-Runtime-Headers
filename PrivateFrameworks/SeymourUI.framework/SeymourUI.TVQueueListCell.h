
@interface SeymourUI.TVQueueListCell : UICollectionViewCell {
    void delegate;
    void deleteButton;
    void focusGuide;
    void grabButton;
    void horizontalStackView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  itemInfo;
    void layout;
    void lockupView;
    void preferredOperation;
    void state;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (void)handleDelete;
- (void)handleGrab;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;

@end
