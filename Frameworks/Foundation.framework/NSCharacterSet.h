
@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly, copy) NSData *bitmapRepresentation;
@property (readonly, copy) NSCharacterSet *invertedSet;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)URLFragmentAllowedCharacterSet;
+ (id)URLHostAllowedCharacterSet;
+ (id)URLPasswordAllowedCharacterSet;
+ (id)URLPathAllowedCharacterSet;
+ (id)URLQueryAllowedCharacterSet;
+ (id)URLUserAllowedCharacterSet;
+ (id)alphanumericCharacterSet;
+ (id)capitalizedLetterCharacterSet;
+ (id)characterSetWithBitmapRepresentation:(id)arg1;
+ (id)characterSetWithCharactersInString:(id)arg1;
+ (id)characterSetWithContentsOfFile:(id)arg1;
+ (id)characterSetWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)controlCharacterSet;
+ (id)decimalDigitCharacterSet;
+ (id)decomposableCharacterSet;
+ (id)illegalCharacterSet;
+ (void)initialize;
+ (id)letterCharacterSet;
+ (id)lowercaseLetterCharacterSet;
+ (id)newlineCharacterSet;
+ (id)nonBaseCharacterSet;
+ (id)punctuationCharacterSet;
+ (bool)supportsSecureCoding;
+ (id)symbolCharacterSet;
+ (id)uppercaseLetterCharacterSet;
+ (id)whitespaceAndNewlineCharacterSet;
+ (id)whitespaceCharacterSet;

- (unsigned long long)_cfTypeID;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)_retainedBitmapRepresentation;
- (id)bitmapRepresentation;
- (bool)characterIsMember:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMemberInPlane:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)invertedSet;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isMutable;
- (bool)isSupersetOfSet:(id)arg1;
- (bool)longCharacterIsMember:(unsigned int)arg1;
- (void)makeImmutable;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_equalCharacterSet;
+ (id)hk_forwardSlashCharacterSet;
+ (id)hk_percentCharacterSet;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)textAttachmentCharacterSet;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

+ (id)ic_emojiCharacterSet;

// Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI

+ (id)textAttachmentCharacterSet;

// Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting

+ (id)ch_arabicCombiningDiacriticSet;
+ (id)ch_arabicDiacriticSet;
+ (id)ch_arabicDigitSet;
+ (id)ch_arabicTanweenDiacriticSet;
+ (id)ch_basicAlphabeticCharacterSet;
+ (id)ch_basicAlphanumericCharacterSet;
+ (id)ch_basicArabicCharacterSet;
+ (id)ch_basicClosingParenthesesSet;
+ (id)ch_basicCyrillicCharacterSet;
+ (id)ch_basicOpeningParenthesesSet;
+ (id)ch_emptyCharacterSet;
+ (id)ch_englishCharacterSet;
+ (id)ch_hiraganaCharacterSet;
+ (id)ch_kanjiCharacterSet;
+ (id)ch_kanjiCompCharacterSet;
+ (id)ch_katakanaCharacterSet;
+ (id)ch_latinCharacterSet;
+ (id)ch_neutralQuotationMarkSet;
+ (id)ch_possibleDescenderCharSet;
+ (id)ch_russianOnlyCharacterSet;
+ (id)ch_sentenceEndPunctuationCharacterSet;
+ (id)ch_sentenceStartPunctuationCharacterSet;
+ (id)ch_thaiExtraSpaceAfterSymbolsSet;
+ (id)ch_thaiMathSymbolsNeedingSpaceSet;

// Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

+ (id)ec_ignorableCharacterSet;
+ (id)ec_prefixDelimiterCharacterSet;
+ (id)ec_whitespaceNewlineAndTagCharacterSet;
+ (id)ec_zeroWidthCharacterSet;

// Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (id)ef_asciiAlphaNumericCharacterSet;
+ (id)ef_rfc6376WhitespaceCharacterSet;
+ (id)ef_unsafeAddressLocalPartCharacterSet;
+ (id)ef_unsafeDomainNameCharacterSet;

// Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation

+ (id)_emojiCharacterSet;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)invalidCharactersForFileTransferName;

// Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner

+ (id)vietnameseCharacterSet;

// Image: /System/Library/PrivateFrameworks/NotesSupport.framework/NotesSupport

