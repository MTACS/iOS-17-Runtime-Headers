
@interface CNPhotoPickerDefaultEmoji : NSObject {
    CNPhotoPickerColorVariant * _colorVariant;
    NSString * _emojiString;
}

@property (nonatomic, retain) CNPhotoPickerColorVariant *colorVariant;
@property (nonatomic, retain) NSString *emojiString;

- (void).cxx_destruct;
- (id)colorVariant;
- (id)emojiString;
- (id)initWithEmojiString:(id)arg1 colorVariant:(id)arg2;
- (void)setColorVariant:(id)arg1;
- (void)setEmojiString:(id)arg1;

@end
