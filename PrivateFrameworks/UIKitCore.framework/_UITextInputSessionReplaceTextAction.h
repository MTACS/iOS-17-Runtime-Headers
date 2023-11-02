
@interface _UITextInputSessionReplaceTextAction : _UITextInputSessionAction {
    unsigned long long  _insertedEmojiCount;
    unsigned long long  _insertedPunctuationCount;
    unsigned long long  _insertedTextLength;
    unsigned long long  _options;
    unsigned long long  _removedEmojiCount;
    unsigned long long  _removedPunctuationCount;
    unsigned long long  _removedTextLength;
}

@property (nonatomic) unsigned long long insertedEmojiCount;
@property (nonatomic) unsigned long long insertedPunctuationCount;
@property (nonatomic) unsigned long long insertedTextLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long removedPunctuationCount;
@property (nonatomic) unsigned long long removedTextLength;

- (bool)changedContent;
- (id)description;
- (unsigned long long)insertedEmojiCount;
- (unsigned long long)insertedPunctuationCount;
- (unsigned long long)insertedTextLength;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)removedEmojiCount;
- (unsigned long long)removedPunctuationCount;
- (unsigned long long)removedTextLength;
- (void)setInsertedEmojiCount:(unsigned long long)arg1;
- (void)setInsertedPunctuationCount:(unsigned long long)arg1;
- (void)setInsertedTextLength:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemovedEmojiCount:(unsigned long long)arg1;
- (void)setRemovedPunctuationCount:(unsigned long long)arg1;
- (void)setRemovedTextLength:(unsigned long long)arg1;

@end
