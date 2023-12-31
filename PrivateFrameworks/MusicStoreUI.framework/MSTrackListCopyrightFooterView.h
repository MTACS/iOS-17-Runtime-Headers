
@interface MSTrackListCopyrightFooterView : UIView {
    NSString * _text;
    struct CGSize { 
        double width; 
        double height; 
    }  _textSize;
}

@property (nonatomic, retain) NSString *text;

- (struct CGSize { double x1; double x2; })_textSize;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)sizeToFit;
- (id)text;

@end
