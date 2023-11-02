
@interface MagnifierSupport.DetectionLabel : UITextView {
    void doorDetectionAnnouncement;
    void doorDetectionText;
    void kSideInset;
    void peopleDetectionText;
    void textDetectionText;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)setText:(id)arg1;
- (id)text;

@end
