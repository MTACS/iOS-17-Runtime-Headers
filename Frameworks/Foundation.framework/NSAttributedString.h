
@interface NSAttributedString : NSObject <HFStringGenerator, NSCopying, NSMutableCopying, NSSecureCoding, REContentEncodable, UIItemProviderReading, UIItemProviderWriting>

@property (setter=_lp_setStringType:, nonatomic) unsigned long long _lp_stringType;
@property (nonatomic, readonly) NSString *contentEncodedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *edits;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } fullRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } ic_range;
@property (nonatomic, readonly) bool isEmptyOrTerminatedByParagraphSeparator;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } juFullRange;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSArray *sentences;
@property (readonly, copy) NSString *string;
@property (nonatomic, readonly) bool su_containsExcessiveLineHeightCharacter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSParagraphStyle *tv_currentParagraphStyle;
@property (setter=tv_setDefaultAttributes:, nonatomic, copy) NSDictionary *tv_defaultAttributes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } vk_range;
@property (nonatomic, readonly) UIFont *wa_font;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_attributedStringWithFormat:(id)arg1 attributeOptions:(unsigned long long)arg2 formattingOptions:(id)arg3 locale:(id)arg4 arguments:(char *)arg5;
+ (id)_attributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char *)arg4;
+ (id)_localizedAttributedStringWithFormat:(id)arg1;
+ (id)_localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2;
+ (void)_setAttributedDictionaryClass:(Class)arg1;
+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)localizedAttributedStringWithFormat:(id)arg1;
+ (id)localizedAttributedStringWithFormat:(id)arg1 context:(id)arg2;
+ (id)localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2;
+ (id)localizedAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)__initWithFormat:(id)arg1 attributeOptions:(unsigned long long)arg2 formattingOptions:(id)arg3 locale:(id)arg4 arguments:(char *)arg5;
- (id)__initWithFormat:(id)arg1 attributeOptions:(unsigned long long)arg2 formattingOptions:(id)arg3 locale:(id)arg4 context:(id)arg5 arguments:(char *)arg6;
- (unsigned long long)_cfTypeID;
- (id)_createAttributedSubstringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_firstValueOfAttributeWithKey:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_identicalAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_inflectedAttributedString;
- (id)_initWithFormat:(id)arg1 attributeOptions:(unsigned long long)arg2 formattingOptions:(id)arg3 locale:(id)arg4;
- (id)_initWithFormat:(id)arg1 attributeOptions:(unsigned long long)arg2 formattingOptions:(id)arg3 locale:(id)arg4 arguments:(char *)arg5;
- (id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
- (id)_initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char *)arg4;
- (void)_markIntentsResolved;
- (void)_markRequiringIntentResolution;
- (bool)_mayRequireIntentResolution;
- (bool)_willRequireIntentResolutionWhenContainingAttribute:(id)arg1 value:(id)arg2;
- (bool)_willRequireIntentResolutionWhenContainingAttributes:(id)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)attributedStringByInflectingString;
- (id)attributedStringByWeaklyAddingAttributes:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 replacingCharactersInRanges:(const struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 numberOfRanges:(long long)arg3 withString:(id)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfMarkdownFileAtURL:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char *)arg4;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 context:(id)arg4;
- (id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 context:(id)arg4 arguments:(char *)arg5;
- (id)initWithMarkdown:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (id)initWithMarkdownString:(id)arg1 options:(id)arg2 baseURL:(id)arg3 error:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributedString:(id)arg1;
- (unsigned long long)length;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)string;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

- (id)_attributedStringWithForegroundColor:(id)arg1;
- (id)_attributedStringWithOtherAttributesFromStyle:(id)arg1;

// Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation

- (void)_lp_setStringType:(unsigned long long)arg1;
- (unsigned long long)_lp_stringType;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (void)_handleFormattingError:(id)arg1 forString:(id)arg2;
+ (id)_mapkit_attributedLiveTransitStringFromAttributedDepartureString:(id)arg1 liveStatus:(long long)arg2 darkMode:(bool)arg3 symbolOverrideColor:(id)arg4;
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 darkMode:(bool)arg3;
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:(id)arg1 departure:(id)arg2 textAttributes:(id)arg3 darkMode:(bool)arg4 symbolOverrideColor:(id)arg5;
+ (id)_mapkit_attributedStringForComposedString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)_mapkit_attributedStringForComposedString:(id)arg1 defaultAttributes:(id)arg2 argumentOverrideHandler:(id /* block */)arg3;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3 error:(id*)arg4;
+ (id)_mapkit_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 defaultReplacementAttributes:(id)arg3 startTokenDelimiter:(id)arg4 endTokenDelimiter:(id)arg5 error:(id*)arg6;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 variableOverrides:(id)arg3 options:(struct { bool x1; long long x2; bool x3; bool x4; bool x5; double x6; })arg4;

- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 error:(id*)arg3;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2 startTokenDelimiter:(id)arg3 endTokenDelimiter:(id)arg4 error:(id*)arg5;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)initSwiftUIAttributedStringWithFormat:(id)arg1 options:(unsigned long long)arg2 locale:(id)arg3 arguments:(char *)arg4;
- (bool)isEmptyOrTerminatedByParagraphSeparator;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (void)_loadFromHTMLWithOptions:(id)arg1 contentLoader:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadFromHTMLWithData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadFromHTMLWithFileURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadFromHTMLWithRequest:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)loadFromHTMLWithString:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents

+ (id)asc_attributedStringWithLockupHeading:(id)arg1 compatibleWithTraitCollection:(id)arg2;
+ (id)asc_attributedStringWithLockupTextContainingSymbols:(id)arg1 compatibleWithTraitCollection:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit

+ (id)empty;

- (long long)baseWritingDirectionForCharacterAtIndex:(long long)arg1 unknownStyle:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullRange;
- (id)paragraphStyleAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)strongBaseWritingDirectionOfParagraphAtOrBeforeIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

+ (double)cal_maximumWidthForStrings:(id)arg1 attributes:(id)arg2;

- (id)cal_stringWithNormalizedSpacesForUnitTesting;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (void)ck_enumerateAllMentionAnimationIdentifiersUsingBlock:(id /* block */)arg1;
- (void)ck_textKit1_enumerateAllAutomaticConfirmedMentionsUsingBlock:(id /* block */)arg1;
- (void)ck_textKit2_enumerateAllAutomaticConfirmedMentionsUsingBlock:(id /* block */)arg1;
- (bool)containsAttribute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence

- (id)cr_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)cr_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)cr_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

- (id)containedImageFiles;
- (id)wf_contentAsStringsAndAttachments;

// Image: /System/Library/PrivateFrameworks/CoreServicesStore.framework/CoreServicesStore

- (id)cs_rangesMatchingPredicate:(id)arg1;
- (void)cs_writeToFileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;
- (void)cs_writeToFileHandle:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 supportingANSIEscapeCodes:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (id)dd_attributedStringByAppendingAttributedString:(id)arg1;
- (id)dd_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (bool)dd_isTransientAttribute:(id)arg1;

- (id)dd_contextAtLocation:(long long)arg1;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __DDQueryRange { struct __DDQueryOffset { unsigned int x_1_2_1 : 16; unsigned int x_1_2_2 : 16; unsigned int x_1_2_3 : 32; } x_2_1_1; struct __DDQueryOffset { unsigned int x_2_2_1 : 16; unsigned int x_2_2_2 : 16; unsigned int x_2_2_3 : 32; } x_2_1_2; } x2; struct { long long x_3_1_1; long long x_3_1_2; } x3; long long x4; struct __CFArray {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; void *x8; struct __CFDictionary {} *x9; long long x10; unsigned char x11; float x12; }*)dd_resultAtLocation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (id)wrappedInDirectionalIsolation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

+ (id)ec_emailAttributedStringWithString:(id)arg1 andEmailAddress:(id)arg2;

// Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit

+ (id)emptyAttributedStringOfLength_emk:(unsigned long long)arg1;

- (void)_enumerateTokenListsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock_emk:(id /* block */)arg2;
- (void)_enumerateTokenListsInReverse:(bool)arg1 handler_emk:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities

- (id)FU_uppercaseAttributedStringCurrentLocale:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)attributedStringText:(id)arg1 textColor:(id)arg2 symbol:(id)arg3 symbolColor:(id)arg4 useLargeSpacing:(bool)arg5;

