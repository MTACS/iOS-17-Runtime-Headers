
@interface EMFQueryResultSorter : NSObject

+ (id)_sortResults_clusterGenderVariantsTogether:(id)arg1 withLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;
+ (id)_sortResults_default:(id)arg1 withLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2;
+ (long long)compareEmojiTokenGenderInclusiveFirst:(id)arg1 withOtherToken:(id)arg2;
+ (id)sortResults:(id)arg1 withLocaleData:(struct __EmojiLocaleDataWrapper { }*)arg2 sortType:(unsigned long long)arg3;

@end
