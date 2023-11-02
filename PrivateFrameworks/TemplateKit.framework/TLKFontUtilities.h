
@interface TLKFontUtilities : NSObject

+ (id)attributedStringForFormattedText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 font:(id)arg5 isButton:(bool)arg6 scale:(double)arg7 isDark:(bool)arg8;
+ (id)attributedStringForRichText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 coloredRanges:(id)arg5 nonColoredRanges:(id)arg6 rangesForNonTemplateImageAttachments:(id)arg7 rangesForTemplateImageAttachments:(id)arg8 font:(id)arg9 isButton:(bool)arg10 scale:(double)arg11 isDark:(bool)arg12;
+ (id)attributedStringForRichText:(id)arg1 appearance:(id)arg2 prominence:(unsigned long long)arg3 alignment:(long long)arg4 font:(id)arg5 isButton:(bool)arg6 scale:(double)arg7 isDark:(bool)arg8;
+ (id)boldBodyFont;
+ (void)cacheInlineImagesForRichText:(id)arg1 inView:(id)arg2 updateHandler:(id /* block */)arg3;
+ (id)cachedFontForKey:(id)arg1 creatorBlock:(id /* block */)arg2;
+ (id)cachedFontForMacTextStyle:(id)arg1;
+ (id)cachedFontForTextStyle:(id)arg1;
+ (id)cachedFontForTextStyle:(id)arg1 isBold:(bool)arg2 isMacStyle:(bool)arg3;
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(bool)arg2 fontWeight:(double)arg3;
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(bool)arg2 isBold:(bool)arg3;
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(bool)arg2 isBold:(bool)arg3 isMacStyle:(bool)arg4;
+ (id)cachedFontForTextStyle:(id)arg1 isShort:(bool)arg2 isBold:(bool)arg3 useCustomWeight:(bool)arg4 customFontWeight:(double)arg5 isMacStyle:(bool)arg6;
+ (id)calloutFont;
+ (id)captionFont;
+ (id)clearTextAttachmentForTextAttachment:(id)arg1;
+ (id)footnoteFont;
+ (bool)formattedTextItemIsColoredImage:(id)arg1;
+ (id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned int)arg2 isMacStyle:(bool)arg3;
+ (id)preferredFontForTextStyle:(id)arg1;
+ (id)preferredFontForTextStyle:(id)arg1 maximumContentSizeCategory:(id)arg2;
+ (id)preferredFontWithTextStyle:(id)arg1 isShort:(bool)arg2 isBold:(bool)arg3;
+ (id)preferredFontWithTextStyle:(id)arg1 isShort:(bool)arg2 isBold:(bool)arg3 useCustomWeight:(bool)arg4 customFontWeight:(double)arg5 isMonoSpaced:(bool)arg6 isMacStyle:(bool)arg7;
+ (id)preferredMonospacedFontForTextStyle:(id)arg1;
+ (id)shortBodyFont;
+ (id)shortFootnoteFont;
+ (id)shortSubheadBoldFont;
+ (id)shortSubheadFont;
+ (id)subheadBoldFont;
+ (id)subheadFont;
+ (id)textAttachmentForImage:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cornerRoundingStyle:(unsigned long long)arg3 appearance:(id)arg4;
+ (id)thinFontOfSize:(double)arg1 grade:(unsigned long long)arg2;
+ (id)updateAttributedStringUnderlineStyle:(id)arg1 isUnderlineVisible:(bool)arg2;

@end