- (id)initWithImage:(id)arg1 font:(id)arg2 displayScale:(double)arg3 tintColor:(id)arg4 adjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg5;
- (id)initWithLeadingImage:(id)arg1 text:(id)arg2 font:(id)arg3 displayScale:(double)arg4 imageTintColor:(id)arg5 textColor:(id)arg6 adjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg7;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_attributedStringForSpacing:(long long)arg1;
+ (id)hk_attributedStringForSpacing:(long long)arg1 nonBreaking:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
+ (id)hf_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;
+ (id)hf_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;
+ (id)hf_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;
+ (id)hf_attributedStringWithInflectableAccessoryStatus:(id)arg1 accessoryName:(id)arg2;
+ (id)hf_attributedStringWithInflectableAccessoryStatus:(id)arg1 accessoryName:(id)arg2 forcePluralAgreement:(bool)arg3;
+ (id)hf_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(bool)arg3;
+ (id)hf_loadFromHTMLWithString:(id)arg1 options:(id)arg2;
+ (id)hf_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;

- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingDefaultAttributes:(id)arg2;
- (id)dynamicStringForSize:(struct CGSize { double x1; double x2; })arg1 attributes:(id)arg2;
- (id)hf_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;
- (id)hf_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;
- (id)hf_attributedStringScaledByFactor:(double)arg1;
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1;
- (id)hf_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double)hf_scaleFactorForBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (id)hf_scaledAttributedStringWithBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (bool)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_attributedLinkStringForAttributedString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3;
+ (id)hu_attributedLinkStringForString:(id)arg1 linkString:(id)arg2 linkURL:(id)arg3 attributes:(id)arg4 additionalLinkAttributes:(id)arg5;
+ (id)hu_attributedString:(id)arg1 withAppendedLinkString:(id)arg2 linkURL:(id)arg3;
+ (id)hu_attributedStringForString:(id)arg1 withAppendedString:(id)arg2 asURL:(id)arg3 withAttributes:(id)arg4;
+ (id)hu_attributedStringWithSystemImageNamed:(id)arg1 title:(id)arg2 isRTL:(bool)arg3;
+ (id)hu_safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;

- (id)hu_attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;
- (id)hu_attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;
- (id)hu_attributedStringScaledByFactor:(double)arg1;
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1;
- (id)hu_attributedStringWithDefaultAttributes:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (double)hu_scaleFactorForBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;
- (id)hu_scaledAttributedStringWithBoundingSize:(struct CGSize { double x1; double x2; })arg1 minimumScaleFactor:(double)arg2 maximumNumberOfLines:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (bool)attribute:(id)arg1 existsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)trimmedString;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (void)__im_diffPartIndexesInEditedMessage:(id)arg1 previousMessage:(id)arg2 editedPartIndexes:(out id*)arg3 removedPartIndexes:(out id*)arg4;

- (id)__im_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)__im_containsAttributedValue:(id)arg1;
- (unsigned long long)__im_countMessageParts;
- (id)__im_dataDetectedURLsFromAttributes;
- (long long)__im_insertionIndexForMessagePartBody:(id)arg1;
- (id)__im_messagePartIndexToRangeMap;
- (id)__im_messagePartIndexes;
- (id)__im_messagePartMatchingPartIndex:(long long)arg1;
- (id)__im_messagePartMatchingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)__im_messageTextByRemovingMessagePartIndex:(long long)arg1;
- (id)__im_messageTextByReplacingMessagePartIndex:(long long)arg1 withNewPartText:(id)arg2;
- (id)__im_partDescriptorWithIndex:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 totalPartCount:(unsigned long long)arg3;
- (id)__im_rangeToMessagePartIndexMap;
- (void)__im_visitMessageParts:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/JetUI.framework/JetUI

+ (id)juEmpty;

