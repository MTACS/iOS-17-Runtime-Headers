
@interface IMEmojiSticker : IMSticker {
    NSString * _emojiString;
}

@property (nonatomic, readonly, copy) NSString *emojiString;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)defaultEmojiStickerPackID;
+ (id)stickerPackID;
+ (id)tempFileURLForStickerID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emojiString;
- (id)initWithEmojiString:(id)arg1 stickerID:(id)arg2 stickerPackID:(id)arg3 fileURL:(id)arg4 accessibilityLabel:(id)arg5 moodCategory:(id)arg6 stickerName:(id)arg7 textToSpeechName:(id)arg8;
- (id)initWithEmojiString:(id)arg1 stickerPackID:(id)arg2;
- (id)initWithEmojiString:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3;
- (id)initWithEmojiString:(id)arg1 stickerPackID:(id)arg2 fileURL:(id)arg3 moodCategory:(id)arg4;
- (bool)isEmojiSticker;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)generateImage;
- (id)generateImageForFontSize:(double)arg1 imageGenerationScale:(double)arg2;
- (id)image;
- (bool)prepareToSend;
- (id)stickerView;
- (bool)writeGeneratedImageToFileURL:(id)arg1 error:(id*)arg2;
- (bool)writeGeneratedImageToFileURL:(id)arg1 fontSize:(double)arg2 imageGenerationScale:(double)arg3 error:(id*)arg4;

@end
