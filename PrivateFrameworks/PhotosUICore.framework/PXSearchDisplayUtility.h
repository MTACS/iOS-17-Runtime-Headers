
@interface PXSearchDisplayUtility : NSObject

+ (bool)attributedStringFontNeedsUpdate:(id)arg1 currentFont:(id)arg2;
+ (double)automaticRowHeight;
+ (id)defaultStringAttributes;
+ (id)displayStringFromResultCount:(unsigned long long)arg1;
+ (id)highlightedAttributedStringForString:(id)arg1 highlightedSubstring:(id)arg2 matchedColor:(id)arg3 remainingColor:(id)arg4;
+ (bool)layoutDirectionIsRTL;
+ (id)listStringJoiningSearchTerms:(id)arg1;
+ (id)localizedListStringFromSearchTokenNames:(id)arg1 searchText:(id)arg2 includeQuotationDelimitersForSearchText:(bool)arg3;
+ (bool)shouldUseAccessibilityLayout;
+ (id)wordEmbeddingPathColor;
+ (id)wordEmbeddingTextColor;

@end
