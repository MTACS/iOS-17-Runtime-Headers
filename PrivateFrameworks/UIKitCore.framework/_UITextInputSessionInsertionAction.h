
@interface _UITextInputSessionInsertionAction : _UITextInputSessionAction {
    unsigned long long  _emojiCount;
    unsigned long long  _options;
    unsigned long long  _punctuationCount;
    unsigned long long  _textLength;
    unsigned long long  _withAlternativesCount;
}

@property (nonatomic) unsigned long long emojiCount;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long punctuationCount;
@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long withAlternativesCount;

- (bool)changedContent;
- (id)description;
- (unsigned long long)emojiCount;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)punctuationCount;
- (void)setEmojiCount:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPunctuationCount:(unsigned long long)arg1;
- (void)setTextLength:(unsigned long long)arg1;
- (void)setWithAlternativesCount:(unsigned long long)arg1;
- (unsigned long long)textLength;
- (unsigned long long)withAlternativesCount;

@end
