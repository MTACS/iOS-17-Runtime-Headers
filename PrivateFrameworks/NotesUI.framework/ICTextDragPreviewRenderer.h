
@interface ICTextDragPreviewRenderer : NSObject {
    bool  _calculated;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _firstRect;
    UIImage * _image;
    bool  _isDraggingChecklistItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastRect;
    NSLayoutManager * _layoutManager;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _middleRect;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originAdjustment;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    double  _renderOffset;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _renderedGlyphRange;
    ICTTTextStorage * _textStorage;
    bool  _unifyRects;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bodyRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } firstLineRect;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) bool isDraggingChecklistItem;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastLineRect;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) struct CGPoint { double x1; double x2; } originAdjustment;
@property (nonatomic) double renderOffset;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } renderedGlyphRange;
@property (nonatomic, retain) ICTTTextStorage *textStorage;

- (void).cxx_destruct;
- (void)_calculate;
- (void)_calculateRectsUsingLayoutManager:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_correctlyOffsetBoundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rawBoundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bodyRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstLineRect;
- (id)image;
- (id)initWithLayoutManager:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textStorage:(id)arg3;
- (bool)isDraggingChecklistItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastLineRect;
- (id)layoutManager;
- (struct CGPoint { double x1; double x2; })origin;
- (struct CGPoint { double x1; double x2; })originAdjustment;
- (double)renderOffset;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })renderedGlyphRange;
- (void)setIsDraggingChecklistItem:(bool)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRenderOffset:(double)arg1;
- (void)setRenderedGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextStorage:(id)arg1;
- (id)textStorage;

@end