- (long long)juBaseWritingDirectionForCharacterAtIndex:(long long)arg1 unknownStyle:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })juFullRange;
- (id)juParagraphStyleAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)juStrongBaseWritingDirectionOfParagraphAtOrBeforeIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_attributedStringByUpdatingTextStyleFontsToPreferredTextStyleFonts;
- (bool)MPU_hasUniformFont;
- (id)MPU_tallestFontFromAttributes;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)NTKCountdownToDate:(id)arg1 useShort:(bool)arg2 withDesignatorFont:(id)arg3;
+ (id)NTKDesignatorAttributedTimeWithDate:(id)arg1;
+ (id)NTKHyphenatableString:(id)arg1;
+ (id)NTKHyphenatableString:(id)arg1 factor:(float)arg2;
+ (id)NTKReplaceTimeDesignatorAttributesFrom:(id)arg1 withDesignatorFont:(id)arg2;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorAttributes:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 options:(unsigned long long)arg3;
+ (id)NTKTimeWithDate:(id)arg1 andDesignatorFont:(id)arg2 timeZone:(id)arg3 options:(unsigned long long)arg4;
+ (id)_attributedStringFromAttributesTable:(id)arg1 defaultAttributes:(id)arg2 format:(id)arg3 arguments:(char *)arg4;
+ (id)ntk_attributedStringFromAttributesTable:(id)arg1 defaultAttributes:(id)arg2 markdownFormat:(id)arg3;
+ (id)ntk_attributedStringFromAttributesTable:(id)arg1 defaultAttributes:(id)arg2 markdownFormat:(id)arg3 arguments:(char *)arg4;
+ (id)ntk_attributedStringFromAttributesTable:(id)arg1 markdownFormat:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (void)enumerateAttachmentsInData:(id)arg1 withBlock:(id /* block */)arg2;
+ (id)ic_attributedStringWithArchive:(const void*)arg1 dataPersister:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4 shouldCreateNewAttachments:(bool)arg5 error:(id*)arg6;
+ (id)ic_attributedStringWithArchive:(const void*)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateNewAttachments:(bool)arg4 error:(id*)arg5;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 error:(id*)arg4;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 createNewAttachmentsInNote:(id)arg3 forParentAttachment:(id)arg4 error:(id*)arg5;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 parentAttachment:(id)arg4 shouldCreateAttachments:(bool)arg5 error:(id*)arg6;
+ (id)ic_attributedStringWithData:(id)arg1 dataPersister:(id)arg2 note:(id)arg3 shouldCreateAttachments:(bool)arg4 error:(id*)arg5;

- (id)editAtIndex:(unsigned long long)arg1;
- (id)edits;
- (id)editsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)enumerateEditsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)ic_approximateAttachmentsSizeIncludingPreviews:(bool)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 flattenUnsupportedInlineAttachmentsOnly:(bool)arg2 updateRangeValueToObjectMapBlock:(id /* block */)arg3 replacementAttributedStringBlock:(id /* block */)arg4;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 flattenUnsupportedInlineattachmentsOnly:(bool)arg2;
- (id)ic_attributedStringByFlatteningUnsupportedInlineAttachmentsWithContext:(id)arg1;
- (void)ic_enumerateAbstractAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)ic_enumerateAttachmentsInContext:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)ic_enumerateInlineAttachmentsInContext:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (bool)ic_isCopyableSize;
- (bool)ic_saveToArchive:(void*)arg1 flags:(unsigned long long)arg2 dataPersister:(id)arg3 managedObjectContext:(id)arg4 error:(id*)arg5;
- (id)ic_searchableStringInContext:(id)arg1;
- (id)ic_serializeWithFlags:(unsigned long long)arg1 dataPersister:(id)arg2 managedObjectContext:(id)arg3 error:(id*)arg4;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_emptyAttributedString;

- (id)ic_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ic_componentRangesSeparatedByPredicate:(id /* block */)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)ic_containsAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_enclosingRangeContainingCharactersInSet:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_enumerateAttributesInClampedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)ic_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)ic_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_range;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeByTrimmingCharactersInSet:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_attributedStringWithString:(id)arg1 font:(id)arg2;
+ (id)ic_blockQuoteMenuItemAttributedString;
+ (id)icaxAttributedStringForSpeakingStringInLowerPitch:(id)arg1;

- (id)_ic_attributedStringByHighlightingRegexMatches:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;
- (id)ic_attributedStringByCopyingInlineAttachmentsAndUpdatingChangeCountWithContext:(id)arg1;
- (id)ic_attributedStringByFlatteningInlineAttachmentsWithContext:(id)arg1 formatter:(id /* block */)arg2;
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(id)arg2;
- (id)ic_attributedStringByHighlightingRegex:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;
- (id)ic_attributedStringByHighlightingRegexFinderMatches:(id)arg1 withHighlightColor:(id)arg2;
- (id)ic_attributedStringByHighlightingRegexFinderMatches:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;
- (id)ic_attributesByHighlightingAttributes:(id)arg1 withHighlightColor:(id)arg2 attributeName:(id)arg3;
- (bool)ic_containsBlockAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)ic_itemProviderDataForUTI:(id)arg1;
- (id)ic_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)ic_numRowsForTextTable:(id)arg1 outNumColumns:(out unsigned long long*)arg2;
- (unsigned long long)ic_numberOfTables;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeForAttachment:(id)arg1 withTextAttachment:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeForBaseAttachment:(id)arg1 withTextAttachment:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeForInlineAttachment:(id)arg1 withTextAttachment:(id*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ic_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (id)ic_stringByTrimmingLeadingTrailingWhitespace;
- (id)ic_stringWithoutAttachments;
- (struct { unsigned long long x1; unsigned long long x2; })ic_tableSizeForTextTable:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)ic_textTablesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)ic_writingDirectionAtIndex:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

