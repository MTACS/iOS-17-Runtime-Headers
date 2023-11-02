
@interface FBKBugFormLabel : UILabel {
    NSTextContainer * _container;
    NSLayoutManager * _layoutManager;
    NSTextStorage * _textStorage;
}

@property (retain) NSTextContainer *container;
@property (retain) NSLayoutManager *layoutManager;
@property (retain) NSTextStorage *textStorage;

- (void).cxx_destruct;
- (void)_initLabel;
- (id)container;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutManager;
- (void)layoutSubviews;
- (void)setContainer:(id)arg1;
- (void)setLayoutManager:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (id)textStorage;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
