
@interface BRLTJapaneseProcessor : NSObject {
    NSDictionary * _kataToHira;
}

- (void).cxx_destruct;
- (id)init;
- (bool)isWordDescriptionLike:(id)arg1;
- (id)longVowelExpressedFor:(id)arg1 partOfSpeech:(long long)arg2;
- (id)replaceKataWithHira:(id)arg1;
- (id)spacedYomiOfWordDescription:(id)arg1;

@end
