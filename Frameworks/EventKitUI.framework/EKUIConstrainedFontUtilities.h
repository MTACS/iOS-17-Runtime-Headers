
@interface EKUIConstrainedFontUtilities : NSObject

+ (void)clearFontCaches;
+ (id)constrainedBodyBoldTextLabelFont;
+ (id)constrainedBodyTextLabelFont;
+ (id)constrainedCaption1TextLabelFont;
+ (id)constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 addingSymbolicTraits:(unsigned int)arg3 traitCollection:(id)arg4;
+ (id)constrainedFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 traitCollection:(id)arg3;
+ (id)constrainedFontForTextStyle:(id)arg1 minimumContentSizeCategory:(id)arg2 maximumContentSizeCategory:(id)arg3 traitCollection:(id)arg4;
+ (id)constrainedFontForTextStyle:(id)arg1 minimumContentSizeCategory:(id)arg2 traitCollection:(id)arg3;
+ (void)initialize;
+ (long long)tableViewCellCappedSymbolImageScaleWithScale:(long long)arg1 traitCollection:(id)arg2;

@end
