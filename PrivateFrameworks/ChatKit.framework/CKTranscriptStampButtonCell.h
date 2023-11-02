
@interface CKTranscriptStampButtonCell : CKTranscriptStampCell

@property (nonatomic, readonly) UIButton *stampButton;

+ (id)createStampTextView;
+ (id)reuseIdentifier;

- (id)attributedText;
- (void)setAttributedText:(id)arg1;
- (id)stampButton;

@end
