
@interface NSMutableAttributedString : NSAttributedString

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)_addAttributesIfNotPresentMergingInlinePresentationIntents:(id)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_formatInflectionAlternative:(id)arg1 withReplacements:(id)arg2;
- (void)_inflectWithReplacements:(id)arg1 concepts:(id)arg2 preflight:(bool)arg3;
- (Class)_intentResolver;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)addAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAttributesWeakly:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)appendAttributedString:(id)arg1;
- (void)appendLocalizedFormat:(id)arg1;
- (void)beginEditing;
- (Class)classForCoder;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)endEditing;
- (void)enumerateInflectableBlocksInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)mutableString;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/Frameworks/ClockKit.framework/ClockKit

- (void)addAttributesPreservingOriginals:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)cnui_appendTaglineString:(id)arg1;
- (void)cnui_appendTaglineString:(id)arg1 uppercased:(bool)arg2;
- (void)cnui_appendTaglineString:(id)arg1 withFont:(id)arg2;
- (void)cnui_appendTaglineString:(id)arg1 withFont:(id)arg2 uppercased:(bool)arg3;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (void)mf_addAttribute:(id)arg1 value:(id)arg2;
- (void)mf_removeAttribute:(id)arg1;
- (void)mf_setString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence

- (void)cr_appendStorage:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)cr_appendString:(id)arg1;
- (id)cr_emptyCopy;
- (void)cr_insertStorage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)cr_mergeAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withStorage:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)cr_removeObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)cr_replaceStorageInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withStorage:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)cr_storageFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore

- (void)dd_appendAttributedString:(id)arg1;
- (void)dd_chopResults;
- (void)dd_offsetResultsBy:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (void)dd_appendUrl:(id)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 backedAttributes:(id)arg4;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(id /* block */)arg2 context:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (void)dd_resetResults:(bool)arg1;
- (bool)dd_urlifyClientRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 index:(unsigned long long)arg2 context:(id)arg3;
- (bool)dd_urlifyResult:(id)arg1 withBlock:(id /* block */)arg2 referenceDate:(id)arg3 context:(id)arg4;

// Image: /System/Library/PrivateFrameworks/DocumentManagerExecutables.framework/DocumentManagerExecutables

- (void)appendUnicode:(id)arg1;
- (void)insertUnicode:(id)arg1 at:(long long)arg2;
- (void)wrapInDirectionalIsolation:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI

- (struct CGSize { double x1; double x2; })scaleFontAndKerningToFitSize:(struct CGSize { double x1; double x2; })arg1 minimumFontSize:(double)arg2 minimumKerning:(double)arg3 stillDidntFit:(bool*)arg4;
- (double)scaleFontSizeByAmount:(double)arg1 minimumFontSize:(double)arg2;
- (double)scaleNumericAttribute:(id)arg1 byAmount:(double)arg2;
- (void)scaleToFitWidth:(double)arg1;

// Image: /System/Library/PrivateFrameworks/HeadphoneConfigs.framework/HeadphoneConfigs

- (bool)setAsLink:(id)arg1 linkURL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

+ (id)wd_stringWithString:(id)arg1 highlightingStrings:(id)arg2 baseColor:(id)arg3 baseFont:(id)arg4 highlightingBaseColor:(id)arg5 highlightColor:(id)arg6 highlightFont:(id)arg7;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_attributedStringForText:(id)arg1 style:(id)arg2 color:(id)arg3 boldText:(id)arg4;
+ (id)hk_initWithString:(id)arg1 font:(id)arg2 hyphenationFactor:(double)arg3;

// Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI

+ (id)hrui_attributedStringForText:(id)arg1 style:(id)arg2 color:(id)arg3 boldText:(id)arg4;
+ (id)hrui_bulletedString:(id)arg1 textStyle:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

- (void)removeCharactersWithAttribute:(id)arg1;
- (void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3;
- (void)replaceNewlinesWithSpaces;
- (void)trimWhitespace;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

- (void)ic_appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_appendString:(id)arg1;
- (void)ic_replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_addForegroundColorInRangesWhereNoColorAlreadyExists:(id)arg1;
- (void)ic_addTextBlocks:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)ic_containsTextAttachment:(id)arg1;
- (void)ic_convertParagraphStyleToBodyInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)ic_setParagraphStyleForWritingDirection:(long long)arg1 andAlignment:(bool)arg2;
- (void)icaxApplyLowerPitchTokenToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)pk_addLinkURL:(id)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withColor:(id)arg3 isUnderlined:(bool)arg4;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_replaceFontWithFontDescriptor:(id)arg1 keepingSymbolicTraits:(unsigned int)arg2;
- (void)px_replaceOccurrencesOfString:(id)arg1 withTextAttachmentWithImage:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

- (void)ic_appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)ic_replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)rem_addHashtag:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)rem_addParagraphNamedStyle:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)rem_removeHashtagInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)rem_removeParagraphNamedStyleFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)rem_replaceTTREMHashtag:(id)arg1 withTTREMHashtag:(id)arg2;
- (void)rem_setFontHint:(unsigned long long)arg1 isOn:(bool)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)rem_setUnderline:(bool)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (void)safari_replaceCharactersWithStringBindings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

- (bool)safari_replaceOccurrenceOfString:(id)arg1 withString:(id)arg2 link:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)attributedStringByTrimmingEmptySpaceEdges;
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2;
- (void)scrcAppendFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

- (void)scrAttributedStringTrimTrailingNewlines;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (void)sxaxApplyLowerPitchTokenToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandServices.framework/SpeechRecognitionCommandServices

- (void)adjustCapsAndSpacingUsingLeadingText:(id)arg1 localeIdentifier:(id)arg2 spellingGuessesBlock:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (void)tv_addLanguageAwareness:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit

- (void)tv_addLanguageAwareness:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore

- (void)tf_addLanguageAwareness:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

- (bool)_attributeFixingInProgress;
- (void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)_fixGlyphInfo:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setAttributeFixingInProgress:(bool)arg1;
- (bool)_shouldSetOriginalFontAttribute;
- (void)convertBidiControlCharactersToWritingDirection;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1;
- (void)convertWritingDirectionToBidiControlCharacters;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1;
- (void)fixAttachmentAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixAttributesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixFontAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixGlyphInfoAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)fixParagraphStyleAttributeInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3;
- (bool)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4;
- (void)setAlignment:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setBaseWritingDirection:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)subscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)superscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_ui_restoreOriginalFontAttributes;

// Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore

- (void)vk_appendAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)vk_appendString:(id)arg1;
- (void)vk_replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withAttributedSubstring:(id)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

// Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices

- (void)appendString:(id)arg1 withAttributes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebPrivacy.framework/WebPrivacy

- (void)_wp_removeTrackingInformationFromURLs;
- (void)_wp_removeTrackingInformationFromURLsInPlace:(id /* block */)arg1;

@end
