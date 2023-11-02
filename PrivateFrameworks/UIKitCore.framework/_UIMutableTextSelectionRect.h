
@interface _UIMutableTextSelectionRect : UITextSelectionRect {
    UITextSelectionRectCustomHandleInfo * __customHandleInfo;
    bool  __drawsOwnHighlight;
    UIBezierPath * __path;
    NSValue * __transform;
    bool  _containsEnd;
    bool  _containsStart;
    bool  _isVertical;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    long long  _writingDirection;
}

@property (nonatomic, retain) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (setter=_setDrawsOwnHighlight:, nonatomic) bool _drawsOwnHighlight;
@property (nonatomic, retain) UIBezierPath *_path;
@property (nonatomic, retain) NSValue *_transform;
@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) bool isVertical;
@property (nonatomic) long long writingDirection;

+ (id)selectionRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;

- (void).cxx_destruct;
- (id)_customHandleInfo;
- (bool)_drawsOwnHighlight;
- (id)_path;
- (void)_setDrawsOwnHighlight:(bool)arg1;
- (id)_transform;
- (bool)_ui_isKindOfTextSelectionRect;
- (bool)containsEnd;
- (bool)containsStart;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isVertical;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setIsVertical:(bool)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
- (void)setWritingDirection:(long long)arg1;
- (void)set_customHandleInfo:(id)arg1;
- (void)set_path:(id)arg1;
- (void)set_transform:(id)arg1;
- (long long)writingDirection;

@end
