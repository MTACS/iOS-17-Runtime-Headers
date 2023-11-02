
@interface VKTextSelectionRect : VKBaseTextSelectionRect {
    VKTextSelectionRectCustomHandleInfo * __customHandleInfo;
    UIBezierPath * __path;
    NSString * __transcript;
    bool  _containsEnd;
    bool  _containsStart;
    unsigned long long  _layoutDirection;
    VKQuad * _quad;
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
}

@property (nonatomic, retain) VKTextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (nonatomic, copy) UIBezierPath *_path;
@property (nonatomic, retain) NSString *_transcript;
@property (nonatomic) bool containsEnd;
@property (nonatomic) bool containsStart;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic, readonly) VKQuad *quad;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;

- (void).cxx_destruct;
- (id)_customHandleInfo;
- (id)_path;
- (id)_transcript;
- (bool)containsEnd;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)containsStart;
- (id)description;
- (id)handleInfoForQuad:(id)arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 containsStart:(bool)arg2 containsEnd:(bool)arg3 layoutDirection:(unsigned long long)arg4 quad:(id)arg5;
- (bool)isVertical;
- (unsigned long long)layoutDirection;
- (id)quad;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setContainsEnd:(bool)arg1;
- (void)setContainsStart:(bool)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_customHandleInfo:(id)arg1;
- (void)set_path:(id)arg1;
- (void)set_transcript:(id)arg1;
- (id)summaryDescription;
- (long long)writingDirection;

@end
