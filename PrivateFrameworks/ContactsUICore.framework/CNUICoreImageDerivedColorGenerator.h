
@interface CNUICoreImageDerivedColorGenerator : NSObject

+ (id)ciContextWithHighPriority:(bool)arg1;
+ (unsigned long long)colorArraySize;
+ (id)colorsForImageRef:(struct CGImage { }*)arg1;
+ (id)colorsForUIImage:(id)arg1;
+ (id)defaultGrayColors;
+ (void)fetchColorsForImage:(id)arg1 ciContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (id)scheduler;
+ (id)tintedUIColorsFromUIColors:(id)arg1 isLight:(bool)arg2;

@end
