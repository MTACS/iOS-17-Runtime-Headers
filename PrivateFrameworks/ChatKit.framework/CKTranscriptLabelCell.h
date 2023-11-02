
@interface CKTranscriptLabelCell : CKTranscriptStampCell

@property (nonatomic, readonly) UILabel *label;

+ (id)createStampLabelView;
+ (id)createStampTextView;
+ (id)reuseIdentifier;

- (id)attributedText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setAttributedText:(id)arg1;

@end
