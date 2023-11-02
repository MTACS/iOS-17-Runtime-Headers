
@interface MKImageTextAttachment : NSTextAttachment {
    double  _maxHeight;
    double  _verticalOffset;
}

@property (nonatomic) double maxHeight;
@property (nonatomic) double verticalOffset;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)initWithImage:(id)arg1 verticalOffset:(double)arg2;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (void)setVerticalOffset:(double)arg1;
- (double)verticalOffset;

@end