+ (id)pkui_attriutedStringWithString:(id)arg1 font:(id)arg2 paragraphStyle:(id)arg3;

- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(unsigned long long)arg2;
- (struct CGSize { double x1; double x2; })pkui_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 withNumberOfLines:(unsigned long long)arg2 forceWordWrap:(bool)arg3;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3;
+ (id)px_attributedStringWithHTMLString:(id)arg1 defaultAttributes:(id)arg2 emphasizedAttributes:(id)arg3 italicizedAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForCommentWithCommenterFullName:(id)arg1 text:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInboxCoalescedCommentsFromUser:(bool)arg1 otherPeopleFullNames:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInboxCoalescedCommentsWithCommenterCount:(long long)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForInboxCoalescedLikesAndCommentsFromUser:(bool)arg1 otherPeopleFullNames:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForInboxCoalescedLikesAndCommentsWithCommenterCount:(long long)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 sharedAlbumName:(id)arg2 accepted:(bool)arg3 defaultTextAttributes:(id)arg4 posterTextAttributes:(id)arg5 albumTextAttributes:(id)arg6;
+ (id)px_localizedAttributedStringForInvitationResponseReceivedWithInviteeFullName:(id)arg1 streamName:(id)arg2 accepted:(bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5 streamNameAttributes:(id)arg6;
+ (id)px_localizedAttributedStringForLikesFromUser:(bool)arg1 orPersonFullName:(id)arg2 photoCount:(long long)arg3 videoCount:(long long)arg4 streamName:(id)arg5 defaultTextAttributes:(id)arg6 emphasizedTextAttributes:(id)arg7 italicizedTextAttributes:(id)arg8;
+ (id)px_localizedAttributedStringForLikesFromUser:(bool)arg1 otherPeopleFullNames:(id)arg2 isVideo:(bool)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForLikesWithLikerCount:(long long)arg1 isVideo:(bool)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForPostAttributionOfAssetWithDisplayType:(long long)arg1 postedByUserOrSubjectWithFullName:(id)arg2 atDate:(id)arg3 nameAttributes:(id)arg4 dateAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForPostWithSubjectFullName:(id)arg1 photoCount:(long long)arg2 videoCount:(long long)arg3 defaultTextAttributes:(id)arg4 emphasizedTextAttributes:(id)arg5;
+ (id)px_localizedAttributedStringForUserCommentWithText:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserCreatingSharedAlbumWithName:(id)arg1 defaultTextAttributes:(id)arg2 posterTextAttributes:(id)arg3 albumTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserCreatingStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserInvitedToStreamWithName:(id)arg1 inviterName:(id)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserJoiningSharedAlbumWithName:(id)arg1 defaultTextAttributes:(id)arg2 posterTextAttributes:(id)arg3 albumTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserJoiningStreamWithName:(id)arg1 defaultTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 defaultTextAttributes:(id)arg2 subjectName:(id)arg3;
+ (id)px_localizedAttributedStringForUserPostWithCountsSet:(id)arg1 subjectName:(id)arg2 defaultTextAttributes:(id)arg3 posterTextAttributes:(id)arg4;
+ (id)px_localizedAttributedStringForUserPostWithPhotoCount:(long long)arg1 videoCount:(long long)arg2 defaultTextAttributes:(id)arg3 emphasizedTextAttributes:(id)arg4;
+ (id)px_stringWithFormat:(id)arg1 defaultAttributes:(id)arg2 arguments:(id)arg3;
+ (id)px_thumbnailVideoDurationAttributedString:(id)arg1 isRTL:(bool)arg2;

- (id)px_attributedStringByAddingAttributes:(id)arg1;
- (id)px_attributedStringByApplyingCapitalization:(long long)arg1;
- (id)px_attributedStringByDeletingCharactersInSet:(id)arg1;
- (id)px_attributedStringWithParagraphLineBreakMode:(long long)arg1;
- (id)px_bulletPrefixAttributedStringWithBulletAttributes:(id)arg1 isLeftToRight:(bool)arg2;
- (bool)px_containsAttribute:(id)arg1;
- (bool)px_rangeExists:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })px_sizeWithProposedWidth:(double)arg1 maximumLines:(long long)arg2 drawingOptions:(long long)arg3;
- (id)px_stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI

