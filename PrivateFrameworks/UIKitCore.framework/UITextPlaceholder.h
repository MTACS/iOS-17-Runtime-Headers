
@interface UITextPlaceholder : NSObject {
    _UITextPlaceholderAttachment * _attachment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _caretRectBeforeInsertion;
    NSArray * _rects;
}

@property (nonatomic, retain) _UITextPlaceholderAttachment *attachment;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRectBeforeInsertion;
@property (nonatomic, copy) NSArray *rects;

- (void).cxx_destruct;
- (id)attachment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectBeforeInsertion;
- (id)init;
- (id)rects;
- (void)setAttachment:(id)arg1;
- (void)setCaretRectBeforeInsertion:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRects:(id)arg1;

@end
