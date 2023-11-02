
@interface SeymourUI.MetadataFocusableTextView : UIView {
    void lastWidth;
    void layout;
    void onEntryTapped;
    void textView;
    void textViewHeightConstraint;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;

@end