+ (id)attributedStringWithTemplateString:(id)arg1 baseAttributes:(id)arg2 snippetAttributes:(id)arg3 snippets:(id)arg4;
+ (id)empty;
+ (id)safeAttributedStringWithHTML:(id)arg1 attributes:(id)arg2;

- (id)MTMPU_attributedStringByUpdatingTextStyleFontsToPreferredTextStyleFonts;
- (bool)MTMPU_hasUniformFont;
- (id)MTMPU_tallestFontFromAttributes;
- (id)attributedStringByTrimmingCharactersInCharacterSet:(id)arg1;
- (id)attributedStringByTrimmingWhitespaceNewlinesAndObjectReplacementCharacters;
- (id)attributedStringWithDefaultLineSpacing;
- (long long)baseWritingDirectionForCharacterAtIndex:(long long)arg1 unknownStyle:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullRange;
- (long long)strongBaseWritingDirectionOfParagraphAtOrBeforeIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (id)contentEncodedString;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (void)rem_enumerateHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (unsigned long long)rem_fontHintAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)rem_hashtagAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)rem_hashtagAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 wantsLongestEffectiveRange:(bool)arg3 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)rem_hashtagAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)rem_isUnderlinedAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)rem_paragraphStyleAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_attributedStringWithLinkText:(id)arg1 linkUrl:(id)arg2 extraTitle:(id)arg3;

- (id)safari_attributedStringByAppendingAttributedString:(id)arg1;
- (id)safari_attributedStringByReplacingAttributeName:(id)arg1 withAttributes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)_scrcStringWithFormat:(id)arg1 args:(char *)arg2;
+ (id)scrcPauseString;
+ (id)scrcSpaceString;
+ (id)scrcString;
+ (id)scrcStringWithDollarCode:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithFormat:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1;
+ (id)scrcStringWithLiteralString:(id)arg1 treePosition:(id)arg2;
+ (id)scrcStringWithString:(id)arg1;
+ (id)scrcStringWithString:(id)arg1 treePosition:(id)arg2;

- (bool)_scrcHasPauseCommaAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_scrcRangeOfFormatSpecifierWithIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_scrcRangeOfVanillaFormatSpecifier;
- (bool)scrcContainsPause;
- (id)scrcIndexSetForAttributes:(id)arg1 limit:(long long)arg2;
- (id)scrcSplitBasedOnAttribute:(id)arg1 limit:(long long)arg2;
- (id)scrcSplitBasedOnMultipleAttributesWithLimit:(long long)arg1;
- (id)scrcStringByAddingAttribute:(id)arg1 value:(id)arg2;
- (id)scrcStringByAppendingAttributedString:(id)arg1;
- (id)scrcStringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)getRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 ofAttribute:(id)arg2;
- (bool)getRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 ofAttribute:(id)arg2 withValue:(id)arg3;
- (id)scrAttributedStringByTrimmingTrailingNewlines;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

+ (id)sxaxAttributedStringForSpeakingStringInLowerPitch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl

- (id)stringByReplacingNewLinesWithSymbols;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

- (bool)su_containsExcessiveLineHeightCharacter;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })su_languageAwareOutsetsAtScale:(double)arg1;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_carriageReturnAttributedString;

- (id)tsu_RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)tsu_RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)tsu_nextTableStringFromIndex:(unsigned long long)arg1 tableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)tsu_numberOfTables;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tsu_rangeofNextTableFromIndex:(unsigned long long)arg1;
- (id)tsu_stringByFixingBrokenSurrogatePairs;
- (id)tsu_stringWithoutAttachments;
- (id)tsu_textTablesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;
- (id)tv_currentParagraphStyle;
- (id)tv_defaultAttributes;
- (void)tv_setDefaultAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithWidth:(double)arg1 lines:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

- (id)_UIKBStringWideAttributeValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (id)lt_attributedStringByJoiningComponents:(id)arg1 withAttributedString:(id)arg2;
+ (id)lt_attributedStringByJoiningComponents:(id)arg1 withString:(id)arg2;

