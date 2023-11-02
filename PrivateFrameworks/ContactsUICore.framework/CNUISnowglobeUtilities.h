
@interface CNUISnowglobeUtilities : NSObject

+ (id)avatarLayerForCGImages:(struct CGImage {}**)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forItemCount:(long long)arg3 scope:(id)arg4;
+ (struct CGColor { }*)backgroundColorForBackgroundStyle:(unsigned long long)arg1;
+ (id)circularContainerLayerForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundStyle:(unsigned long long)arg2;
+ (struct CGImage { }*)circularPlaceholderImageForSize:(struct CGSize { double x1; double x2; })arg1 backgroundStyle:(unsigned long long)arg2 scale:(double)arg3;
+ (id)containerLayerForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundStyle:(unsigned long long)arg2;
+ (struct CGColor { }*)defaultBackgroundColor;
+ (struct CGColor { }*)defaultDarkBackgroundColor;
+ (bool)enableGroupPhoto;
+ (struct CGImage { }*)imageForAvatarImages:(struct CGImage {}**)arg1 badgeImages:(struct CGImage {}**)arg2 badgeTypes:(id)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 itemCount:(long long)arg5 scope:(id)arg6;
+ (struct CGImage { }*)imageForLayer:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)roundedRectContainerLayerForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundStyle:(unsigned long long)arg2;
+ (struct CGImage { }*)roundedRectPlaceholderImageForSize:(struct CGSize { double x1; double x2; })arg1 backgroundStyle:(unsigned long long)arg2 scale:(double)arg3;
+ (struct CGSize { double x1; double x2; })sizeForImageAtIndex:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 forItemCount:(unsigned long long)arg3 scope:(id)arg4;

@end
