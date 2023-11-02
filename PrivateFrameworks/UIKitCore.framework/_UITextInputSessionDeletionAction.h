
@interface _UITextInputSessionDeletionAction : _UITextInputSessionAction {
    unsigned long long  _options;
    unsigned long long  _removedEmojiCount;
    unsigned long long  _removedTextLength;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long removedTextLength;

- (bool)changedContent;
- (id)description;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (unsigned long long)removedEmojiCount;
- (unsigned long long)removedTextLength;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRemovedEmojiCount:(unsigned long long)arg1;
- (void)setRemovedTextLength:(unsigned long long)arg1;

@end
