
@interface TSWPInteriorTextWrapController : NSObject <TSWPTextWrap>

+ (id)sharedInteriorTextWrapController;

- (id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(bool*)arg3;
- (double)nextUnobstructedSpanStartingAt:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
- (unsigned int)splitLine:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 lineSegmentRects:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(bool)arg4 floatingCausedWrap:(bool*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;

@end
