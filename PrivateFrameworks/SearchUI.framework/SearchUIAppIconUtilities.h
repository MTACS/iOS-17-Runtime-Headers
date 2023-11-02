
@interface SearchUIAppIconUtilities : NSObject

+ (struct CGSize { double x1; double x2; })appIconItemSize;
+ (double)distanceToTopOfAppIconsForMultiResultCell;
+ (double)idealHorizontalSpacingBetweenAppIcons;
+ (double)idealHorizontalSpacingBetweenAppIconsForContainerWidth:(double)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
+ (long long)numberOfAppIconsPerRow;
+ (double)preferredHorizontalPlatterInsetForAppIcons;

@end
