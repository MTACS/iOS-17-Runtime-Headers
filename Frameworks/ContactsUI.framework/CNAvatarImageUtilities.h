
@interface CNAvatarImageUtilities : NSObject

+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 usingTransparencyInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 widthMultiplier:(double)arg3;
+ (id)croppedAndCenteredAvatarImageForImage:(id)arg1 widthMultiplier:(double)arg2;
+ (id)paddedImage:(id)arg1 withPadding:(double)arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transparencyInsetsForImage:(id)arg1 requiringFullOpacity:(bool)arg2;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1;
+ (id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg1 requiringFullOpacity:(bool)arg2;

@end
