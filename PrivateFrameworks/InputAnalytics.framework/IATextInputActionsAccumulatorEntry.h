
@interface IATextInputActionsAccumulatorEntry : NSObject {
    long long  _inputActions;
    long long  _netCharacters;
    long long  _netEmojiCharacters;
    long long  _userRemovedCharacters;
    long long  _userRemovedEmojiCharacters;
}

@property long long inputActions;
@property long long netCharacters;
@property long long netEmojiCharacters;
@property long long userRemovedCharacters;
@property long long userRemovedEmojiCharacters;

+ (id)generateAccumulatorEntryFromAction:(id)arg1;

- (void)increaseWithEntry:(id)arg1;
- (long long)inputActions;
- (bool)isAllZeroes;
- (long long)netCharacters;
- (long long)netEmojiCharacters;
- (void)setInputActions:(long long)arg1;
- (void)setNetCharacters:(long long)arg1;
- (void)setNetEmojiCharacters:(long long)arg1;
- (void)setUserRemovedCharacters:(long long)arg1;
- (void)setUserRemovedEmojiCharacters:(long long)arg1;
- (long long)userRemovedCharacters;
- (long long)userRemovedEmojiCharacters;

@end
