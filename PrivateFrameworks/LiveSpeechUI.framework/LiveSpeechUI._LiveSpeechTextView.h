
@interface LiveSpeechUI._LiveSpeechTextView : UITextView {
    void $__lazy_storage_$_placeholderOverlayLabel;
    void $__lazy_storage_$_textViewForSizing;
    void behavior;
    void maxHeight;
    void maxNumberOfLines;
    void mode;
    void placeholderText;
    void store;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (void)layoutSubviews;

@end