- (id)_ltAttributedStringByTrimmingCharactersInSet:(id)arg1;
- (id)paragraphs;
- (id)sentences;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)_allowedOptionClasses;
+ (id)_allowedTokensClasses;
+ (id)_documentTypeForFileType:(id)arg1;
+ (bool)_isAttributedStringAgent;
+ (id)_sharedAttachmentString;
+ (id)allowedSecureCodingClasses;
+ (id)attributedStringWithAttachment:(id)arg1;
+ (void)readFromData:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)readFromURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;

- (id)RTFDFileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFDFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (id)RTFFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (bool)_atEndOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atEndOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)_atStartOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_documentFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 document:(id)arg2 documentAttributes:(id)arg3 subresources:(id*)arg4;
- (id)_htmlDocumentFragmentString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 subresources:(id*)arg3;
- (id)_initWithHTMLData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)_initWithRTFSelector:(SEL)arg1 argument:(id)arg2 documentAttributes:(id*)arg3;
- (id)_initWithURLFunnel:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)_isStringDrawingTextStorage;
- (unsigned long long)_lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 lineBreakStrategy:(unsigned long long)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfTextTableRow:(id)arg1 atIndex:(unsigned long long)arg2 completeRow:(bool*)arg3;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 scaledByScaleFactor:(double)arg2;
- (id)_ui_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withTrackingAdjustment:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectWithSize:(struct CGSize { double x1; double x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (bool)containsAttachments;
- (bool)containsAttachmentsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)dataFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)defaultLanguage;
- (id)docFormatFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)drawAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2;
- (void)drawWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(long long)arg2 context:(id)arg3;
- (id)fileWrapperFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 documentAttributes:(id)arg2 error:(id*)arg3;
- (id)fontAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)hasColorGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithAttachment:(id)arg1 attributes:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithDocFormat:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (id)initWithHTML:(id)arg1 baseURL:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithHTML:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithHTML:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (id)initWithPath:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTF:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFD:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithRTFDFileWrapper:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 documentAttributes:(id*)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (long long)itemNumberInTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextBlock:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextList:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfTextTable:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)rulerAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 userInfo:(id)arg3 error:(id*)arg4;
+ (id)_objectWithItemProviderFileURL:(id)arg1 typeIdentifier:(id)arg2 isInPlace:(bool)arg3 error:(id*)arg4;
+ (id)_objectWithRTFDAtURL:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg1;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
+ (id)_systemTextSearchTextAttributesForStyle:(unsigned long long)arg1;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)writableTypeIdentifiersForItemProvider;

- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;
- (id)_ui_attributedStringAdjustedToTraitCollection:(id)arg1;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_glyphImageViewsScale:(double)arg1 outImageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 outLineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 outBaselineOffset:(double*)arg4;
- (long long)_ui_resolvedTextAlignment;
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1;
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:(id)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:(long long)arg1;
- (id)_ui_rtfDataError:(id*)arg1;
- (id)_ui_rtfdFileWrapperError:(id*)arg1;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI

+ (id)attributedStringWithTextElement:(id)arg1 baseFont:(id)arg2;
+ (id)empty;

- (long long)baseWritingDirectionForCharacterAtIndex:(long long)arg1 unknownStyle:(bool*)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })fullRange;
- (id)paragraphStyleAtIndex:(long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (long long)strongBaseWritingDirectionOfParagraphAtOrBeforeIndex:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (id)vk_attributedStringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;
- (id)vk_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)vk_attributedSubstringFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)vk_attributedSubstringFromVKRange:(id)arg1;
- (void)vk_enumerateClampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (void)vk_enumerateUnclampedAttribute:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })vk_range;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

+ (id)attributedStringWithFormatAndAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (id)wa_font;

// Image: /System/Library/PrivateFrameworks/WebPrivacy.framework/WebPrivacy

- (void)_wp_removeTrackingInformationFromURLs:(id /* block */)arg1;
- (id)_wp_stringByRemovingTrackingInformationFromURLs;

// Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI

+ (id)attributedStringWithFormat:(id)arg1 attributes:(id)arg2 links:(id)arg3;
+ (id)attributesForIndex:(long long)arg1 baseAttributes:(id)arg2;
+ (id)spaceArrowAttributedStringWithBaseAttributes:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables

+ (id)tsd_attributedStringWithString:(id)arg1 baseAttributes:(id)arg2 secondaryAttributes:(id)arg3 delimiter:(id)arg4;

- (bool)tsd_stringPreservesTextLabelTextColor;

@end