+ (id)ic_animatableMentionCharacterSet;
+ (id)ic_attachmentCharacterSet;
+ (id)ic_emojiCharacterSet;
+ (id)ic_hashtagAllowedCharacterSet;
+ (id)ic_hashtagTokenizingCharacterSet;
+ (id)ic_illegalFilenameCharacterSet;
+ (id)ic_uriIdentifierAllowedCharacterSet;

// Image: /System/Library/PrivateFrameworks/PhoneNumbers.framework/PhoneNumbers

+ (id)pn_verticalServiceCharacterSet;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_breakableWhitespaceCharacterSet;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)URLAllowedCharacterSet;

// Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit

+ (id)emojis;
+ (id)hashtagTokenAllowedCharacters;
+ (id)makeFormatCharacters;
+ (void)subtractOtherPunctuationCharactersFrom:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_asciiDigitCharacterSet;
+ (id)safari_lockRelatedEmojiCharacterSet;
+ (id)safari_obscuredPasswordCharacterSets;
+ (id)safari_whitespaceAndNewlineCharacterSet;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)emojiCharacterSet;
+ (id)passwordBulletCharacterSet;
+ (id)whitespaceNewlineAndSpecialCharacterSet;
+ (id)wordBreakCharacterSet;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)allQuotesCharacterSetExcludingLeft;
+ (id)allQuotesCharacterSetExcludingRight;
+ (id)breakingSpaceCharacterSet;
+ (id)invisibleCharacterSet;
+ (id)lineBreakingCharacterSet;
+ (id)normalQuotesCharacterSet;
+ (id)postSmartSet;
+ (id)preSmartSet;
+ (id)smartDoubleQuotesCharacterSet;
+ (id)smartQuotesCharacterSet;
+ (id)smartSingleQuotesCharacterSet;
+ (id)spaceCharacterSet;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)phoneNumberSeparatorCharacterSet;
+ (id)phoneNumberSeparatorCharacterSet;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (id)pinyinInputCharacterSet;
+ (id)punctuationAndWhitespaceCharacterSet;

// Image: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition

+ (id)customJapaneseKoreanAsUnknownScriptCharacterSet;
+ (id)customUnknownScriptCharacterSet;

// Image: /System/Library/PrivateFrameworks/TypistFramework.framework/TypistFramework

+ (id)arabicCharactersWithUniqueWritingRule;
+ (id)arabicGenericCharacters;
+ (id)arabicIsolatedCharacters;
+ (id)arabicPresentationFormCharacters;
+ (id)cyrillicCharacters;
+ (id)cyrillicCharactersWithUniqueWritingRule;
+ (id)hangulConsonantVariants;
+ (id)hangulHorizontalVowels;
+ (id)hangulLeadingConsonants;
+ (id)hangulMixedVowels;
+ (id)hangulTrailingConsonants;
+ (id)hangulVerticalVowels;
+ (id)numberCombiningCharacterSet;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables

+ (id)tsce_characterSetRequiringSingleQuotes;
+ (id)tsce_dollarSignCharacterSet;
+ (id)tsce_internationalColonCharacterSet;
+ (id)tsce_internationalWhitespaceAndNewlineCharacterSet;
+ (id)tsce_internationalWhitespaceCharacterSet;
+ (id)tsce_listDelimiterCharacterSet;
+ (id)tsce_periodCharacterSet;
+ (id)tsce_singleQuoteCharacterSet;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSText.framework/TSText

+ (id)tswp_allQuotesCharacterSetExcludingLeft;
+ (id)tswp_allQuotesCharacterSetExcludingRight;
+ (id)tswp_breakingSpaceCharacterSet;
+ (id)tswp_characterSetWithCharactersInArray:(const unsigned short*)arg1 length:(unsigned long long)arg2;
+ (id)tswp_curlyQuotesCharacterSet;
+ (id)tswp_invisibleCharacterSet;
+ (id)tswp_lineBreakingCharacterSet;
+ (id)tswp_postSmartSet;
+ (id)tswp_preSmartSet;
+ (id)tswp_sentenceDelimiterCharacterSet;
+ (id)tswp_singleLeftQuoteCharacterSet;
+ (id)tswp_singleRightQuoteCharacterSet;
+ (id)tswp_smartSingleQuotesCharacterSet;
+ (id)tswp_spaceCharacterSet;
+ (id)tswp_variationSelectorCharacterSet;

@end
