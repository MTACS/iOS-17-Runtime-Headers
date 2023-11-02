
@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (nonatomic) long long emojiCount;
@property (nonatomic, copy) NSArray *inflectedEmojiList;

+ (id)emojiParseChunk;
+ (id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2;

- (long long)emojiCount;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)inflectedEmojiList;
- (void)setEmojiCount:(long long)arg1;
- (void)setInflectedEmojiList:(id)arg1;

@end
