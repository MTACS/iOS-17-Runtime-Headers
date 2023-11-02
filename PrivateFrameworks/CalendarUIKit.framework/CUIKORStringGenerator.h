
@interface CUIKORStringGenerator : NSObject

+ (id)_attributedLocationWithState:(id)arg1;
+ (id)_attributedStatusWithState:(id)arg1;
+ (id)_attributedTimeWithState:(id)arg1;
+ (id)_attributedTitleWithState:(id)arg1;
+ (id)_defaultAttributesForState:(id)arg1;
+ (double)_defaultMinimumLineHeightForState:(id)arg1;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(bool)arg1 sizeClass:(long long)arg2;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(bool)arg1 sizeClass:(long long)arg2;
+ (double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(bool)arg2 sizeClass:(long long)arg3;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(bool)arg1 sizeClass:(long long)arg2;

- (id)generateContentStringWithState:(id)arg1;
- (id)generateTravelTimeStringWithState:(id)arg1;

@end
