
@interface CKTextMetrics : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _alignmentInset;
    bool  _singleLine;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } alignmentInset;
@property (getter=isSingleLine, nonatomic) bool singleLine;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentInset;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 singleLine:(bool)arg2 alignmentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (bool)isSingleLine;
- (void)setAlignmentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSingleLine:(bool)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
