
@interface CUIKOccurrenceRenderer : NSObject

+ (id)renderAttributedString:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 font:(id)arg3 colorBarThickness:(double)arg4 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 icon:(id)arg6;
+ (id)renderColorBlockImageWithThickness:(double)arg1 barColor:(struct CGColor { }*)arg2 backgroundColor:(struct CGColor { }*)arg3 stripeColor:(struct CGColor { }*)arg4 stripedImageAlpha:(double)arg5 colorBarStyle:(long long)arg6;
+ (id /* block */)renderingBlockForAttributedString:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 font:(id)arg3 colorBarThickness:(double)arg4 edgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg5 icon:(id)arg6 outImageSize:(struct CGSize { double x1; double x2; }*)arg7;

@end
