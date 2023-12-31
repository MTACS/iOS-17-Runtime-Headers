
@interface EMKEmojiTokenList : NSObject <NSCopying> {
    NSArray * _emojiTokenArray;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *emojiTokenArray;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)emojiTokenArray;
- (id)emojiTokenAtIndex:(unsigned long long)arg1;
- (id)initWithEmojiTokenArray:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end
