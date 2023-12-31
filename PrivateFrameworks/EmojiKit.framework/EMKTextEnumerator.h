
@interface EMKTextEnumerator : NSObject {
    NSMutableDictionary * _emojiDatasByLanguage;
}

- (void).cxx_destruct;
- (id)emojiDataForLanguage:(id)arg1;
- (void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)init;

@end
