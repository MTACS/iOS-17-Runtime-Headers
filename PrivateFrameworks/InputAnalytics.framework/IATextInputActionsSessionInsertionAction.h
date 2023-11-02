
@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction {
    unsigned long long  _emojiCount;
    unsigned long long  _options;
    unsigned long long  _textLength;
}

@property (nonatomic) unsigned long long emojiCount;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long textLength;

- (bool)changedContent;
- (id)description;
- (unsigned long long)emojiCount;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (void)setEmojiCount:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setTextLength:(unsigned long long)arg1;
- (unsigned long long)textLength;

@end
