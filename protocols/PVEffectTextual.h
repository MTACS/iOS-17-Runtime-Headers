
@protocol PVEffectTextual

@required

- (void)beginEditingTextAtIndex:(unsigned int)arg1;
- (void)beginTextEditing;
- (NSAttributedString *)defaultAttributedString:(unsigned long long)arg1;
- (void)endEditingTextAtIndex:(unsigned int)arg1;
- (void)endTextEditing;
- (bool)isTextFlipped;
- (bool)isTitleCard;
- (int)orientation;
- (bool)supportsFlippingText;
- (bool)supportsOrientation;
- (struct PVCGPointQuad { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGPoint { double x_4_1_1; double x_4_1_2; } x4; })textCornersAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 index:(unsigned long long)arg2 forcePosterFrame:(bool)arg3 includeDropShadow:(bool)arg4 scale:(struct CGPoint { double x1; double x2; })arg5 viewSize:(struct CGSize { double x1; double x2; })arg6 viewOrigin:(int)arg7;
- (NSArray *)textEditingBounds:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (NSArray *)textEditingBoundsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 useParagraphBounds:(bool)arg3 includeDropShadow:(bool)arg4 includeMasks:(bool)arg5;
- (NSArray *)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 includeTransformAnimation:(bool)arg3 viewSize:(struct CGSize { double x1; double x2; })arg4 viewOrigin:(int)arg5;
- (NSArray *)textTransformsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 viewOrigin:(int)arg4;

@end
