
@interface IAStringDetails : NSObject {
    long long  _characters;
    long long  _emojiCharacters;
    long long  _punctuationCharacters;
}

@property (nonatomic) long long characters;
@property (nonatomic) long long emojiCharacters;
@property (nonatomic) long long punctuationCharacters;

+ (id)getDetailsForString:(id)arg1;

- (long long)characters;
- (long long)emojiCharacters;
- (long long)punctuationCharacters;
- (void)setCharacters:(long long)arg1;
- (void)setEmojiCharacters:(long long)arg1;
- (void)setPunctuationCharacters:(long long)arg1;

@end
