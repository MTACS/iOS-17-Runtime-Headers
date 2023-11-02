
@interface TTSEmojiUtilities : NSObject

+ (void)_initializeEmojiStructures:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })emojiRangeFromString:(id)arg1 withSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (void)enumerateEmojiCharactersInString:(id)arg1 languageCode:(id)arg2 withBlock:(id /* block */)arg3;
+ (id)stringByRemovingEmojiCharacters:(id)arg1;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 stringForPauses:(id)arg2 language:(id)arg3 rangeReplacements:(id)arg4 appendEmojiSuffix:(bool)arg5;

@end
