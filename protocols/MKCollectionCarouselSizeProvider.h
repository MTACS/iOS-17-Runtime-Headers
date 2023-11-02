
@protocol MKCollectionCarouselSizeProvider

@required

+ (double)horizontalLayoutHeightInContext:(long long)arg1 includeExploreGuidesHeight:(bool)arg2 isSingleCollection:(bool)arg3;
+ (double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)arg1 maxWidth:(double)arg2 usingTraitEnvironment:(id <UITraitEnvironment>)arg3 inContext:(long long)arg4;

@end
