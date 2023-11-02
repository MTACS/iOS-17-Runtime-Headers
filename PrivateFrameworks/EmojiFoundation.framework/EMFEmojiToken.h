
@interface EMFEmojiToken : NSObject <NSCopying, NSSecureCoding> {
    bool  _didFailCEM;
    struct __EmojiTokenWrapper { } * _emojiTokenRef;
    NSString * _localeIdentifier;
    NSString * _string;
}

@property (nonatomic, readonly) NSString *_baseString;
@property (nonatomic, readonly) unsigned short _emojiIndex;
@property (nonatomic, readonly) bool _shouldHighlightEmoji;
@property (nonatomic, readonly, copy) NSArray *_skinToneVariantStrings;
@property (nonatomic, readonly) const struct __EmojiTokenWrapper { }*emojiTokenRef;
@property (nonatomic, readonly) int gender;
@property (nonatomic, readonly) bool isCommon;
@property (nonatomic, readonly) bool isNewEmoji;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) EMFEmojiLocaleData *localeData;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, readonly) NSString *longFormEncodedStringVariantForMultiPersonGrouping;
@property (nonatomic, readonly) int presentationStyle;
@property (nonatomic, readonly) NSString *shortFormEncodedStringVariantForMultiPersonGrouping;
@property (nonatomic, readonly) int skinTone;
@property (nonatomic, readonly) NSArray *skinToneChooserVariants;
@property (nonatomic, readonly) NSArray *skinToneSpecifiers;
@property (nonatomic, readonly, copy) NSArray *skinToneVariants;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) bool supportsSkinToneVariants;

+ (id)emojiTokenWithCEMEmojiToken:(struct __EmojiTokenWrapper { }*)arg1;
+ (id)emojiTokenWithLongCharacter:(unsigned int)arg1 localeData:(id)arg2;
+ (id)emojiTokenWithString:(id)arg1 localeData:(id)arg2;
+ (id)emojiTokensForCEMEmojiTokens:(struct __CFArray { }*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_baseString;
- (void)_createEmojiTokenRefIfNecessary;
- (unsigned short)_emojiIndex;
- (bool)_shouldHighlightEmoji;
- (id)_skinToneVariantStrings;
- (id)copyWithPresentationStyle:(int)arg1;
- (id)copyWithSkinToneVariant:(int)arg1;
- (id)copyWithSkinToneVariantSpecifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutModifiers;
- (void)dealloc;
- (id)description;
- (struct __EmojiTokenWrapper { }*)emojiTokenRef;
- (void)encodeWithCoder:(id)arg1;
- (int)gender;
- (unsigned long long)hash;
- (id)initWithCEMEmojiToken:(struct __EmojiTokenWrapper { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 localeIdentifier:(id)arg2;
- (bool)isCommon;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringModifiers:(id)arg1;
- (bool)isNewEmoji;
- (bool)isValid;
- (id)localeData;
- (id)localeIdentifier;
- (id)longFormEncodedStringVariantForMultiPersonGrouping;
- (id)nameForType:(int)arg1;
- (int)presentationStyle;
- (id)relatedEmojiTokens:(unsigned long long)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setString:(id)arg1;
- (id)shortFormEncodedStringVariantForMultiPersonGrouping;
- (int)skinTone;
- (id)skinToneChooserVariants;
- (id)skinToneSpecifiers;
- (id)skinToneVariants;
- (id)string;
- (bool)supportsPresentationStyle:(int)arg1;
- (bool)supportsSkinToneVariants;

@end
