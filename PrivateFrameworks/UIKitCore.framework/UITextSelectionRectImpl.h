
@interface UITextSelectionRectImpl : UITextSelectionRect {
    WebSelectionRect * webRect;
}

@property (nonatomic, retain) WebSelectionRect *webRect;

+ (id)rectWithWebRect:(id)arg1;
+ (id)rectsWithWebRects:(id)arg1;

- (void).cxx_destruct;
- (bool)containsEnd;
- (bool)containsStart;
- (id)initWithWebRect:(id)arg1;
- (bool)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setWebRect:(id)arg1;
- (id)webRect;
- (long long)writingDirection;

@end
