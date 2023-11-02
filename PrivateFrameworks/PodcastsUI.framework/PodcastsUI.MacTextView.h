
@interface PodcastsUI.MacTextView : UITextView

@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic, copy) NSString *text;

- (id)accessibilityPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)setAccessibilityPath:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)updateAppearance;

@end
